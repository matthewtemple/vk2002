#include "vkmathFuncAddFac.h"

int main() {
  vkmathFuncAddFac addFac;
  for (int n = 0; n <= 7; n++) {
    cout << n << "\t" << addFac(n) << endl;
  }
}
