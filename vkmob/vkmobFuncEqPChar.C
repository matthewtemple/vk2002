#include "vkmobFuncEqPChar.h"

vkmobFuncEqPChar::vkmobFuncEqPChar() {}

vkmobFuncEqPChar::~vkmobFuncEqPChar() {}

bool vkmobFuncEqPChar::operator() (char* s1, char* s2) const {
  return (strcmp(s1, s2) == 0);
}
