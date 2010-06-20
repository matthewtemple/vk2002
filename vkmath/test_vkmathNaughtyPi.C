#include "vkmathNaughtyPi.h"

int main() {
  vkmathNaughtyPi nPi;
  cout.precision(64);
  double n(1000000000);
  cout << nPi.pi(n, 100) << endl;
  cout << nPi.pi(n, 20) << endl;
  cout << nPi.pi(n, 10) << endl;
  cout << nPi.pi(n, 10) << endl;
  cout << nPi.pi(n, 1) << endl;
}
