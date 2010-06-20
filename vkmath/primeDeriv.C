#include "vkmathDiscreteDerivative.h"
#include "vkmathPrimeGen.h"

int main() {
  vkmathDiscreteDerivative dd;
  vkmathPrimeGen pGen;
  long prime;
  int k(1024);
  for (int n = 0; n <= (k - 1); n++) {
    prime = pGen();
    dd.appendElement(prime);
  }
  dd.setAbs(true);
  dd[1];
  cout << dd.getDigest() << endl;
}
