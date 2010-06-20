#!/usr/bin/perl


# --[ user function ]--
# consider discussion board-type thing
# polish up styles
# rapdict-like freely syndicatable content...zhaisms, etc
# book view for journal - all together, in one document
# generic search form (not just for journals) and make it a toolbar button

# --[ content ]--
# new music
# wordbowl
# banished to the moon
# different style for small zone?
# sounds from tape recorder - dialog snippets
# words (e s s e n c e, m e t a m o r p h)

# --[ internal function ]--
# auto-tease: if no tease, pick first x words
# random_line type for things like Garnish*
# re-org graphics and other files into subdirs
#   move journal entries to journal/2001 subdir
# add alt, width, height attributes to image type and use
# (w/ vk.pl) cookie validator - insure layout in {...}
# scroll bar stylesheet code for all css


# --------[ vk init sequence ]--------
require("vk/vk.pl");
vkInitVars1();
  $VK_DEFAULT_CHUNK_SIZE = 200;
  $VK_DEFAULT_I = "inhesion";
  $VK_DEFAULT_LAYOUT = "hand";
  $VK_DEFAULT_STYLE = "hand";
  $VK_MAIL_RECIPIENT = "rajzha\@hotmail.com";
vkLoadData();
  vkLoadZ("d/z_hopper.d");
  vkLoadZ("d/z_journal_2001.d");
  vkLoadZ("d/z_random_resource.d");
  vkLoadZ("d/z_visual.d");
vkGetURLParams();
vkGetCookies();
vkInitVars2();
  $VK_COPYRIGHT = "copyright 2001 zha, all rights reserved";
  $VK_JAVASCRIPT = "<SCRIPT SRC='http://www.inhesion.com/atom/script/ih.js' LANGUAGE='JavaScript'></SCRIPT>";
  $VK_META_DESCRIPTION = "";
  $VK_META_KEYWORDS = "";
  $VK_TITLE = "zha";


# --------[ init ]--------
$COPYRIGHT = vkGetFile("text/html", "$VK_ATOM_UNIX/snip/copyright.snip");
$COPYRIGHT_FONIX = vkGetFile("text/html", "$VK_ATOM_UNIX/snip/copyright_fonix.snip");
$MENU_ICON_DIME = 64;
$TEASE_LINK_TO = "";

loadGarnishText();
loadGarnishImage();
loadZhaism();


# --------[ dispatch ]--------
if ($VK_A eq "list_garnish_text") {
  $HEADER = vkGetHTTPHeader("text/html");
  $SNIP = getGarnishTextList();
  $HTML = vkGetPage($SNIP);
  print($HEADER);
  print($HTML);
  exit(0);
}
if ($VK_A eq "list_garnish_image") {
  $HEADER = vkGetHTTPHeader("text/html");
  $SNIP = getGarnishImageList();
  $HTML = vkGetPage($SNIP);
  print($HEADER);
  print($HTML);
  exit(0);
}
if ($VK_A eq "search_journal") {
  $HEADER = vkGetHTTPHeader("text/html");
  $SNIP = getSearchJournal($VK_SEARCH_DATE, $VK_SEARCH_TEXT);
  $HTML = vkGetPage($SNIP);
  print($HEADER);
  print($HTML);
  exit(0);
}

