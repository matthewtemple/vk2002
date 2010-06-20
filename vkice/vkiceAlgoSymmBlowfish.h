#ifndef vkiceAlgoSymmBlowfish_h
#define vkiceAlgoSymmBlowfish_h

#include "vkiceAlgoSymm.h"

class vkiceAlgoSymmBlowfish : vkiceAlgoSymm {
public:
  vkiceAlgoSymmBlowfish();
  ~vkiceAlgoSymmBlowfish();
  string decrypt(string plaintext_, string key_);
  string encrypt(string ciphertext_, string key_);
};

#endif
