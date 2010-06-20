#!/usr/bin/perl

$k = 11;
$k = 41 * 17;
$k = 5 * 7;
$k = 23 * 41;

$oc = 1;
$cc = 0;
for ($w = $k; $w >= 1; $w--) {
  $c = int($k / $w);
  $e = $k % $w;
  $b = $w - $e;
  if ($w > 1) {
    $nc = $c + int(($e + $c) / ($w - 1));
    $ne = ($e + $c) % ($w - 1);
  } else {
    $nc = "-";
    $ne = "-";
  }
  #print "$w $c $e $b $nc $ne\n";
  if ($c == $oc) {
    $cc++;
  } else {
    print "$k = $w * $c + $e ; $nc, $ne $cc\n";
    $oc = $c;
    $cc = 1;
  }
  #print "$k = $w * $c + $e ; $nc, $ne $cc\n";
}
