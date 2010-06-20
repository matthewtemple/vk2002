#include "vkjackHJ.h"

int main() {
  vkjackHJ<int> red;
  vkjackHJ<int> blue;
  vector<int> redOut;
  vector<int> blueOut;
  vector<int> redOutLast;
  vector<int> blueOutLast;

  redOut.resize(red.getBrainRegisters());
  redOutLast.resize(red.getBrainRegisters());
  blueOut.resize(blue.getBrainRegisters());
  blueOutLast.resize(blue.getBrainRegisters());

  ifstream redIFile("red.hj");
  if (redIFile) {
    redIFile >> red;
    redIFile.close();
  }
  ifstream blueIFile("blue.hj");
  if (blueIFile) {
    blueIFile >> blue;
    blueIFile.close();
  }

  red.pulse();
  redOut = red.pop();

  int width = red.getBrainRegisters();
  int r = 19;
  if (red.getBrainRegisters() > r) {
    width = r;
  }
  int widthX = 64;

  int dreaming(0);
  int blueSame(0);
  int redSame(0);
  float blueSameP(0);
  float redSameP(0);

  while (1) {
    {
    ofstream redOFile("red.hj");
    redOFile << red;
    redOFile.flush();
    ofstream blueOFile("blue.hj");
    blueOFile << blue;
    blueOFile.flush();
    }
  for (int h = 0; h <= 1023; h++) {
    if (!dreaming) {
      blue.push(redOut);
    }
    blue.pulse();
    blueOutLast = blueOut;
    blueOut = blue.pop();
    blueSame = 0;
    for (int j = 0; j <= (widthX - 1); j++) {
      if (blueOut[j] == blueOutLast[j]) {
        blueSame++;
      }
    }
    blueSameP = ( (((float) blueSame) / ((float) widthX)) + (15 * blueSameP) ) / 16;

    if (!dreaming) {
      red.push(blueOut);
    }
    red.pulse();
    redOutLast = redOut;
    redOut = red.pop();
    redSame = 0;
    for (int j = 0; j <= (widthX - 1); j++) {
      if (redOut[j] == redOutLast[j]) {
        redSame++;
      }
    }
    redSameP = ( (((float) redSame) / ((float) widthX)) + (15 * redSameP) ) / 16;

    if (dreaming) {
      cout << "-";
    } else {
      cout << "+";
    }
    cout.width(6);
    cout << red.mutc;
    cout.width(6);
    cout << red.agec;
    cout.width(6);
    cout.precision(2);
    cout << redSameP << "  ";
    for (int j = 0; j <= (width - 1); j++) {
      if (redOut[j] == 1) {
        cout << "-";
      } else {
        cout << "0";
      };
    }

    cout.width(6);
    cout << blue.mutc;
    cout.width(6);
    cout << blue.agec;
    cout.width(6);
    cout.precision(2);
    cout << blueSameP << "  ";
    for (int j = 0; j <= (width - 1); j++) {
      //cout << blueOut[j];
      if (blueOut[j] == 1) {
        cout << "-";
      } else {
        cout << "0";
      };
    }
    cout << endl;

  }
  if (dreaming == 0) {
    dreaming = 1;
  } else {
    dreaming = 0;
  }
  }

}
