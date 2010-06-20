#ifndef vkmobUniquelyNamed_h
#define vkmobUniquelyNamed_h

#include "vkmobNamed.h"

class vkmobUniquelyNamed : public vkmobNamed {
private:
  string _namespace;
public:
  vkmobUniquelyNamed();
  ~vkmobUniquelyNamed();
};

#endif
