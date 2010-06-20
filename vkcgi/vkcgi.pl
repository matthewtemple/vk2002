# vkcgi.pl


# ----[ user function ]----
# thin frame capability for off-site links
# make translateData not split up tag paris

# ----[ internal function ]----
# add capability for #comments in .d files
# alpha funs
# ATOM_UNIX -> ATOM_FILESYS ?


require("vk/library/cgi-lib/cgi-lib.pl");
require("vk/library/cookie-lib/cookie-lib.pl");
return(1);


# each app should
#   define a getBODY()
#   define a processText()
#
# init sequence:
#   require("vk/vk.pl");
#   vkInitVars1();
#   # if needed, modify:
#   #   $VK_ATOM_UNIX
#   #   $VK_DEFAULT_CHUNK_SIZE
#   #   $VK_DEFAULT_LAYOUT
#   #   $VK_DEFAULT_I
#   #   $VK_DEFAULT_STYLE
#   #   $VK_MAIL_RECIPIENT
#   vkLoadData();
#   # [app data load]
#   vkGetURLParams();
#   vkGetCookies();
#   vkInitVars2();
#   # if needed, modify:
#   #   $VK_COPYRIGHT
#   #   $VK_JAVASCRIPT
#   #   $VK_META_DESCRIPTION
#   #   $VK_META_KEYWORDS
#   #   $VK_TITLE
#   # [app init]
#   # [app dispatch]
#   vkDispatch();


sub vkInitVars1 {
  srand();
  $VK_A = "";
  $VK_ATOM = "atom";
  $VK_ATOM_UNIX = "atom";
  $VK_COPYRIGHT = "";
  $VK_CHUNK_END = "";
  $VK_CHUNK_SIZE = "";
  $VK_CHUNK_START = "";
  $VK_CHUNK_START_NEXT = "";
  $VK_CHUNK_START_PREV = "";
  $VK_DEFAULT_CHUNK_SIZE = 256;
  $VK_DEFAULT_STYLE = "dark_splash";
  #$VK_DTD = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\" \"DTD/xhtml1-strict.dtd\">";
  $VK_DTD = "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\" \"http://www.w3.org/TR/html4/loose.dtd\">";
  $VK_FILENAME = "";
  $VK_I = "";
  $VK_J = "";
  $VK_MAIL_RECIPIENT = "rajzha\@hotmail.com";
  $VK_META_DESCRIPTION = "";
  $VK_META_KEYWORDS = "";
  $VK_STYLE = "";
  $VK_TITLE = "";
  @VK_Z = ();
}


sub vkLoadData {
  vkInitZ();
  vkLoadZ("d/z.d");
}


sub vkGetURLParams {
  &ReadParse(*input);
  $VK_A = vkGetURLParam("a", "");
  $VK_I = vkGetURLParam("i", "");
  $VK_J = vkGetURLParam("j", "");

  if (($VK_I eq "") && ($VK_A eq "")) {
    $VK_REQUEST_ROOT = 1;
  } else {
    $VK_REQUEST_ROOT = 0;
  }
  $VK_I = vkGetURLParam("i", "$VK_DEFAULT_I");
  if ($VK_REQUEST_ROOT == 0) {
    if ($VK_Z{$VK_I}{"type"} eq "") {
      $VK_I = "404";
    }
  }
  $VK_CHUNK_START = vkGetURLParam("chunk_start", "");
  if ($VK_CHUNK_START < 0) {
    $VK_CHUNK_START = 0;
  }
  $VK_CHUNK_SIZE = vkGetURLParam("chunk_size", $VK_DEFAULT_CHUNK_SIZE);
  if ($VK_CHUNK_SIZE < 0) {
    $VK_CHUNK_SIZE = $VK_DEFAULT_CHUNK_SIZE;
  }
  $VK_LAYOUT = vkGetURLParam("layout", "");
  $VK_NOFRAME = vkGetURLParam("noframe", "");
  $VK_SEARCH_DATE = vkGetURLParam("search_date", "");
  $VK_SEARCH_TEXT = vkGetURLParam("search_text", "");
  $VK_SET_LAYOUT_TO = vkGetURLParam("set_layout_to", "");
  $VK_SET_STYLE_TO = vkGetURLParam("set_style_to", "");
  $VK_STYLE = vkGetURLParam("style", "");
  $VK_SEND_MAIL_FROM = vkGetURLParam("send_mail_from", "");
  $VK_SEND_MAIL_SUBJECT = vkGetURLParam("send_mail_subject", "");
  $VK_SEND_MAIL_BODY = vkGetURLParam("send_mail_body", "");
  $VK_THIN_FRAME_SIZE = vkGetURLParam("thin_frame_size", "");
  $VK_THIN_FRAME_NAV_URL = vkGetURLParam("thin_frame_nav_url", "");
  $VK_THIN_FRAME_URL = vkGetURLParam("thin_frame_url", "");
}


