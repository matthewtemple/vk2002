#ifndef vkmobFuncHashString_h
#define vkmobFuncHashString_h

#include "vkmobJect.h"

class vkmobFuncHashString : public vkmobJect {
public:
  vkmobFuncHashString();
  ~vkmobFuncHashString();
  size_t operator() (string string_) const;
};

#endif
