#include "vkmobHyperType.h"

int main() {
  vkmobHyperType ht0("152");
  int ht0_int = ht0.asInt();
  cout << ht0_int << endl;

  vkmobHyperType ht1(149);
  char* ht1_pchar = new char[ht1.asString().length()];
  ht1_pchar = const_cast<char*>(ht1.asPChar());
  cout << ht1_pchar << endl;
}
