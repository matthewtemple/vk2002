#include "vkmobTimeSecondsMilliseconds.h"

vkmobTimeSecondsMilliseconds::vkmobTimeSecondsMilliseconds() {}

vkmobTimeSecondsMilliseconds::~vkmobTimeSecondsMilliseconds() {}

void vkmobTimeSecondsMilliseconds::format() {
  ostringstream s;
  s << tv.tv_sec << separator << tv.tv_usec;
  formatted = s.str();
}
