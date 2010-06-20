#include "vkmathPrimeGen.h"

vkmathPrimeGen::vkmathPrimeGen(long startAfter_) {
  _lastPrimeGenerated = startAfter_;
}

vkmathPrimeGen::~vkmathPrimeGen() {}

long vkmathPrimeGen::operator() () {
  return operator() (_lastPrimeGenerated);
}

long vkmathPrimeGen::operator() (long startAfter_) {
  long candidate(startAfter_ + 1);
  bool foundPrime(false);
  long k(2);
  if ((candidate == 1) || (candidate == 2)) {
    foundPrime = true;
    _lastPrimeGenerated = candidate;
  }
  while (!foundPrime) {
    if ((candidate % k) == 0) {
      candidate++;
      k = 2;
    } else {
      if (k != (candidate - 1)) {
        k++;
      } else {
        foundPrime = true;
        _lastPrimeGenerated = candidate;
      }
    }
  }
  return candidate;
}