if ($VK_TYPE eq "journal") {
  # enable segmenting of this type of content
  #if ($VK_CHUNK_START eq "") {
  #  $VK_CHUNK_START = 0;
  #}
  $HEADER = vkGetHTTPHeader("text/html");
  $SNIP = vkGetFile("text/html", "$VK_ATOM_UNIX/$VK_FILENAME", $VK_CHUNK_START, $VK_CHUNK_SIZE);
  $SNIP = vkGetPreviousChunkLink() . $SNIP;
  $SNIP = $SNIP . vkGetNextChunkLink();
  if (($VK_CHUNK_START eq "") || ($VK_CHUNK_START == 0)) {
    $SNIP = "<SPAN CLASS='date'>" . $VK_Z{$VK_I}{"date"} . " - " . $VK_Z{$VK_I}{"time"} . "</SPAN><BR>" . $SNIP;
  }
  $HTML = vkGetPage($SNIP);
  print($HEADER);
  print($HTML);
  exit(0);
}
if ($VK_TYPE eq "tease") {
  $HEADER = vkGetHTTPHeader("text/html");
  if ($TEASE_LINK_TO eq "") {
    # ...?
  }
  $TEASE_LINK_TO = $VK_Z{$VK_I}{"i"};
  $SNIP = $SNIP . "<A CLASS='tease' HREF='?i=$TEASE_LINK_TO'>";
  $SNIP = $SNIP . vkGetFile("text/html", "$VK_ATOM_UNIX/$VK_FILENAME", "", "", "tease");
  $SNIP = $SNIP . "</A>";
  $HTML = vkGetPage($SNIP);
  print($HEADER);
  print($HTML);
  exit(0);
}
if ($VK_TYPE eq "page") {
  $HEADER = vkGetHTTPHeader("text/html");
  $SNIP = vkGetFile("text/html", "$VK_ATOM_UNIX/$VK_FILENAME");
  $HTML = vkGetPage($SNIP);
  print($HEADER);
  print($HTML);
  exit(0);
}
if ($VK_TYPE eq "popup") {
  $HEADER = vkGetHTTPHeader("text/html");
  $SNIP = vkGetFile("text/html", "$VK_ATOM_UNIX/$VK_FILENAME");
  $HTML = vkGetPage($SNIP);
  print($HEADER);
  print($HTML);
  exit(0);
}
vkDispatch();


