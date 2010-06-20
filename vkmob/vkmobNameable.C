#include "vkmobNameable.h"

vkmobNameable::vkmobNameable() {}

vkmobNameable::~vkmobNameable() {}

string vkmobNameable::getName() {
  return _name;
}

void vkmobNameable::setName(string name_) {
  _name = name_;
}
