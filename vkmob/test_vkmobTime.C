#include "vkmobTime.h"
#include "vkmobTimeHoursMinutesSeconds.h"
#include "vkmobTimeSeconds.h"
#include "vkmobTimeSecondsMilliseconds.h"

int main() {
  vkmobTime mobTime;
  cout << "basic" << endl;
  cout << mobTime.getTime() << endl << endl;

  vkmobTimeHoursMinutesSeconds mobTimeHoursMinutesSeconds;
  cout << "hours, minutes, seconds" << endl;
  cout << mobTimeHoursMinutesSeconds.getTime() << endl << endl;

  vkmobTimeSeconds mobTimeSeconds;
  cout << "seconds" << endl;
  cout << mobTimeSeconds.getTime() << endl << endl;

  vkmobTimeSecondsMilliseconds mobTimeSecondsMilliseconds;
  cout << "seconds, milliseconds" << endl;
  cout << mobTimeSecondsMilliseconds.getTime() << endl;
}