# --------[ subs ]--------
sub getBODY {
  my $HTML2 = shift(@_);
  my $HTML = "";
  my $MEAL = "";
  my $MENU = "";
  my $GARNISH = "";
  my $JOURNAL_PREVS = "";
  my $JOURNAL_ARCHIVE_LINKS = "";
  my $ZHA_TEXT = getZhaText();
  my $MEAL_CONTAINS_IMAGE = vkContainsImage($HTML2);
  my $R;
  my $A;
  my $B;
  my $C;
  my $D;
  my $E;
  my $F;

  $LAYOUT = "cell";
  if ($VK_TYPE eq "atomic_text") {
    $LAYOUT = "cell";
  }
  if ($VK_TYPE eq "image") {
    $LAYOUT = "cell";
  }
  if ($VK_TYPE eq "journal") {
    $LAYOUT = "cell";
    $JOURNAL_PREVS = getJournalPrevs($MEAL_CONTAINS_IMAGE);
    $JOURNAL_ARCHIVE_LINKS = vkGetFile("text/html", "$VK_ATOM_UNIX/snip/journal_archive_links.snip");
  }
  if ($VK_TYPE eq "page") {
    $LAYOUT = "plain";
  }
  if ($VK_TYPE eq "popup") {
    $LAYOUT = "plain";
  }
  if ($VK_TYPE eq "segmentable_text") {
    $LAYOUT = "cell";
  }
  if ($VK_TYPE eq "tease") {
    $LAYOUT = "plain";
  }

  $MEAL = $MEAL . "<SPAN CLASS='text'>" . $HTML2 . "</SPAN>";
  $MENU = $MENU . getMenu(0);  # getMenu() can switch on LAYOUT (and STYLE) (and I)
  $GARNISH = $GARNISH . getGarnish($MEAL_CONTAINS_IMAGE);

  if ($LAYOUT eq "cell") {
    if ($VK_LAYOUT eq "block") {
      $A = $ZHA_TEXT;
      $B = $MENU;
      $D = $MEAL;
      $C = $GARNISH . $JOURNAL_PREVS . $JOURNAL_ARCHIVE_LINKS;
      $C = $C . "<P>" . $COPYRIGHT . "</P>";
      $HTML = $HTML . "<BODY TOPMARGIN='0' LEFTMARGIN='0' MARGINWIDTH='0' MARGINHEIGHT='0'>";
      $HTML = $HTML . "<TABLE BORDER='0' CELLPADDING='0' CELLSPACING='0' WIDTH='100%' HEIGHT='100%'><TR><TD WIDTH='100%' HEIGHT='100%' ALIGN='center' VALIGN='top'>";
      $HTML = $HTML . "<TABLE WIDTH='80%' BORDER='0' CELLSPACING='0' CELLPADDING='16'>";
      $HTML = $HTML . "<TR>";
      $HTML = $HTML . "<TD ALIGN='right' VALIGN='bottom'>";
      $HTML = $HTML . $A;
      $HTML = $HTML . "</TD>";
      $HTML = $HTML . "<TD ALIGN='left' VALIGN='bottom'>";
      $HTML = $HTML . $B;
      $HTML = $HTML . "</TD>";
      $HTML = $HTML . "</TR>";
      $HTML = $HTML . "<TR>";
      $HTML = $HTML . "<TD ALIGN='right' VALIGN='top'>";
      $HTML = $HTML . $C;
      $HTML = $HTML . "</TD>";
      $HTML = $HTML . "<TD ALIGN='left' VALIGN='top'>";
      $HTML = $HTML . $D;
      $HTML = $HTML . "</TD>";
      $HTML = $HTML . "</TR>";
      $HTML = $HTML . "</TABLE>";
      $HTML = $HTML . "</TD></TR></TABLE>";
      $HTML = $HTML . "</BODY>";
    }
    if ($VK_LAYOUT eq "hand") {
      if ($VK_NOFRAME eq "1") {
        $HTML = $HTML . "<BODY TOPMARGIN='0' LEFTMARGIN='0' MARGINWIDTH='0' MARGINHEIGHT='0'>";
        $HTML = $HTML . "<TABLE BORDER='0' CELLSPACING='0' CELLPADDING='8' WIDTH='100%'><TR>";
        $HTML = $HTML . "<TD VALIGN='top' WIDTH='100'>";
        $HTML = $HTML . "<IMG SRC='$VK_ATOM/image/element/i3.jpg' WIDTH='100' HEIGHT='100'><P>";
        $HTML = $HTML . "<IMG SRC='$VK_ATOM/image/element/i2.jpg' WIDTH='100' HEIGHT='100'><P>";
        $HTML = $HTML . "<IMG SRC='$VK_ATOM/image/element/i1.jpg' WIDTH='100' HEIGHT='100'><P>";
        $HTML = $HTML . "<IMG SRC='$VK_ATOM/image/element/i3.jpg' WIDTH='100' HEIGHT='100'><P>";
        $HTML = $HTML . $COPYRIGHT_FONIX;
        $HTML = $HTML . "</TD>";
        $HTML = $HTML . "<TD VALIGN='top' WIDTH='100%'>";
        $HTML = $HTML . $MEAL;
        $HTML = $HTML . "</TD>";
        $HTML = $HTML . "</TR></TABLE>";
        $HTML = $HTML . "</BODY>";
      } else {
        $HTML = $HTML . "<FRAMESET COLS='*,1,800,1,*' BORDER='0'>";
        #$HTML = $HTML . "<FRAME SRC='?i=blank&noframe=1' NORESIZE FRAMEBORDER='0' SCROLLING='no' MARGINWIDTH='0' MARGINHEIGHT='0'>";
        $HTML = $HTML . "<FRAME SRC='$VK_ATOM/html/black.html' NORESIZE FRAMEBORDER='0' SCROLLING='no' MARGINWIDTH='0' MARGINHEIGHT='0'>";
        $HTML = $HTML . "<FRAME SRC='$VK_ATOM/html/white.html' NORESIZE FRAMEBORDER='0' SCROLLING='no' MARGINWIDTH='0' MARGINHEIGHT='0'>";
        $HTML = $HTML . "<FRAMESET ROWS='96,32,1,*,1,48' BORDER='0'>";
        $HTML = $HTML . "<FRAME SRC='$VK_ATOM/html/hand/banner.html' NORESIZE FRAMEBORDER='0' SCROLLING='no' MARGINWIDTH='0' MARGINHEIGHT='0'>";
        $HTML = $HTML . "<FRAME SRC='$VK_ATOM/html/hand/menu.html' NORESIZE FRAMEBORDER='0' SCROLLING='no' MARGINWIDTH='0' MARGINHEIGHT='0'>";
        $HTML = $HTML . "<FRAME SRC='$VK_ATOM/html/white.html' NORESIZE FRAMEBORDER='0' SCROLLING='no' MARGINWIDTH='0' MARGINHEIGHT='0'>";
        $HTML = $HTML . "<FRAME SRC='?i=$VK_I&noframe=1' NORESIZE FRAMEBORDER='0' SCROLLING='auto' MARGINWIDTH='0' MARGINHEIGHT='0' NAME='meal'>";
        $HTML = $HTML . "<FRAME SRC='$VK_ATOM/html/white.html' NORESIZE FRAMEBORDER='0' SCROLLING='no' MARGINWIDTH='0' MARGINHEIGHT='0'>";
        $HTML = $HTML . "<FRAME SRC='$VK_ATOM/html/hand/bottom.html' NORESIZE FRAMEBORDER='0' SCROLLING='no' MARGINWIDTH='0' MARGINHEIGHT='0'>";
        $HTML = $HTML . "</FRAMESET>";
        $HTML = $HTML . "<FRAME SRC='$VK_ATOM/html/white.html' NORESIZE FRAMEBORDER='0' SCROLLING='no' MARGINWIDTH='0' MARGINHEIGHT='0'>";
        $HTML = $HTML . "<FRAME SRC='$VK_ATOM/html/black.html' NORESIZE FRAMEBORDER='0' SCROLLING='no' MARGINWIDTH='0' MARGINHEIGHT='0'>";
        #$HTML = $HTML . "<FRAME SRC='?i=blank&noframe=1' NORESIZE FRAMEBORDER='0' SCROLLING='no' MARGINWIDTH='0' MARGINHEIGHT='0'>";
        $HTML = $HTML . "</FRAMESET>";
      }
    }  #LAYOUT -- hand
    if ($VK_LAYOUT eq "fashion") {
      $HTML = $HTML . "<BODY TOPMARGIN='0' LEFTMARGIN='0' MARGINWIDTH='0' MARGINHEIGHT='0'>";
      $HTML = $HTML . "<TABLE BORDER='0' CELLPADDING='0' CELLSPACING='0' WIDTH='100%' HEIGHT='100%'><TR><TD WIDTH='100%' HEIGHT='100%' ALIGN='left' VALIGN='top'>";
      $HTML = $HTML . "<TABLE BORDER='0' CELLPADDING='0' CELLSPACING='0' WIDTH='100%'>";
      $HTML = $HTML . "<TR>";
      $HTML = $HTML . "<TD VALIGN='top' WIDTH='256'>";
      $HTML = $HTML . "<IMG SRC='?i=random_sb_3' WIDTH='256' HEIGHT='256'><BR>";
      $HTML = $HTML . "<IMG SRC='?i=random_sb_2' WIDTH='256' HEIGHT='256'><BR>";
      $HTML = $HTML . "<IMG SRC='?i=random_sb_1' WIDTH='256' HEIGHT='256'><BR>";
      $HTML = $HTML . "<IMG SRC='?i=random_sb_0' WIDTH='256' HEIGHT='256'><BR>";
      $HTML = $HTML . "</TD>";
      $HTML = $HTML . "<TD VALIGN='top'>";
      $HTML = $HTML . "<P CLASS='finePrint'>";
      $HTML = $HTML . "<A HREF='?i=zha'>zha</A> | ";
      $HTML = $HTML . "<A HREF='?i=blog'>journal</A> | ";
      $HTML = $HTML . "<A HREF='?i=archives'>archives</A> | ";
      $HTML = $HTML . "<A HREF='?i=visual'>art</A> | ";
      $HTML = $HTML . "<A HREF='?i=writing'>poetry</A>";
      $HTML = $HTML . "</P>";
      $HTML = $HTML . "<P>$MEAL</P>";
      $HTML = $HTML . "<P>$COPYRIGHT</P>";
      $HTML = $HTML . "</TD>";
      $HTML = $HTML . "<TD VALIGN='top' WIDTH='100'>";
      $HTML = $HTML . "<IMG SRC='?i=random_sb_0' WIDTH='100' HEIGHT='100'><BR>";
      $HTML = $HTML . "<IMG SRC='?i=random_sb_1' WIDTH='100' HEIGHT='100'><BR>";
      $HTML = $HTML . "<IMG SRC='?i=random_sb_2' WIDTH='100' HEIGHT='100'><BR>";
      $HTML = $HTML . "<IMG SRC='?i=random_sb_3' WIDTH='100' HEIGHT='100'><BR>";
      $HTML = $HTML . "<IMG SRC='?i=random_sb_4' WIDTH='100' HEIGHT='100'><BR>";
      $HTML = $HTML . "<IMG SRC='?i=random_sb_5' WIDTH='100' HEIGHT='100'><BR>";
      $HTML = $HTML . "<IMG SRC='?i=random_sb_6' WIDTH='100' HEIGHT='100'><BR>";
      $HTML = $HTML . "<IMG SRC='?i=random_sb_7' WIDTH='100' HEIGHT='100'><BR>";
      $HTML = $HTML . "<IMG SRC='?i=random_sb_8' WIDTH='100' HEIGHT='100'><BR>";
      $HTML = $HTML . "<IMG SRC='?i=random_sb_9' WIDTH='100' HEIGHT='100'><BR>";
      $HTML = $HTML . "</TD>";
      $HTML = $HTML . "</TR>";
      $HTML = $HTML . "</TABLE>";
      $HTML = $HTML . "</TD></TR></TABLE>";
      $HTML = $HTML . "</BODY>";
    }
  }
  if ($LAYOUT eq "plain") {
    $HTML = $HTML . "<TABLE BORDER='0' CELLPADDING='0' CELLSPACING='0' WIDTH='100%' HEIGHT='100%'><TR><TD WIDTH='100%' HEIGHT='100%' ALIGN='center' VALIGN='middle'>";
    $HTML = $HTML . $MEAL;
    $HTML = $HTML . "</TD></TR></TABLE>";
    $HTML = $HTML . "</BODY>";
  }

  return($HTML);
}


