#ifndef vkmobDigestable_h
#define vkmobDigestable_h

#include "vkmobJect.h"

class vkmobDigestable : public vkmobJect {
public:
  vkmobDigestable();
  virtual ~vkmobDigestable();
  virtual string getDigest() = 0;
  virtual string getDigestX();  // eXtended digest
  virtual string getDigestY();  // [memory address-level] extended digest
  virtual string getDigestZ();  // insanely extended digest
};

#endif
