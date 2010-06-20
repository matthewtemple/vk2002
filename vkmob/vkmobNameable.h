#ifndef vkmobNameable_h
#define vkmobNameable_h

#include "vkmobJect.h"

class vkmobNameable : vkmobJect {
protected:
  string _name;
public:
  vkmobNameable();
  ~vkmobNameable();
  string getName();
  void setName(string name_);
};

#endif