sub getGarnish {
  my $MEAL_CONTAINS_IMG = shift(@_);
  my $GARNISH = "";

  if (($VK_TYPE eq "atomic_text") ||
      ($VK_TYPE eq "journal") ||
      ($VK_TYPE eq "segmentable_text")) {
    if ($MEAL_CONTAINS_IMG == 1) {
      #$GARNISH = getGarnishText();
      $GARNISH = "";
    } else {
      $GARNISH = getGarnishImage();
    }
  }
  if ($VK_TYPE eq "image") {
    $GARNISH = "<SPAN CLASS='text'>" . getGarnishText() . "</SPAN>";
  }
  return($GARNISH);
}


sub getGarnishImage {
  my $D = int(rand() * $GARNISH_IMAGE_COUNT);
  return("$D_GARNISH_IMAGE[$D]");
}


sub getGarnishImageList {
  my $HTML = "";
  for ($ED = 0; $ED < $GARNISH_TEXT_COUNT; $ED++) {
    $HTML = $HTML . "<P>$D_GARNISH_IMAGE[$ED]</P>";
  }
  return($HTML);
}


sub getGarnishText {
  my $D = int(rand() * $GARNISH_TEXT_COUNT);
  $D_GARNISH_TEXT[$D] =~ s/bt2/$BODY_LINK_2/g;
  return("$D_GARNISH_TEXT[$D]");
}


