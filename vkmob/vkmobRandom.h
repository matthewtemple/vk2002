#ifndef vkmobRandom_h
#define vkmobRandom_h

#include "vkmobJect.h"

class vkmobRandom : public vkmobJect {
protected:
  vkmobRandom();
  vkmobRandom(const vkmobRandom&);
  vkmobRandom& operator= (const vkmobRandom&);
public:
  ~vkmobRandom();
  static vkmobRandom* instance();
  long randomLong();
};

#endif
