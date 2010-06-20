#include "vkmobLogDeviceCout.h"
#include "vkmobStopwatch.h"

int main() {
  vkmobLogDeviceCout cLog;
  {
    vkmobStopwatch swatch("timer", &cLog);
    //vkmobStopwatch swatch("timer");
    //vkmobStopwatch swatch;
    for (int i = 1; i <= 10000; i++) { cout << i; };
    cout << endl;
  }
}