sub getGarnishTextList {
  my $HTML = "";
  for ($ED = 0; $ED < $GARNISH_TEXT_COUNT; $ED++) {
    $HTML = $HTML . "<P>$D_GARNISH_TEXT[$ED]</P>";
  }
  return($HTML);
}


sub getJournalPrevs {
  my $MCI = shift(@_);
  my $A;
  my $B;
  my $C;
  my $HTML = "";

  $A = getPreviousJournalName($VK_I);
  if ($A ne "") {
    $B = getPreviousJournalName($A);
  }
  #if ($B ne "") {
  #  $C = getPreviousJournalName($B);
  #}

  if ($A ne "") {
    $HTML = $HTML . "<P>";
    $HTML = $HTML . "<SPAN CLASS='smallDate'>" . $VK_Z{$A}{"date"} . " - " . $VK_Z{$A}{"time"} . "</SPAN>";
    $HTML = $HTML . "<BR>";
    $HTML = $HTML . "<A CLASS='small' HREF='?i=$A'>";
    $HTML = $HTML . vkGetFile("text/html", "$VK_ATOM_UNIX/$VK_Z{$A}{'filename'}", "", "", "tease");
    $HTML = $HTML . "</A>";
    $HTML = $HTML . "</P>";
  }
  if ($B ne "") {
    $HTML = $HTML . "<P>";
    $HTML = $HTML . "<SPAN CLASS='smallDate'>" . $VK_Z{$B}{"date"} . " - " . $VK_Z{$B}{"time"} . "</SPAN>";
    $HTML = $HTML . "<BR>";
    $HTML = $HTML . "<A CLASS='small' HREF='?i=$B'>";
    $HTML = $HTML . vkGetFile("text/html", "$VK_ATOM_UNIX/$VK_Z{$B}{'filename'}", "", "", "tease");
    $HTML = $HTML . "</A>";
    $HTML = $HTML . "</P>";
  }
  #if ($C ne "") {
  #  $HTML = $HTML . "<P>";
  #  $HTML = $HTML . "<SPAN CLASS='smallDate'>" . $VK_Z{$C}{"date"} . " - " . $VK_Z{$C}{"time"} . "</SPAN>";
  #  $HTML = $HTML . "<BR>";
  #  $HTML = $HTML . "<A CLASS='small' HREF='?i=$C'>";
  #  $HTML = $HTML . vkGetFile("text/html", "$VK_ATOM_UNIX/$VK_Z{$C}{'filename'}", "", "", "tease");
  #  $HTML = $HTML . "</A>";
  #  $HTML = $HTML . "</P>";
  #}

  return $HTML;
}


