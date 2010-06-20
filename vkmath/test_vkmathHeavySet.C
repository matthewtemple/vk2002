#include "vkmathHeavySet.h"

int main() {
  vkmathHeavySet heavySet;
  heavySet.includeElement(-5.5);
  heavySet.includeElement(-4);
  heavySet.includeElement(9.5);
  heavySet.includeElement(-1);
  heavySet.includeElement(1);
  for (int n = 0; n <= 15; n++) {
    cout << heavySet.getDigest() << endl;
    heavySet.transform();
  }
}
