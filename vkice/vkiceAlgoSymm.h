#ifndef vkiceAlgoSymm_h
#define vkiceAlgoSymm_h

#include "vkiceAlgo.h"

class vkiceAlgoSymm : public vkiceAlgo {
public:
  vkiceAlgoSymm();
  virtual ~vkiceAlgoSymm();
  virtual string decrypt(string plaintext_, string key_);
  virtual string encrypt(string ciphertext_, string key_);
};

#endif
