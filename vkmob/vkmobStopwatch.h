#ifndef vkmobStopwatch_h
#define vkmobStopwatch_h

#include "vkmobJect.h"

class vkmobLog;

class vkmobStopwatch : public vkmobJect {
  clock_t _start;
  string _tag;
  vkmobLog* _log;
  void init(string tag_);
public:
  vkmobStopwatch(string tag_ = "swatch", vkmobLog* log_ = 0);
  ~vkmobStopwatch();
};

#endif
