#!/usr/bin/perl

print "reading";
while ($file = shift) {
  open(F, $file);
  print " [$file]";
  $idx_include = 0;
  $idx_classdec = 0;
  $idx_classancestors = 0;
  while (<F>) {

    # includes
    if (/^#include.*"(.*)"/) {
      $nfo{$file}{"include"}[$idx_include] = $1;
      $idx_includes++;
      print ".";
    }

    # class declarations
    if (!/template/) {
      if (/class\s+(\w+)/) {
        $nfo{$file}{"classdec"}[$idx_classdec] = $1;
        $idx_classdec++;
        print ".";
      }
    } elsif (/>\s*class\s+(\w+)/) {
      $nfo{$file}{"classdec"}[$idx_classdec] = $1;
      $idx_classdec++;
      print ".";
    }

    # class ancestors
    if (/class\s+\w+\s+:\s+(public|private|protected)\s+(\w+)/) {
      $nfo{$file}{"classanc"}[$idx_classancestors] = $2;
      $idx_classancestors++;
      print ".";
    }

  }
  close(F);
}
print " done\n";

foreach $file (keys %nfo) {
  print "$file\n";
  print "  includes\n";
  for my $i (@{$nfo{$file}{"include"}}) {
    print "    $i\n";
  }
  print "  class declarations\n";
  for my $i (@{$nfo{$file}{"classdec"}}) {
    print "    $i\n";
  }
  print "  class ancestors\n";
  for my $i (@{$nfo{$file}{"classanc"}}) {
    print "    $i\n";
  }
  print "\n";
}
