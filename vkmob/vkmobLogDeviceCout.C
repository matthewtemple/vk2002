#include "vkmobLogDeviceCout.h"

vkmobLogDeviceCout::vkmobLogDeviceCout() {}

vkmobLogDeviceCout::~vkmobLogDeviceCout() {}

void vkmobLogDeviceCout::enter(string entry_,
  vkmobLogMask face_ = vkmobLogDefaultFace, string a_, string b_, string c_,
  string d_) {

  cout << processEntry(entry_, a_, b_, c_, d_);
}
