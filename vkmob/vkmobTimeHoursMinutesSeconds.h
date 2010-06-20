#ifndef vkmobTimeHoursMinutesSeconds_h
#define vkmobTimeHoursMinutesSeconds_h

#include "vkmobTime.h"

class vkmobTimeHoursMinutesSeconds : public vkmobTime {
protected:
  virtual void format();
public:
  vkmobTimeHoursMinutesSeconds();
  ~vkmobTimeHoursMinutesSeconds();
};

#endif
