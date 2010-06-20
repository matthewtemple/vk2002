#include "vkiceAlgoSymmHydrogen.h"

vkiceAlgoSymmHydrogen::vkiceAlgoSymmHydrogen() {}

vkiceAlgoSymmHydrogen::~vkiceAlgoSymmHydrogen() {}

string vkiceAlgoSymmHydrogen::decrypt(string ciphertext_, string key_) {
  int keyLen(key_.length());
  string newText;
  int textLen = ciphertext_.length();
  if (textLen > 0) {
    for (int i = 0; i <= (textLen - 1); i++) {
      newText += (ciphertext_[i] xor key_[i % keyLen]);
    }
  }
  return newText;
}

string vkiceAlgoSymmHydrogen::encrypt(string plaintext_, string key_) {
  int keyLen(key_.length());
  string newText;
  int textLen = plaintext_.length();
  if (textLen > 0) {
    for (int i = 0; i <= (textLen - 1); i++) {
      newText += (plaintext_[i] xor key_[i % keyLen]);
    }
  }
  return newText;
}
