#!/usr/bin/perl

$ar = shift;
$an = shift;
$ax = fp($ar, $an);
printf("%2.6s", "$ax");
print("\n");

sub fp {
  my $r = shift(@_);
  my $n = shift(@_);
  my $x = (fc($r, $n) / (2 * $r));
  return($x);
}

sub fc {
  my $r = shift(@_);
  my $n = shift(@_);
  my $x = (4 * 2**$n * fs($r, $n));
  return($x);
}

sub fs {
  my $r = shift(@_);
  my $n = shift(@_);
  my $x;
  my $m;
  if ($n == 0) {
    $x = sqrt(2 * $r**2);
  }
  if ($n != 0) {
    $m = fs($r, $n - 1);
    $x = sqrt(($m / 2)**2 +
              ($r - sqrt(
                         ($r**2) - ($m / 2)**2
                        )
              )**2
             );
  }
  return($x);
}
