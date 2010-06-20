#include "../vkmob/vkmob.h"
#include "vkqc.h"

int main() {
  {
    vkmobStopwatch swatch;
    for (int a = 0; a <= 1000; a++) {
      vkqcAtomNamer* atomNamer = vkqcAtomNamer::instance();
      cerr << atomNamer->uniqueName() << endl;
    }
  }

  {
    vkmobStopwatch swatch;
    for (int a = 0; a <= 2000; a++) {
      vkqcAtomNamer* atomNamer = vkqcAtomNamer::instance();
      cerr << atomNamer->uniqueName() << endl;
    }
  }

  {
    vkmobStopwatch swatch;
    for (int a = 0; a <= 4000; a++) {
      vkqcAtomNamer* atomNamer = vkqcAtomNamer::instance();
      cerr << atomNamer->uniqueName() << endl;
    }
  }
}