sub getMenu {
  my $W = shift(@_);
  my $HTML;
  my $B = $MENU_ICON_DIME;
  $HTML = $HTML . getMenuItem("visual", "squares_.jpg", "squares_invert.jpg", "visual", $MENU_ICON_DIME, $W);
  if ($W > 1) {
    $HTML = $HTML . "<BR>";
    $HTML = $HTML . "<IMG CLASS='borderless' SRC='$VK_ATOM/image/spacer.gif' HEIGHT='$B' WIDTH='0'>";
    $HTML = $HTML . "<BR>";
  } else {
    $HTML = $HTML . "<IMG CLASS='borderless' SRC='$VK_ATOM/image/spacer.gif' WIDTH='$B' HEIGHT='0'>";
  }
  $HTML = $HTML . getMenuItem("latest_journal", "zha_.jpg", "zha_invert.jpg", "journal", $MENU_ICON_DIME, $W);
  if ($W > 1) {
    $HTML = $HTML . "<BR>";
    $HTML = $HTML . "<IMG CLASS='borderless' SRC='$VK_ATOM/image/spacer.gif' HEIGHT='$B' WIDTH='0'>";
    $HTML = $HTML . "<BR>";
  } else {
    $HTML = $HTML . "<IMG CLASS='borderless' SRC='$VK_ATOM/image/spacer.gif' WIDTH='$B' HEIGHT='0'>";
  }
  $HTML = $HTML . getMenuItem("archives", "200/eye_blue.jpg", "200/eye_blue_invert.jpg", "journal archives", $MENU_ICON_DIME, $W);
  if ($W > 1) {
    $HTML = $HTML . "<BR>";
    $HTML = $HTML . "<IMG CLASS='borderless' SRC='$VK_ATOM/image/spacer.gif' HEIGHT='$B' WIDTH='0'>";
    $HTML = $HTML . "<BR>";
  } else {
    $HTML = $HTML . "<IMG CLASS='borderless' SRC='$VK_ATOM/image/spacer.gif' WIDTH='$B' HEIGHT='0'>";
  }
  $HTML = $HTML . getMenuItem("sound", "sound_.jpg", "sound_invert.jpg", "sound", $MENU_ICON_DIME, $W);
  if ($W > 1) {
    $HTML = $HTML . "<BR>";
    $HTML = $HTML . "<IMG CLASS='borderless' SRC='$VK_ATOM/image/spacer.gif' HEIGHT='$B' WIDTH='0'>";
    $HTML = $HTML . "<BR>";
  } else {
    $HTML = $HTML . "<IMG CLASS='borderless' SRC='$VK_ATOM/image/spacer.gif' WIDTH='$B' HEIGHT='0'>";
  }
  $HTML = $HTML . getMenuItem("writing", "writing_.jpg", "writing_invert.jpg", "writing", $MENU_ICON_DIME, $W);
  return $HTML;
}


sub getMenuItem {
  my $TARGET = shift(@_);
  my $IMAGE = shift(@_);
  my $IMAGEX = shift(@_);
  my $ALT = shift(@_);
  my $DIME = shift(@_);
  my $W = shift(@_);
  my $IA;
  my $IB;
  if ($W == 0) {
    $IA = $IMAGE;
    $IB = $IMAGEX;
  }
  if ($W == 1) {
    $IA = $IMAGEX;
    $IB = $IMAGE;
  }
  if ($W == 2) {
    $IA = $IMAGE;
    $IB = $IMAGEX;
  }
  if ($W == 3) {
    $IA = $IMAGEX;
    $IB = $IMAGE;
  }
  my $HTML;
  #$HTML = $HTML . "<A HREF='?i=$TARGET'><IMG SRC='$VK_ATOM/image/$IA' WIDTH='$DIME' HEIGHT='$DIME' BORDER='0' ALT='$ALT' ONMOUSEOVER=\"this.src='$VK_ATOM/image/$IB';\" ONMOUSEOUT=\"this.src='$VK_ATOM/image/$IA';\"></A>";
  $HTML = $HTML . "<A HREF='?i=$TARGET'><IMG SRC='$VK_ATOM/image/$IA' WIDTH='$DIME' HEIGHT='$DIME' BORDER='0' ALT='$ALT'></A>";
  return($HTML);
}


