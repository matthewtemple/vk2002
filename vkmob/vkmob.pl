vkmobInit();
return 1;

sub vkmobAllTrim {}

sub vkmobInit {
  $_vkmobIndentChar = " ";
}

sub vkmobLTrim {}

sub vkmobRTrim {}

sub vkmobTerminalFormat {
  my $s = shift(@_);
  my $indent = shift(@_);
  my $col = shift(@_);
  if ($col eq "") {
    $col = 80;
  }
  my $indentText = "";
  if ($indent ne "") {
    for (my $e = 1; $e <= $indent; $e++) {
      $indentText = $indentText . $_vkmobIndentChar;
    }
    $col = $col - $indent;
  }
  my $sLen = length($s);
  my $lines = int($sLen / $col);
  my $form = "";
  if (($sLen % $col) > 0) {
    $lines++;
  }
  for (my $i = 0; $i <= ($lines - 1); $i++) {
    $form = $form . $indentText . substr($s, $col * $i, $col) . "\n";
  }
  return $form;
}
