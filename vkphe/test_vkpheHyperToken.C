#include "vkpheHyperToken.h"

int main() {
  vkpheHyperToken<int> a;
  vkpheHyperToken<int> b;
  a.append(4);
  a.append(3);
  b.append(4);
  b.append(3);
  bool t = (a == b);
  cout << t << endl;
}