sub vkGetCookies {
  GetCookies();
}


sub vkInitVars2 {
  if ($VK_LAYOUT eq "") {
    $VK_LAYOUT = $Cookies{"layout"};
    if (($VK_LAYOUT eq "") || ($VK_LAYOUT eq "default")) {
      $VK_LAYOUT = $VK_DEFAULT_LAYOUT;
    }
  }
  if ($VK_STYLE eq "") {
    $VK_STYLE = $VK_Z{$VK_I}{"style"};
    if ($VK_STYLE eq "default") {
      $VK_STYLE = $Cookies{"style"};
    }
    if (($VK_STYLE eq "default") || ($VK_STYLE eq "")) {
      $VK_STYLE = $VK_DEFAULT_STYLE;
    }
  }
  $VK_TYPE = $VK_Z{$VK_I}{"type"};    
  if ($VK_A ne "") {
    $VK_TYPE = "atomic_text";
  }
  $VK_FILENAME = $VK_Z{$VK_I}{"filename"};
  $VK_CHUNK_START_NEXT = ($VK_CHUNK_START + $VK_CHUNK_SIZE);
  $VK_CHUNK_START_PREV = ($VK_CHUNK_START - $VK_CHUNK_SIZE);
  if ($VK_CHUNK_START == 0) {
    $VK_CHUNK_BEGIN = 1;
  }
}


sub vkContainsImage {
  my $MEAL = shift(@_);
  my $MEAL_CONTAINS_IMG;
  if (index(lc($MEAL), "<img") == -1) {
    $MEAL_CONTAINS_IMG = 0;
  } else {
    $MEAL_CONTAINS_IMG = 1;
  }
  return $MEAL_CONTAINS_IMG;
}


