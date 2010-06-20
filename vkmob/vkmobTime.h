#ifndef vkmobTime_h
#define vkmobTime_h

#include "vkmobJect.h"

class vkmobTime : public vkmobJect {
protected:
  string formatted;
  string separator;
  timeval tv;
  virtual void format();
public:
  vkmobTime();
  virtual ~vkmobTime();
  long getSec();
  string getTime();
  long getUSec();
};

#endif
