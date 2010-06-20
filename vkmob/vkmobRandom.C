#include "vkmobRandom.h"
#include "vkmobTime.h"

vkmobRandom::vkmobRandom() {
  vkmobTime mobTime;
  mobTime.getTime();
  srandom(mobTime.getSec());
}

vkmobRandom::~vkmobRandom() {}

vkmobRandom* vkmobRandom::instance() {
  // implemented for single-threaded applications
  static vkmobRandom instance;
  return &instance;
}

long vkmobRandom::randomLong() {
  return random();
}
