#!/usr/bin/perl

$cxx = "";
$ifLevel = 0;
$active[$ifLevel] = 1;
procFile(@ARGV);

sub procFile() {
  my $filename = shift(@_);
  open(F, $filename);

  while (<F>) {
    if (/^#define\s+(\w+)/) {
      $defs{$1} = 1;
    }
    if (/^#undef\s+(\w+)/) {
      $defs{$1} = 0;
    }
    if (/^#ifdef\s+(\w+)/) {
      $ifLevel++;
      if ($defs{$1} == 1) {
        $active[$ifLevel] = 1;
      } else {
        $active[$ifLevel] = 0;
      }
    }
    if (/^#endif/) {
      $ifLevel--;
    }
    if (/^#include\s*"(\w+)"/) {
      if ($active[$ifLevel]) {
        $cxx = $cxx . procFile($1);
      }
    }
    if (/^[^#]/) {
      if ($active[$ifLevel]) {
        $cxx = $cxx . $_;
      }
    }
  }
  close(F);
}

print $cxx;
