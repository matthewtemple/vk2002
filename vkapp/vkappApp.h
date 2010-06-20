#ifndef vkappApp_h
#define vkappApp_h

#include "../vkmob/vkmobFuncEqString.h"
#include "../vkmob/vkmobFuncHashString.h"
#include "../vkmob/vkmobJect.h"

class vkappApp : public vkmobJect {
private:
  int _argCount;
  hash_map<string, string, vkmobFuncHashString, vkmobFuncEqString> _argMap;
  vector<string> _argVec;
public:
  vkappApp(int argc_ = 0, char* argv_[] = 0);
  virtual ~vkappApp();
  string getArg(unsigned int index_);
  string getArg(string name_);
  virtual void go();
};

#endif
