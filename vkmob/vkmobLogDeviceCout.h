#ifndef vkmobLogDeviceCout_h
#define vkmobLogDeviceCout_h

#include "vkmobLogDevice.h"

class vkmobLogDeviceCout : public vkmobLogDevice {
public:
  vkmobLogDeviceCout();
  ~vkmobLogDeviceCout();
  virtual void enter(string entry_,
    vkmobLogMask face_ = vkmobLogDefaultFace, string a_ = "",
    string b_ = "", string c_ = "", string d_ = "");
};

#endif
