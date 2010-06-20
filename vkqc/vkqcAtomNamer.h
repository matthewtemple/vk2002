#ifndef vkqcAtomNamer_h
#define vkqcAtomNamer_h

#include "../vkmob/vkmobJect.h"
#include "../vkmob/vkmobFuncEqString.h"
#include "../vkmob/vkmobFuncHashString.h"

class vkqcAtomNamer : public vkmobJect {
  hash_set<string, vkmobFuncHashString, vkmobFuncEqString> _usedNames;
  string _name(string startingWith_ = "");
protected:
  vkqcAtomNamer();
  vkqcAtomNamer(const vkqcAtomNamer&);
  vkqcAtomNamer& operator= (const vkqcAtomNamer&);
public:
  ~vkqcAtomNamer();
  void importExternalNames(vector<string>* names_);
  static vkqcAtomNamer* instance();
  string uniqueName(string startingWith_ = "");
};

#endif
