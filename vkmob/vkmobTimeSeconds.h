#ifndef vkmobTimeSeconds_h
#define vkmobTimeSeconds_h

#include "vkmobTime.h"

class vkmobTimeSeconds : public vkmobTime {
protected:
  virtual void format();
public:
  vkmobTimeSeconds();
  ~vkmobTimeSeconds();
};

#endif
