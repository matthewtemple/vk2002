#include "vkmobTime.h"

vkmobTime::vkmobTime() {
  separator = ":";
}

vkmobTime::~vkmobTime() {}

void vkmobTime::format() {
  ostringstream s;
  s << tv.tv_sec << separator << tv.tv_usec;
  formatted = s.str();
}

long vkmobTime::getSec() {
  return tv.tv_sec;
}

string vkmobTime::getTime() {
  gettimeofday(&tv, 0);
  format();
  return formatted;
}

long vkmobTime::getUSec() {
  return tv.tv_usec;
}
