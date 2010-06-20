#ifndef vkmobHyperType_h
#define vkmobHyperType_h

#include "vkmobJect.h"

class vkmobHyperType : vkmobJect {
  string _value;
public:
  vkmobHyperType();
  vkmobHyperType(const char* value_);
  vkmobHyperType(float value_);
  vkmobHyperType(int value_);
  vkmobHyperType(long value_);
  vkmobHyperType(string value_);
  ~vkmobHyperType();
  const char* asPChar();
  float asFloat();
  int asInt();
  long asLong();
  string asString();
  void set(const char* value_);
  void set(float value_);
  void set(int value_);
  void set(long value_);
  void set(string value_);
};

#endif
