#include "vkmobFuncHashString.h"

vkmobFuncHashString::vkmobFuncHashString() {}

vkmobFuncHashString::~vkmobFuncHashString() {}

size_t vkmobFuncHashString::operator() (string string_) const {
  hash<const char*> hasher;
  const char* pchar(string_.c_str());
  size_t hashVal = hasher(pchar);
  return hashVal;
}
