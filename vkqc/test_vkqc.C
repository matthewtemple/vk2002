#include "../vkmob/vkmob.h"
#include "vkqc.h"

int main() {
  //vkmobStopwatch swatch;

  vkmobLogMask faceNormal(string("1"));
  vkmobLogMask logMask(string("1"));
  vkmobLog log(logMask);
  vkmobLogDeviceCout logCout;
  logCout.setAddTimestamp(true);
  log.attachLog(&logCout);

  log.enter("virtuak quantum chaos test suite", faceNormal);

  vector<vkqcAtom*> atomVec;
  for (int j = 0; j <= 2; j++) {
    vkqcAtom* atom = new vkqcAtom;
    atomVec.insert(atomVec.begin(), atom);
    log.enter(atom->getDigestX(), faceNormal);
  }

  //vector<string> atomVec;
  //atomVec.insert(atomVec.begin(), "ast");
  //atomVec.insert(atomVec.begin(), "shr");
  //atomVec.insert(atomVec.begin(), "tat");

  vkqcHypergon hyp2(&atomVec, "h2", &log);
  log.enter(hyp2.getDigestX(), faceNormal);

  vector<vkqcAtom*>::iterator it;
  for (it = atomVec.begin(); it != atomVec.end(); it++) {
    log.enter((*it)->getDigestX(), faceNormal);
  }

  for (it = atomVec.begin(); it != atomVec.end(); it++) {
    delete *it;
  }
}
