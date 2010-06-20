#include "vkmobAssertion.h"

vkmobAssertion::vkmobAssertion(bool condition_, string message_) {
  if (!condition_) {
    cout << message_ << endl;
    abort();
  }
}

vkmobAssertion::~vkmobAssertion() {}
