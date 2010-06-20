#ifndef vkmobLogDeviceFile_h
#define vkmobLogDeviceFile_h

#include "vkmobLogDevice.h"

class vkmobLogDeviceFile : public vkmobLogDevice {
  ofstream* _file;
  string _fileName;
public:
  vkmobLogDeviceFile();
  vkmobLogDeviceFile(string fileName_);
  ~vkmobLogDeviceFile();
  virtual void enter(string entry_,
    vkmobLogMask face_ = vkmobLogDefaultFace, string a_ = "",
    string b_ = "", string c_ = "", string d_ = "");
  string getFileName();
  void setFileName(string fileName_);
};

#endif