sub vkDispatch {
  my $HEADER;
  my $HTML;
  my $RESOURCE;
  my $SNIP = "";
  if ($VK_A eq "list_random_resource") {
    my $RESOURCE_FILENAME_EACH;
    my $RESOURCE_I_EACH;
    my $RESOURCE_TYPE_EACH;
    open(FH, "$VK_ATOM_UNIX/$VK_FILENAME");
    while ($RESOURCE_I_EACH = <FH>) {
      chop($RESOURCE_I_EACH);
      if ($RESOURCE_I_EACH ne "") {
        $SNIP = $SNIP . "<P>";
        $RESOURCE_FILENAME_EACH = $VK_Z{$RESOURCE_I_EACH}{"filename"};
        $RESOURCE_TYPE_EACH = $VK_Z{$RESOURCE_I_EACH}{"type"};
        if ($RESOURCE_TYPE_EACH eq "image/gif") {
          $SNIP = $SNIP . "<IMG SRC='$VK_ATOM/$RESOURCE_FILENAME_EACH'>";
        }
        if ($RESOURCE_TYPE_EACH eq "image/jpeg") {
          $SNIP = $SNIP . "<IMG SRC='$VK_ATOM/$RESOURCE_FILENAME_EACH'>";
        }
        if ($RESOURCE_TYPE_EACH eq "text/html") {
          $SNIP = $SNIP . vkGetFile("text/html", "$VK_ATOM_UNIX/$REFOURCE_FILENAME_EACH");
        }
        $SNIP = $SNIP . "</P>";
      } # not a blank line
    }
    $HEADER = vkGetHTTPHeader("text/html");
    $HTML = vkGetPage($SNIP);
    print($HEADER);
    print($HTML);
    exit(0);
  }
  if ($VK_A eq "send_mail") {
    open(FH, ">/tmp/vk.$$");
    print FH $VK_SEND_MAIL_BODY;
    close(FH);
    `/usr/bin/mail -s "$VK_SEND_MAIL_FROM: $VK_SEND_MAIL_SUBJECT" $VK_MAIL_RECIPIENT < /tmp/vk.$$`;
    `rm -f /tmp/vk.$$`;
    print "Location: ?i=$VK_I\n";
    print "\n";
    exit(0);
  }
  if ($VK_A eq "set_layout") {
    SetCookiePath("/");
    SetCookieExpDate("Sun, 31-Dec-2034 22:12:07 GMT");
    SetCookies("layout", $VK_SET_LAYOUT_TO);
    print "Location: ?i=$VK_I\n";
    print "\n";
    exit(0);
  }
  if ($VK_A eq "set_style") {
    SetCookiePath("/");
    SetCookieExpDate("Sun, 31-Dec-2034 22:12:07 GMT");
    SetCookies("style", $VK_SET_STYLE_TO);
    print "Location: ?i=$VK_I\n";
    print "\n";
    exit(0);
  }
  if ($VK_A eq "thin_frame") {
  }
  if ($VK_TYPE eq "atomic_text") {
    $HEADER = vkGetHTTPHeader("text/html");
    $SNIP = vkGetFile("text/html", "$VK_ATOM_UNIX/$VK_FILENAME");
    $HTML = vkGetPage($SNIP);
    print($HEADER);
    print($HTML);
    exit(0);
  }
  if ($VK_TYPE eq "image") {
    $HEADER = vkGetHTTPHeader("text/html");
    $SNIP = "<IMG SRC='$VK_ATOM/$VK_FILENAME'>";
    $HTML = vkGetPage($SNIP);
    print($HEADER);
    print($HTML);
    exit(0);
  }
  if ($VK_TYPE eq "image/gif") {
    $RESOURCE = vkGetResource("image/gif", "$VK_ATOM_UNIX/$VK_FILENAME");
    print($RESOURCE);
    exit(0);
  }
  if ($VK_TYPE eq "image/jpeg") {
    $RESOURCE = vkGetResource("image/jpeg", "$VK_ATOM_UNIX/$VK_FILENAME");
    print($RESOURCE);
    exit(0);
  }
  if ($VK_TYPE eq "random_resource") {
    my $RESOURCE_CHOICE;
    my $RESOURCE_COUNT = 0;
    my $RESOURCE_FILENAME;
    my $RESOURCE_I_EACH;
    my $RESOURCE_TYPE;
    my @RESOURCES = {};
    open(FH, "$VK_ATOM_UNIX/$VK_FILENAME");
    while ($RESOURCE_I_EACH = <FH>) {
      chop($RESOURCE_I_EACH);
      if ($RESOURCE_I_EACH ne "") {
        $RESOURCES[$RESOURCE_COUNT]{"filename"}
          = $VK_Z{$RESOURCE_I_EACH}{"filename"};
        $RESOURCES[$RESOURCE_COUNT]{"type"}
          = $VK_Z{$RESOURCE_I_EACH}{"type"};
        $RESOURCE_COUNT++;
      } # not a blank line
    }
    $RESOURCE_CHOICE = int(rand() * $RESOURCE_COUNT);
    $RESOURCE_FILENAME = $RESOURCES[$RESOURCE_CHOICE]{"filename"};
    $RESOURCE_TYPE = $RESOURCES[$RESOURCE_CHOICE]{"type"};
    close(FH);
    $RESOURCE = vkGetResource($RESOURCE_TYPE, "$VK_ATOM_UNIX/$RESOURCE_FILENAME");
    print($RESOURCE);
    exit(0);
  }
  if ($VK_TYPE eq "segmentable_text") {
    # enable segmenting of this type of content
    if ($VK_CHUNK_START eq "") {
      $VK_CHUNK_START = 0;
    }
    $HEADER = vkGetHTTPHeader("text/html");
    $SNIP = vkGetFile("text/html", "$VK_ATOM_UNIX/$VK_FILENAME", $VK_CHUNK_START, $VK_CHUNK_SIZE);
    $SNIP = vkGetPreviousChunkLink() . $SNIP;
    $SNIP = $SNIP . vkGetNextChunkLink();
    $HTML = vkGetPage($SNIP);
    print($HEADER);
    print($HTML);
    exit(0);
  }
  if ($VK_TYPE eq "text/html") {
    $RESOURCE = vkGetResource("text/html", "$VK_ATOM_UNIX/$VK_FILENAME");
    print($RESOURCE);
    exit(0);
  }
}


sub vkGetFile {
  my $MIMET = shift(@_);
  my $FNAME = shift(@_);
  my $CSTART = shift(@_);
  my $CSIZE = shift(@_);
  my $MODE = shift(@_);
  my $DATA = "";
  my $LINE = "";
  my $CUT_A;
  my $CUT_B;

  open(FH, "$FNAME");
  while ($LINE = <FH>) {
    $DATA = $DATA . $LINE;
  }
  close(FH);

  if ($CSTART ne "") {
    $DATA = vkSubStringWord($DATA, $CSTART, $CSIZE);
  }

  if ($MODE eq "tease") {
    $CUT_A = index($DATA, "{TEASE}") + 7;
    $CUT_B = index($DATA, "{/TEASE}");
    if (($CUT_A != -1) && ($CUT_B != -1)) {
      $DATA = substr($DATA, $CUT_A, ($CUT_B - $CUT_A));
    }
  }

  if ($MIMET eq "text/html") {
    $DATA = processText($DATA);
    $DATA = vkProcessText($DATA);
  }

  return($DATA);
}


