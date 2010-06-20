#ifndef vkmobLogDeviceMail_h
#define vkmobLogDeviceMail_h

#include "vkmobLogDevice.h"

class vkmobLogDeviceMail : public vkmobLogDevice {
public:
  vkmobLogDeviceMail();
  ~vkmobLogDeviceMail();
  virtual void enter(string entry_,
    vkmobLogMask face_ = vkmobLogDefaultFace, string a_ = "",
    string b_ = "", string c_ = "", string d_ = "");
};

#endif
