#ifndef vkmobTimeFormat_h
#define vkmobTimeFormat_h

#include <string>

class vkmobTime;

enum vkmobTimeFormat {
  vkmobTimeFormatUndefined,
  vkmobTimeFormatSeconds,
  vkmobTimeFormatSecondsMilliseconds,
  vkmobTimeFormatHoursMinutesSeconds
};

string vkmobGetTimeFormatName(vkmobTimeFormat timeFormat_);
vkmobTime* vkmobNewPTime(vkmobTimeFormat timeFormat_);

#endif
