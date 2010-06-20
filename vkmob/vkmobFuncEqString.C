#include "vkmobFuncEqString.h"

vkmobFuncEqString::vkmobFuncEqString() {}

vkmobFuncEqString::~vkmobFuncEqString() {}

bool vkmobFuncEqString::operator() (string s1, string s2) const {
    return (s1 == s2);
}
