#include "vkmobLogDeviceCerr.h"

vkmobLogDeviceCerr::vkmobLogDeviceCerr() {}

vkmobLogDeviceCerr::~vkmobLogDeviceCerr() {}

void vkmobLogDeviceCerr::enter(string entry_,
  vkmobLogMask face_ = vkmobLogDefaultFace, string a_, string b_, string c_,
  string d_) {

  cerr << processEntry(entry_, a_, b_, c_, d_);
}
