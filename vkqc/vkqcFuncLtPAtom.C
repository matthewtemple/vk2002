#include "vkqcFuncLtPAtom.h"
#include "vkqcAtom.h"

vkqcFuncLtPAtom::vkqcFuncLtPAtom() {}

vkqcFuncLtPAtom::~vkqcFuncLtPAtom() {}

bool vkqcFuncLtPAtom::operator() (vkqcAtom* a_, vkqcAtom* b_) const {
  return a_->_name < b_->_name;
}