sub vkGetHEAD {
  my $HTML2 = shift(@_);
  my $HTML = "";
  $HTML = $HTML . "<HEAD>";
  $HTML = $HTML . vkGetStylesheet();
  $HTML = $HTML . vkGetTITLE();
  $HTML = $HTML . "<META NAME='author' CONTENT='zha'>";
  $HTML = $HTML . "<META NAME='description' CONTENT='$VK_META_DESCRIPTION'>";
  $HTML = $HTML . "<META NAME='keywords' CONTENT='$VK_META_KEYWORDS'>";
  $HTML = $HTML . "<BASE TARGET='_top'>";
  $HTML = $HTML . $VK_JAVASCRIPT;
  $HTML = $HTML . $HTML2;
  $HTML = $HTML . "</HEAD>";
  return($HTML);
}


sub vkGetHTTPHeader {
  my $MIME = shift(@_);
  if ($MIME eq "") {
    $MIME = "text/html";
  }
  my $HTML = "";

  $HTML = $HTML . "Content-type: $MIME\n";
  if ($MIME eq "text/html") {
    $HTML = $HTML . "Pragma: no-cache\n";
    # Cache-Control: no-cache\n
  }

  $HTML = $HTML . "\n";
  return($HTML);
}


sub vkGetNextChunkLink {
  my $HTML = "";
  if (($VK_CHUNK_START ne "") && ($VK_CHUNK_END != 1)) {
    $HTML = " <A HREF='?i=$VK_I&chunk_start=$VK_CHUNK_START_NEXT'><B>&gt;&gt;</B></A>"
;
  }
  return($HTML);
}


sub vkGetPage {
  my $HTML2 = shift(@_);
  my $HTML = "";
  $HTML = $HTML . $VK_DTD;
  $HTML = $HTML . "<HTML>";
  $HTML = $HTML . vkGetHEAD();
  $HTML = $HTML . getBODY($HTML2);
  $HTML = $HTML . "</HTML>";
  return($HTML);
}


sub vkGetPreviousChunkLink {
  my $HTML = "";
  if (($VK_CHUNK_START ne "") && ($VK_CHUNK_BEGIN != 1)) {
    $HTML = "<A HREF='?i=$VK_I&chunk_start=$VK_CHUNK_START_PREV'><B>&lt;&lt;</A></B> "
;
  }
  return($HTML);
}


sub vkGetResource {
  my $MIME = shift(@_);
  my $FILE = shift(@_);
  my $HEADER = vkGetHTTPHeader($MIME);
  my $RESOURCE = vkGetFile($MIME, $FILE, $VK_CHUNK_START, $VK_CHUNK_SIZE);
  return $HEADER . $RESOURCE;
}


sub vkGetStylesheet {
  my $HTML = "";
  if ($VK_STYLE ne "") {
    $HTML = "<LINK HREF='$VK_ATOM/style/${VK_STYLE}.css' REL='stylesheet' TYPE='text/css'>";
  }
  return $HTML;
}


sub vkGetTITLE {
  return("<TITLE>$VK_TITLE</TITLE>");
}


sub vkGetURLParam {
  my $NAME = shift(@_);
  my $DEFAULT = shift(@_);
  my $VALUE = $input{$NAME};
  if ($VALUE eq "") {
    $VALUE = $DEFAULT;
  }
  return($VALUE);
}


sub vkInitZ {
  @VK_Z = ();
}


