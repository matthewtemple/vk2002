#include "vkmathDiscreteDerivative.h"

int main() {
  vkmathDiscreteDerivative dd;
  dd.appendElement(49);
  dd.appendElement(36);
  dd.appendElement(25);
  dd.appendElement(16);
  dd.appendElement(9);
  dd.appendElement(4);
  dd.appendElement(1);
  dd.appendElement(0);
  dd[12];
  cout << dd.getDigest() << endl;
}
