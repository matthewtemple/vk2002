#include "vkmathFuncAddFac.h"

vkmathFuncAddFac::vkmathFuncAddFac() {}

vkmathFuncAddFac::~vkmathFuncAddFac() {}

long vkmathFuncAddFac::operator() (long n) const {
  return static_cast<long>((pow(n, 2) + n - 2) / 2);
}
