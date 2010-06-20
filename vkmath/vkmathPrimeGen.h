#ifndef vkmathPrimeGen_h
#define vkmathPrimeGen_h

#include "../vkmob/vkmobJect.h"

class vkmathPrimeGen : public vkmobJect {
  long _lastPrimeGenerated;
public:
  vkmathPrimeGen(long startAfter_ = 0);
  ~vkmathPrimeGen();
  long operator () ();
  long operator () (long startAfter_);
};

#endif
