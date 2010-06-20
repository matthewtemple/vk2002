#include "vkmathHeavySet.h"

vkmathHeavySet::vkmathHeavySet() {}

vkmathHeavySet::~vkmathHeavySet() {}

void vkmathHeavySet::includeElement(double element_) {
  _set.insert(_set.end(), element_);
}

string vkmathHeavySet::getDigest() {
  ostringstream digest;
  vector<double>::iterator it;
  digest << "{";
  bool first(1);
  for (it = _set.begin(); it != _set.end(); it++) {
    if (!first) {
      digest << ",";
    } else {
      first = 0;
    }
    digest << *it;
  }
  digest << "} sum=";
  digest << getSum();
  return digest.str();
}

double vkmathHeavySet::getSize() {
  return _set.size();
}

vector<double> vkmathHeavySet::getSet() {
  return _set;
}

double vkmathHeavySet::getSum() {
  // could make this so if a stored sum is valid we don't recalculate
  double sum(0);
  vector<double>::iterator it;
  for (it = _set.begin(); it != _set.end(); it++) {
    sum += *it;
  }
  return sum;
}

void vkmathHeavySet::setSet(vector<double> set_) {
  _set = set_;
}

void vkmathHeavySet::transform() {
  double sum(getSum());
  double a;
  double x;
  double n(_set.size());;
  vector<double> newSet;
  vector<double>::iterator it;
  for (it = _set.begin(); it != _set.end(); it++) {
    a = *it;
    x = a - ((sum - a) / (n - 1));
    newSet.insert(newSet.end(), x);
  }
  _set = newSet;
} 

double vkmathHeavySet::operator[] (double index_) {
  return _set[index_];
}
