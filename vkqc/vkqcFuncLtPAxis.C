#include "vkqcFuncLtPAxis.h"
#include "vkqcAxis.h"

vkqcFuncLtPAxis::vkqcFuncLtPAxis() {}

vkqcFuncLtPAxis::~vkqcFuncLtPAxis() {}

bool vkqcFuncLtPAxis::operator() (vkqcAxis* a_, vkqcAxis* b_) const {
  return a_->_name < b_->_name;
}
