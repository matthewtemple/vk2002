#include "vkqcAtomNamer.h"
#include "../vkmob/vkmobFuncEqString.h"
#include "../vkmob/vkmobFuncHashString.h"
#include "../vkmob/vkmobRandom.h"

vkqcAtomNamer::vkqcAtomNamer() {}

vkqcAtomNamer::~vkqcAtomNamer() {}

string vkqcAtomNamer::_name(string startingWith_) {
  string name("");
  vkmobRandom* mobRandom = vkmobRandom::instance();
  int i0 = (mobRandom->randomLong() % 32);
  int i1 = (mobRandom->randomLong() % 32);
  int i2 = (mobRandom->randomLong() % 8);
  char* x0[32] = {"mi", "ma", "ama", "meo", "kama", "kami", "mugi", "moto",
                  "si", "sa", "asa", "seo", "kasa", "kasi", "sugi", "soto",
                  "ti", "ta", "ata", "teo", "kata", "kati", "tugi", "toto",
                  "shi", "sha", "asha", "sheo", "kasha", "kashi", "shugi",
                  "tosho"};
  char* x1[32] = {"m", "k", "t", "h", "r", "d", "sh", "y",
                  "mon", "kon", "ton", "hid", "ron", "don", "shon", "yon",
                  "mat", "kat", "tat", "n", "rat", "dat", "had", "yat",
                  "mik", "kis", "tik", "hak", "res", "dis", "shuk", "yak"};
  char* x2[8] = {"a", "i", "u", "e", "o", "eo", "io", "ei"};
  if ((random() % 3) == 0) {
    name += x0[i0];
  }
  name += x1[i1];
  name += x2[i2];
  return name;
}

void vkqcAtomNamer::importExternalNames(vector<string>* names_) {
  // method hasn't been tested
  vector<string>::iterator it;
  for (it = names_->begin(); it != names_->end(); it++) {
    _usedNames.insert(*it);
  }
}

vkqcAtomNamer* vkqcAtomNamer::instance() {
  // implemented for single-threaded applications
  static vkqcAtomNamer instance;
  return &instance;
}

string vkqcAtomNamer::uniqueName(string startingWith_) {
  string name = _name(startingWith_);
  while (_usedNames.find(name) != _usedNames.end()) {
    name = _name(startingWith_);
  }
  _usedNames.insert(name);
  return name;
}
