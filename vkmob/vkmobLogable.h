#ifndef vkmobLogable_h
#define vkmobLogable_h

#include "vkmobLog.h"

class vkmobLogable : vkmobJect {
  vkmobLogFace _face;
  vkmobLog* _log;
protected:
  vkmobLogable();
  vkmobLogable(const vkmobLogable&);
  virtual void enter(string entry_, string a_ = "", string b_ = "",
    string c_ = "", string d_ = "");
  vkmobLogFace getFace();
  vkmobLog* getLog();
  void setFace(vkmobLogFace face_);
  void setLog(vkmobLog* log_);
  vkmobLogable& operator= (const vkmobLogable&);
public:
  virtual ~vkmobLogable();
};

#endif
