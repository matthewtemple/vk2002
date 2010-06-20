#include "vkqcFuncHashPGame.h"
#include "vkqcGame.h"

vkqcFuncHashPGame::vkqcFuncHashPGame() {}

vkqcFuncHashPGame::~vkqcFuncHashPGame() {}

size_t vkqcFuncHashPGame::operator() (vkqcGame* roleSet_) const {
  hash<const char*> hasher;
  string roleSetNameString("undefined");
  if (roleSet_) {
    roleSetNameString = roleSet_->getName();
  }
  const char* roleSetNamePChar(roleSetNameString.c_str());
  size_t hashVal = hasher(roleSetNamePChar);
  return hashVal;
}
