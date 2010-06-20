#ifndef vkmobFuncEqPChar_h
#define vkmobFuncEqPChar_h

#include "vkmobJect.h"

class vkmobFuncEqPChar : public vkmobJect {
public:
  vkmobFuncEqPChar();
  ~vkmobFuncEqPChar();
  bool operator() (char* s1, char* s2) const;
};

#endif
