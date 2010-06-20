#include "vkappApp.h"

int main(int argc, char* argv[]) {
  vkappApp app(argc, argv);
  cout << "to test parameters, run this program like ./test_vkappApp uysr p=xuiy" << endl;
  cout << app.getArg(1) << endl;
  cout << app.getArg("p") << endl;
}