sub getPreviousJournalName {
  my $NAME = shift(@_);
  if (exists $VK_Z{$NAME}) {
    if (exists $VK_Z{ $VK_Z{$NAME}{"previous"} }) {
      return($VK_Z{$NAME}{"previous"});
    } else {
      return("");
    }
  } else {
    return("");
  }
}


sub getSearchJournal {
  my $S_DATE = lc(shift(@_));
  my $S_TEXT = lc(shift(@_));
  my $HTML = "";
  my $EACH_NAME;
  my $EACH_FILE;
  my $EACH_TEXT_MATCH;
  my $EACH_DATE_MATCH;
  my $EACH_MATCH_TOTAL;
  my $MATCH_NEEDED = 0;
  my $EACH_MATCH;
  my $EACH_TEASE;
  my $EACH_DATE;
  my $EACH_TIME;
  my @RESULTS = ();
  my $RESULTS_KEY;
  my $EACH_RESULTS_KEY;
  my $RESULT_COUNT = 0;

  if ($S_DATE ne "") {
    $MATCH_NEEDED++;
  }
  if ($S_TEXT ne "") {
    $MATCH_NEEDED++;
  }

  foreach $EACH_NAME (keys %VK_Z) {
    if (($EACH_NAME ne "latest_journal") && ($EACH_NAME ne "inhesion")) {
      if ($VK_Z{$EACH_NAME}{"type"} eq "journal") {

        # only load the file if they're doing a text search
        if ($S_TEXT ne "") {
          $EACH_FILE =
            lc(vkGetFile("text/html", "$VK_ATOM_UNIX/$VK_Z{$EACH_NAME}{'filename'}"));
        }
        $EACH_DATE = $VK_Z{$EACH_NAME}{'date'};

        $EACH_MATCH = 0;
        $EACH_TEXT_MATCH = 0;
        $EACH_DATE_MATCH = 0;
        if ($S_DATE ne "") {
          if (index($EACH_DATE, $S_DATE) != -1) {
            $EACH_DATE_MATCH = 1;
          }
        }
        if ($S_TEXT ne "") {
          if (index($EACH_FILE, $S_TEXT) != -1) {
            $EACH_TEXT_MATCH = 1;
          }
        }
        $EACH_MATCH_TOTAL = ($EACH_TEXT_MATCH + $EACH_DATE_MATCH);
        if ($EACH_MATCH_TOTAL >= $MATCH_NEEDED) {
          $EACH_MATCH = 1;
        }

        if ($EACH_MATCH == 1) {
          $RESULT_COUNT++;
          $EACH_TEASE = vkGetFile("text/html", "$VK_ATOM_UNIX/$VK_Z{$EACH_NAME}{'filename'}", "", "", "tease");
          $EACH_TIME = $VK_Z{$EACH_NAME}{'time'};
          $RESULTS_KEY = $EACH_DATE . $EACH_TIME;
          $RESULTS{$RESULTS_KEY}{"date"} = $EACH_DATE;
          $RESULTS{$RESULTS_KEY}{"time"} = $EACH_TIME;
          $RESULTS{$RESULTS_KEY}{"tease"} = $EACH_TEASE;
          $RESULTS{$RESULTS_KEY}{"name"} = $EACH_NAME;
        }

      }  # if type==journal
    }  # name!=inhesion && name!=latest_journal
  }  # foreach

  if ($RESULT_COUNT > 0) {
    if ($S_TEXT ne "") {
      $HTML = $HTML . "<SPAN CLASS='tease'>$RESULT_COUNT articles match your search for &quot;$S_TEXT&quot;</SPAN>";
      $HTML = $HTML . "<BR><A CLASS='small' HREF='?i=search_journal'>try another search</A>";
    }
    foreach $EACH_RESULTS_KEY (sort {$b cmp $a} keys %RESULTS) {
      $EACH_TEASE = $RESULTS{$EACH_RESULTS_KEY}{"tease"};
      $EACH_DATE = $RESULTS{$EACH_RESULTS_KEY}{"date"};
      $EACH_TIME = $RESULTS{$EACH_RESULTS_KEY}{'time'};
      $EACH_NAME = $RESULTS{$EACH_RESULTS_KEY}{'name'};
      $HTML = $HTML . "<P>";
      $HTML = $HTML . "<SPAN CLASS='date'>$EACH_DATE - $EACH_TIME</SPAN>";
      $HTML = $HTML . "<BR>";
      $HTML = $HTML . "<A HREF='?i=$EACH_NAME'>";
      $HTML = $HTML . $EACH_TEASE;
      $HTML = $HTML . "</A>";
      $HTML = $HTML . "</P>";
    }
  } else {
    $HTML = $HTML . vkGetFile("text/html", "$VK_ATOM_UNIX/snip/search_no_results.snip");
  }

  return $HTML;
}


