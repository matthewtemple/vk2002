#include "vkiceAlgoSymmBlowfish.h"
//#include "../library/libgcrypt/src/gcrypt.h"

vkiceAlgoSymmBlowfish::vkiceAlgoSymmBlowfish() {}

vkiceAlgoSymmBlowfish::~vkiceAlgoSymmBlowfish() {}

string vkiceAlgoSymmBlowfish::decrypt(string plaintext_, string key_) {}

string vkiceAlgoSymmBlowfish::encrypt(string ciphertext_, string key_) {
  /*
  int keyLen = key_.length();
  char* key = new char[keyLen];
  strcpy(key, key_.c_str());

  int textLen = ciphertext_.length();
  char* text = new char[textLen];
  strcpy(text, ciphertext_.c_str());

  GCRY_CIPHER_HD hd;
  hd = gcry_cipher_open(GCRY_CIPHER_BLOWFISH, GCRY_CIPHER_MODE_ECB,
    GCRY_CIPHER_SECURE);
  gcry_cipher_setkey(hd, (unsigned char*) key, keyLen);
  gcry_cipher_encrypt(hd, (unsigned char*) text, textLen, (unsigned char*) text, textLen);
  gcry_cipher_close(hd);
  */
}
