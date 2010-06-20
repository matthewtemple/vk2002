#ifndef vkmobTimeSecondsMilliseconds_h
#define vkmobTimeSecondsMilliseconds_h

#include "vkmobTime.h"

class vkmobTimeSecondsMilliseconds : public vkmobTime {
protected:
  virtual void format();
public:
  vkmobTimeSecondsMilliseconds();
  ~vkmobTimeSecondsMilliseconds();
};

#endif
