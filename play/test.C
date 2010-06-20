#include "vkmob/vkmobJect.h"

string f(int n) {
  ostringstream st;
  if (n != 5) {
    st << n;
    if (n != 0) {
      st << f(n - 1);
    }
  }
  return st.str();
}

int main() {
  ostringstream q;
  for (int i = 0; i <= 7; i++) {
    q << f(i) << " ";
  }
  cout << q.str() << endl;
}
