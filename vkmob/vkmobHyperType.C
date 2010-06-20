#include "vkmobHyperType.h"

vkmobHyperType::vkmobHyperType() {
  _value = "";
}

vkmobHyperType::vkmobHyperType(const char* value_) {
  _value = value_;
}

vkmobHyperType::vkmobHyperType(float value_) {
  ostringstream oss;
  oss << value_;
  _value = oss.str();
}

vkmobHyperType::vkmobHyperType(int value_) {
  ostringstream oss;
  oss << value_;
  _value = oss.str();
}

vkmobHyperType::vkmobHyperType(long value_) {
  ostringstream oss;
  oss << value_;
  _value = oss.str();
}

vkmobHyperType::vkmobHyperType(string value_) {
  _value = value_;
}

vkmobHyperType::~vkmobHyperType() {}

const char* vkmobHyperType::asPChar() {
  return _value.c_str();
}

float vkmobHyperType::asFloat() {
  return atof(_value.data());
}

int vkmobHyperType::asInt() {
  return atoi(_value.data());
}

long vkmobHyperType::asLong() {
  return atol(_value.data());
}

string vkmobHyperType::asString() {
  return _value;
}

void vkmobHyperType::set(const char* value_) {
  _value = value_;
}

void vkmobHyperType::set(float value_) {
  ostringstream oss;
  oss << value_;
  _value = oss.str();
}

void vkmobHyperType::set(int value_) {
  ostringstream oss;
  oss << value_;
  _value = oss.str();
}

void vkmobHyperType::set(long value_) {
  ostringstream oss;
  oss << value_;
  _value = oss.str();
}

void vkmobHyperType::set(string value_) {
  _value = value_;
}
