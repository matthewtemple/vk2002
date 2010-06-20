#include "vkmobJect.h"

vkmobJect::vkmobJect() {}

vkmobJect::~vkmobJect() {}

string vkmobPChar2String(char* pchar_) {
  string s;
  if (pchar_) {
    if (strlen(pchar_) > 0) {
      s = pchar_;
    }
  }
  return s;
}
