#ifndef vkmobFuncEqString_h
#define vkmobFuncEqString_h

#include "vkmobJect.h"

class vkmobFuncEqString : public vkmobJect {
public:
  vkmobFuncEqString();
  ~vkmobFuncEqString();
  bool operator() (string s1, string s2) const;
};

#endif
