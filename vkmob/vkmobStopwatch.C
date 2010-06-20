#include "vkmobStopwatch.h"
#include "vkmobLog.h"

vkmobStopwatch::vkmobStopwatch(string tag_, vkmobLog* log_) {
  _log = log_;
  init(tag_);
}

vkmobStopwatch::~vkmobStopwatch() {
  clock_t total = clock() - _start;  // int/clock_t
  ostringstream msgStream;
  msgStream << _tag << " : " << total;
  if (_log) {
    _log->enter(msgStream.str());  // default face
  } else {
    cout << msgStream.str() << endl;
  }
}

void vkmobStopwatch::init(string tag_) {
  _start = clock();
  _tag = tag_;
}
