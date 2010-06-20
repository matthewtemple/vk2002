#ifndef vkqcStrategy_h
#define vkqcStrategy_h

#include "../vkmob/vkmobUniquelyNamed.h"

class vkqcAtom;

class vkqcStrategy : public vkmobUniquelyNamed {
  vkqcAtom* _atom;
public:
  vkqcStrategy();
  virtual ~vkqcStrategy();
  virtual void respond() = 0;  // given a hypergon state, change internal state
                               // of atom  ... create a proactive member, as
                               // well?
};

#endif