sub getZhaism {
  my $D = int(rand() * $ZHAISM_COUNT);
  return("$D_ZHAISM[$D]");
}


sub getZhaText {
  return(vkGetFile("text/html", "$VK_ATOM_UNIX/snip/name_contact.snip"));
}


sub loadGarnishImage {
  my $LINE;
  $GARNISH_IMAGE_COUNT = 0;
  @D_GARNISH_IMAGE = ();
  open(FH, "$VK_ATOM_UNIX/d/garnish_image.d");
  while ($LINE = <FH>) {
    chop($LINE);
    if ($LINE ne "") {
      $D_GARNISH_IMAGE[$GARNISH_IMAGE_COUNT] = $LINE;
      $GARNISH_IMAGE_COUNT++;
    }
  }
  close(FH);
}


sub loadGarnishText {
  my $LINE;
  $GARNISH_TEXT_COUNT = 0;
  @D_GARNISH_TEXT = ();
  open(FH, "$VK_ATOM_UNIX/d/garnish_text.d");
  while ($LINE = <FH>) {
    chop($LINE);
    if ($LINE ne "") {
      $D_GARNISH_TEXT[$GARNISH_TEXT_COUNT] = $LINE;
      $GARNISH_TEXT_COUNT++;
    }
  }
  close(FH);
}


sub loadZhaism {
  my $LINE;
  $ZHAISM_COUNT = 0;
  @D_ZHAISM = ();
  open(FH, "$VK_ATOM_UNIX/d/zhaism.d");
  while ($LINE = <FH>) {
    chop($LINE);
    if ($LINE ne "") {
      $D_ZHAISM[$ZHAISM_COUNT] = $LINE;
      $ZHAISM_COUNT++;
    }
  }
  close(FH);
}


sub processText {
  my $TEXT = shift(@_);
  my $GARNISH_IMAGE_0 = getGarnishImage();
  my $GARNISH_IMAGE_1 = getGarnishImage();
  my $GARNISH_IMAGE_2 = getGarnishImage();
  my $GARNISH_TEXT_0 = getGarnishText();
  my $GARNISH_TEXT_1 = getGarnishText();
  my $GARNISH_TEXT_2 = getGarnishText();
  my $THIS_FRAME = "_self";
  if ($VK_LAYOUT eq "hand") {
    $THIS_FRAME = "meal";
  }
  my $ZHAISM = getZhaism();
  $TEXT =~ s/{GARNISH_IMAGE}/$GARNISH_IMAGE_0/g;
  $TEXT =~ s/{GARNISH_IMAGE_0}/$GARNISH_IMAGE_0/g;
  $TEXT =~ s/{GARNISH_IMAGE_1}/$GARNISH_IMAGE_1/g;
  $TEXT =~ s/{GARNISH_IMAGE_2}/$GARNISH_IMAGE_2/g;
  $TEXT =~ s/{GARNISH_TEXT}/$GARNISH_TEXT_0/g;
  $TEXT =~ s/{GARNISH_TEXT_0}/$GARNISH_TEXT_0/g;
  $TEXT =~ s/{GARNISH_TEXT_1}/$GARNISH_TEXT_1/g;
  $TEXT =~ s/{GARNISH_TEXT_2}/$GARNISH_TEXT_2/g;
  $TEXT =~ s/{TEASE}/<SPAN CLASS='tease'>/g;
  $TEXT =~ s/{\/TEASE}/<\/SPAN>/g;
  $TEXT =~ s/{THIS_FRAME}/$THIS_FRAME/g;
  $TEXT =~ s/{ZHAISM}/$ZHAISM/g;
  return($TEXT);
}