sub vkLoadZ {
  my $FILENAME = shift(@_);
  if ($FILENAME eq "") {
    $FILENAME = "d/z.d";
  }
  my $LINE;
  my $I_NAME;
  my $I_TYPE;
  my $I_STYLE;
  my $I_FILENAME;
  my $I_A;
  my $I_B;
  my $I_C;
  open(FH, "$VK_ATOM_UNIX/$FILENAME");
  while ($LINE = <FH>) {
    chop($LINE);
    if ($LINE ne "") {

      ($I_NAME, $I_TYPE, $I_STYLE, $I_FILENAME,
       $I_A, $I_B, $I_C)
       = split(/\t/, $LINE);
      $VK_Z{$I_NAME}{"type"} = $I_TYPE;
      $VK_Z{$I_NAME}{"style"} = $I_STYLE;
      $VK_Z{$I_NAME}{"filename"} = $I_FILENAME;

      if ($I_TYPE eq "journal") {
        $VK_Z{$I_NAME}{"date"} = $I_A;
        $VK_Z{$I_NAME}{"time"} = $I_B;
        $VK_Z{$I_NAME}{"previous"} = $I_C;
      }

      if ($I_TYPE eq "tease") {
        $VK_Z{$I_NAME}{"i"} = $I_A;
      }

    } # not a blank line
  }
  close(FH);
}


sub vkProcessText {
  my $TEXT = shift(@_);
  $TEXT =~ s/\x93/&quot;/g;
  $TEXT =~ s/\x94/&quot;/g;
  $TEXT =~ s/\x92/\'/g;
  $TEXT =~ s/{ATOM}/$VK_ATOM/g;
  $TEXT =~ s/{SEARCH_TEXT}/$VK_SEARCH_TEXT/g;
  $TEXT =~ s/{A}/$VK_A/g;
  $TEXT =~ s/{I}/$VK_I/g;
  $TEXT =~ s/{J}/$VK_J/g;
  $TEXT =~ s/{LAYOUT}/$VK_LAYOUT/g;
  $TEXT =~ s/{STYLE}/$VK_STYLE/g;
  return $TEXT;
}


sub vkSubStringWord {
  my $STRING = shift(@_);
  my $START = shift(@_);
  my $SIZE = shift(@_);
  my $STRING_LENGTH = length($STRING);
  my $CUT_A = -1;
  my $CUT_B = -1;
  my $EACH_CHAR;
  my $CHAR;
  my $SUBSTRING;
  my $SPACE_NUM = 0;
  $STRING = vkTranslateData($STRING, 0);
  for ($EACH_CHAR = 0; $EACH_CHAR <= $STRING_LENGTH; $EACH_CHAR++) {
    $CHAR = substr($STRING, $EACH_CHAR, 1);
    if ($CHAR eq " ") {
      $SPACE_NUM++;
    }
    if ($CUT_A == -1) {
      if ($SPACE_NUM == $START) {
        $CUT_A = $EACH_CHAR;
      }
    }
    if ($CUT_B == -1) {
      if ($SPACE_NUM == ($START + $SIZE)) {
        $CUT_B = $EACH_CHAR;
      }
    }
  }
  if ($CUT_B == -1) {  # reach the end before the sought ending space
    $CUT_B = $STRING_LENGTH;
    $VK_CHUNK_END = 1;
  }
  if (($STRING_LENGTH - $CUT_B) < $CHUNK_MIN_CHARS) {  # next chunk (last chunk)would be too small
    $CUT_B = $STRING_LENGTH;
    $VK_CHUNK_END = 1;
  }
  $STRING = vkTranslateData($STRING, 1);
  $SUBSTRING = substr($STRING, $CUT_A, ($CUT_B - $CUT_A));
  return($SUBSTRING);
}


sub vkTranslateData {
  my $DATA = shift(@_);
  my $DIRECTION = shift(@_);
  my $DATA_NEW = "";
  my $DATA_LENGTH = length($DATA);
  my $CURSOR;
  my $CHAR;
  my $IN_TAG = 0;
  if ($DIRECTION == 0) {
    for ($CURSOR = 0; $CURSOR <= $DATA_LENGTH; $CURSOR++) {
      $CHAR = substr($DATA, $CURSOR, 1);
      if ($CHAR eq "<") {
        $IN_TAG = 1;
      }
      if ($CHAR eq ">") {
        $IN_TAG = 0;
      }
      if (($IN_TAG == 1) && ($CHAR eq " ")) {
        $CHAR = "\t";
      }
      $DATA_NEW = $DATA_NEW . $CHAR;
    }
  }
  if ($DIRECTION == 1) {
    for ($CURSOR = 0; $CURSOR <= $DATA_LENGTH; $CURSOR++) {
      $CHAR = substr($DATA, $CURSOR, 1);
      if ($CHAR eq "<") {
        $IN_TAG = 1;
      }
      if ($CHAR eq ">") {
        $IN_TAG = 0;
      }
      if (($IN_TAG == 1) && ($CHAR eq "\t")) {
        $CHAR = " ";
      }
      $DATA_NEW = $DATA_NEW . $CHAR;
    }
  }
  return($DATA_NEW);
}
