#ifndef vkmobLog_h
#define vkmobLog_h

#include "vkmobJect.h"
#include "vkmobLogConsts.h"
#include "vkmobTimeFormat.h"

class vkmobLog : public vkmobJect {
  vector<vkmobLog*>* _logs;
  vkmobLogMask _mask;
public:
  vkmobLog(vkmobLogMask mask_ = vkmobLogDefaultMask);
  virtual ~vkmobLog();
  void attachLog(vkmobLog* log_);
  void detachLogs();
  virtual void enter(string entry_,
    vkmobLogMask face_ = vkmobLogDefaultFace, string a_ = "",
    string b_ = "", string c_ = "", string d_ = "");
  vkmobLogMask getMask();
  void setMask(vkmobLogMask mask_);
};

#endif
