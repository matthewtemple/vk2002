#include "vkjackMimic.h"
#include "../vkmob/vkmobLogDeviceCout.h"
#include "../vkmob/vkmobRandom.h"

int main() {
  vkmobLogDevice* log = new vkmobLogDeviceCout;
  log->setAddTimestamp(false);

  vkmobRandom* mobRandom(vkmobRandom::instance());
  int length = 10;  // 10 for rapid testing
  int width = 4;    // 4 for rapid testing
  vector< vector<int> > a;
  vector< vector<int> > b;

  ostringstream ss;
  ss << "initializing phantom...";
  vkjackHJ<int> phantom(width, 3);
  for (int i = 0; i <= 31; i++) {
    phantom.pulse();
    phantom.push(phantom.pop());
  }
  phantom.flush();
  ss << "done";
  log->enter(ss.str());

  ss.str("");
  ss << "setting up input sequence pairs...";
  for (int j = 0; j <= (length - 1); j++) {
    vector<int> x;
    for (int k = 0; k <= (width - 1); k++) {
      x.insert(x.end(), mobRandom->randomLong() % 2);
    }
    a.insert(a.end(), x);
    phantom.push(x);
    phantom.pulse();
    b.insert(b.end(), phantom.pop());
  }
  phantom.flush();
  ss << "done";
  log->enter(ss.str());

  vkjackMimic mimic(a, b, log);
  mimic.setMaxExpectedFitness(0.85);
  mimic.mimic(32);  // 32 for rapid testing
  vkjackHJ<int> bestHJ = mimic.getBestAttempt().hj;
  //ss << "mimic " << bestHJ.getDigest();  // enters some infinite loop
  ss.str("");
  ss << "phantom " << phantom.getDigest();
  log->enter(ss.str());
}
