#include "vkmathPrimeGen.h"

int main() {
  //vkmathPrimeGen pGen(17);
  vkmathPrimeGen pGen;
  for (int n = 0; n <= 32767; n++) {
    cout << n << " " << pGen() << endl;
  }
}
