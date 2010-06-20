#ifndef vkmobAssertion_h
#define vkmobAssertion_h

#include "vkmobJect.h"

class vkmobAssertion : public vkmobJect {
public:
  vkmobAssertion(bool condition_, string message_);
  ~vkmobAssertion();
};

typedef vkmobAssertion vkmobAssert;

#endif
