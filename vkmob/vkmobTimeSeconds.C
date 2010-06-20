#include "vkmobTimeSeconds.h"

vkmobTimeSeconds::vkmobTimeSeconds() {}

vkmobTimeSeconds::~vkmobTimeSeconds() {}

void vkmobTimeSeconds::format() {
  ostringstream s;
  s << tv.tv_sec;
  formatted = s.str();
}
