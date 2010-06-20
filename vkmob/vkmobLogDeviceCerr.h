#ifndef vkmobLogDeviceCerr_h
#define vkmobLogDeviceCerr_h

#include "vkmobLogDevice.h"

class vkmobLogDeviceCerr : public vkmobLogDevice {
public:
  vkmobLogDeviceCerr();
  ~vkmobLogDeviceCerr();
  virtual void enter(string entry_,
    vkmobLogMask face_ = vkmobLogDefaultFace, string a_ = "",
    string b_ = "", string c_ = "", string d_ = "");
};

#endif
