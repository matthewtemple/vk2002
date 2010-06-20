#ifndef vkmathFuncAddFac_h
#define vkmathFuncAddFac_h

#include "../vkmob/vkmobJect.h"

class vkmathFuncAddFac : vkmobJect {
public:
  vkmathFuncAddFac();
  ~vkmathFuncAddFac();
  long operator() (long n) const;
};

#endif
