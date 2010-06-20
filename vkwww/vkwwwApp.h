#ifndef vkwwwApp_h
#define vkwwwApp_h

#include "../vkcgi/vkcgiApp.h"

class vkwwwApp : public vkcgiApp {
public:
  vkwwwApp();
  ~vkwwwApp();
  virtual string getContent(string HTML_ = "");
};

#endif
