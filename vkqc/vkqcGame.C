#include "vkqcGame.h"

vkqcGame::vkqcGame(string name_) {
  _name = name_;
}

vkqcGame::~vkqcGame() {}

string vkqcGame::getName() {
  return _name;
}

void vkqcGame::setName(string name_) {
  _name = name_;
}
