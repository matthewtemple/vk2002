#include "vkappApp.h"

vkappApp::vkappApp(int argc_, char* argv_[]) {
  _argCount = argc_;
  for (int i = 0; i <= (argc_ - 1); i++) {
    string argStr(argv_[i]);
    string::size_type eqPos(argStr.find("="));
    if (eqPos != string::npos) {
      string argName = argStr.substr(0, eqPos);
      string argValue = argStr.substr(eqPos + 1);
      _argMap[argName] = argValue;
    }
    _argVec.insert(_argVec.end(), argStr);
  }
}

vkappApp::~vkappApp() {}

string vkappApp::getArg(unsigned int index_) {
  string arg;
  if (index_ <= (_argVec.size() - 1)) {
    arg = _argVec[index_];
  }
  return arg;
}

string vkappApp::getArg(string name_) {
  return _argMap[name_];
}

void vkappApp::go() {}
