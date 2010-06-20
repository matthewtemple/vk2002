#ifndef vkiceApp_h
#define vkiceApp_h

#include "../vkapp/vkappShell.h"

class vkiceApp : public vkappShell {
  string _paramAction;
  string _paramFilename;
  string _key;
  string _newText;
  string _oldText;
public:
  vkiceApp(int argc_ = 0, char* argv_[] = 0);
  ~vkiceApp();
  void displayHelp();
  void displaySlug();
  virtual void go();
  void readFile();
  void readKey();
  void writeFile();
};

#endif
