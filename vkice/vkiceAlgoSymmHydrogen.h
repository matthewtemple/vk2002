#ifndef vkiceAlgoSymmHydrogen_h
#define vkiceAlgoSymmHydrogen_h

#include "vkiceAlgoSymm.h"

class vkiceAlgoSymmHydrogen : public vkiceAlgoSymm {
public:
  vkiceAlgoSymmHydrogen();
  virtual ~vkiceAlgoSymmHydrogen();
  virtual string decrypt(string ciphertext_, string key_);
  virtual string encrypt(string plaintext_, string key_);
};

#endif
