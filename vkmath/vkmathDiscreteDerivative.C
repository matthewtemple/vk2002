#include "vkmathDiscreteDerivative.h"

vkmathDiscreteDerivative::vkmathDiscreteDerivative() {
  _abs = false;
  vector<double> blankSeq;
  _sequences.insert(_sequences.end(), blankSeq);
}

vkmathDiscreteDerivative::~vkmathDiscreteDerivative() {}

void vkmathDiscreteDerivative::appendElement(double element_) {
  _sequences[0].insert(_sequences[0].end(), element_);
}

void vkmathDiscreteDerivative::calcDerivative(int level_) {
  // can be optimized
  unsigned int levelp(level_);
  if (levelp > (_sequences[0].size() - 1)) {
    levelp = _sequences[0].size() - 1;
  }
  if (_sequences.size() > 1) {
    vector<double> first(_sequences[0]);
    _sequences.clear();
    _sequences.insert(_sequences.end(), first);
  }
  for (unsigned int level = 1; level <= levelp; level++) {
    vector<double> deriv;
    for (unsigned int prevElem = 1; prevElem <= _sequences[level - 1].size()
      - 1;

      prevElem++) {

      double diff = _sequences[level - 1][prevElem - 1]
        - _sequences[level - 1][prevElem];
      if (_abs) {
        if (diff < 0) {
          diff = -diff;
        }
      }
      deriv.insert(deriv.end(), diff);
    }
    _sequences.insert(_sequences.end(), deriv);
  }
}

string vkmathDiscreteDerivative::getDigest() {
  ostringstream digest;
  vector< vector<double> >::iterator ita;
  bool first(true);
  for (ita = _sequences.begin(); ita != _sequences.end(); ita++) {
    vector<double>::iterator itb;
    if (!first) {
      //digest << "; ";
      digest << endl;
    } else {
      first = false;
    }
    digest << "{";
    bool firstb(true);
    for (itb = ita->begin(); itb != ita->end(); itb++) {
      if (!firstb) {
        digest << ",";
      } else {
        firstb = false;
      }
      digest << *itb;
    }
    digest << "}";
  }
  return digest.str();
}

void vkmathDiscreteDerivative::setAbs(bool abs_) {
  _abs = abs_;
}

vector<double> vkmathDiscreteDerivative::operator[] (int derivativeLevel_) {
  calcDerivative(derivativeLevel_);
  return _sequences[derivativeLevel_];
}
