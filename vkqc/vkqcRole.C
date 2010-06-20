#include "vkqcRole.h"

vkqcRole::vkqcRole(string name_) {
  _name = name_;
}

vkqcRole::~vkqcRole() {}

string vkqcRole::getName() {
  return _name;
}

void vkqcRole::setName(string name_) {
  _name = name_;
}
