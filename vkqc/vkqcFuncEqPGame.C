#include "vkqcFuncEqPGame.h"

vkqcFuncEqPGame::vkqcFuncEqPGame() {}

vkqcFuncEqPGame::~vkqcFuncEqPGame() {}

bool vkqcFuncEqPGame::operator() (vkqcGame* a_, vkqcGame* b_) const {
  return (a_->getName() == b_->getName());
}
