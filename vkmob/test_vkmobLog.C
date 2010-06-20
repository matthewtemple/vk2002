#include "vkmobLogDeviceCerr.h"
#include "vkmobLogDeviceCout.h"
#include "vkmobLogDeviceFile.h"

int main() {
  vkmobLogMask mask_cout(string("0001"));
  vkmobLogMask mask_cerr(string("0010"));
  vkmobLogMask mask_file(string("0100"));
  vkmobLogMask mask_all(string("0111"));
  vkmobLogMask mask_none(string("0000"));

  vkmobLogFace face_cout(string("0001"));
  vkmobLogFace face_cerr(string("0010"));
  vkmobLogFace face_file(string("0100"));
  vkmobLogFace face_all(string("0111"));
  vkmobLogFace face_none(string("0000"));

  vkmobLog log(mask_all);
  vkmobLogDeviceCout logCout;
  vkmobLogDeviceCerr logCerr;
  vkmobLogDeviceFile logFile("log.out");

  //logCout.setAddTimestamp(false);
  //logCout.setTimeFormat(vkmobTimeFormatSeconds);
  //logCout.setEntrySeparator("--");

  log.attachLog(&logCout);
  log.attachLog(&logCerr);
  log.attachLog(&logFile);

  log.enter("{B}{A}u{C} {A}nly", face_cout, "o", "c", "t");
  log.enter("cerr only", face_cerr);
  log.enter("file only", face_file);
  log.enter("all", face_all);
  log.enter("none", face_none);
}
