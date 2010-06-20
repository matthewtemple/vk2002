#include "vkmobTimeFormat.h"

#include "vkmobTimeHoursMinutesSeconds.h"
#include "vkmobTimeSeconds.h"
#include "vkmobTimeSecondsMilliseconds.h"

string vkmobGetTimeFormatName(vkmobTimeFormat timeFormat_) {
  string timeFormatName("");
  switch (timeFormat_) {
  case vkmobTimeFormatHoursMinutesSeconds:
    timeFormatName = "hours_minutes_seconds";
    break;
  case vkmobTimeFormatSeconds:
    timeFormatName = "seconds";
    break;
  case vkmobTimeFormatSecondsMilliseconds:
    timeFormatName = "seconds_milliseconds";
    break;
  case vkmobTimeFormatUndefined:
    timeFormatName = "undefined";
    break;
  default:
    timeFormatName = "undefined";
    break;
  }
  return timeFormatName;
}

vkmobTime* vkmobNewPTime(vkmobTimeFormat timeFormat_) {
  vkmobTime* mobTime;
  switch (timeFormat_) {
  case vkmobTimeFormatHoursMinutesSeconds:
    mobTime = new vkmobTimeHoursMinutesSeconds;
    break;
  case vkmobTimeFormatSeconds:
    mobTime = new vkmobTimeSeconds;
    break;
  case vkmobTimeFormatSecondsMilliseconds:
    mobTime = new vkmobTimeSecondsMilliseconds;
    break;
  case vkmobTimeFormatUndefined:
    mobTime = new vkmobTime;
    break;
  default:
    mobTime = new vkmobTime;
    break;
  }
  return mobTime;
}
