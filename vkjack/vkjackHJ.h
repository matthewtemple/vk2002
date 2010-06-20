#ifndef vkjackHJ_h
#define vkjackHJ_h

#include "../vkmob/vkmobDigestable.h"
#include "../vkmob/vkmobRandom.h"
#include "vkjackNeuron.h"

template<class T> class vkjackHJ : public vkmobDigestable {
  int _boredomThreshhold;
  bool _dynamic;
  queue< vector<T> > _iQ;
  queue< vector<T> > _oQ;
  int _neuronAddAge;
  int _neuronMinAge;
  string getFunctionTextLayerReg(int layer_, int reg_);
  void initBrain();
  void initNeuron(int c_, int d_);
public:

  // these were private...they need to be made so again
  // the reason I made them public for now is that I can't seem to declare the
  // << and >> operators as templates and friends...they're templates but not
  // friends now...hence these vars needing to be public
  long _age;
  vector< vector<vkjackNeuron> > _brain;
  int _brainLayers;
  int _brainRegisters;

  int agec;
  int mutc;
  vkjackHJ(int brainRegisters_ = 8, int brainLayers_ = 8);
  ~vkjackHJ();
  vector< vector<T> > _getBrain();
  void flush();
  int getBoredomThreshhold();
  int getBrainLayers();
  int getBrainRegisters();
  virtual string getDigest();
  bool getDynamic();
  string getFunctionText();
  int getNeuronAddAge();
  int getNeuronMinAge();
  vector<T> pop();
  void pulse();
  void push(vector<T> in_);
  void setBoredomThreshhold(int boredomThreshhold_);
  void setDynamic(bool dynamic_);
  void setNeuronAddAge(int neuronAddAge_);
  void setNeuronMinAge(int neuronMinAge_);
  template<T> friend istream& operator>> (istream& s, vkjackHJ<T>& hj);
  template<T> friend ostream& operator<< (ostream& s, vkjackHJ<T> hj);
};

template<class T> istream& operator>> (istream& s, vkjackHJ<T>& hj);
template<class T> ostream& operator<< (ostream& s, vkjackHJ<T> hj);

// inserted from .C file to work around gcc template bug (actually link problem)
#include "../vkmath/vkmathBoolBinOps.h"

template<class T> vkjackHJ<T>::vkjackHJ(int brainRegisters_,
  int brainLayers_) {

  _age = 0;
  _brainLayers = brainLayers_;
  _brainRegisters = brainRegisters_;
  _boredomThreshhold = 32;
  _dynamic = true;
  _neuronAddAge = 256;
  _neuronMinAge = 1024;
  initBrain();
}

template<class T> vkjackHJ<T>::~vkjackHJ() {}

template<class T> void vkjackHJ<T>::initBrain() {
  _brain.resize(_brainLayers + 1);
  _brain[0].resize(_brainRegisters);
  for (int j = 1; j <= (_brainLayers); j++) {
    _brain[j].resize(_brainRegisters);
    for (int k = 0; k <= (_brainRegisters - 1); k++) {
      initNeuron(j, k);
    }
  }
}

template<class T> void vkjackHJ<T>::flush() {
  while (!_iQ.empty()) {
    _iQ.pop();
  }
  while (!_oQ.empty()) {
    _oQ.pop();
  }
}

template<class T> int vkjackHJ<T>::getBoredomThreshhold() {
  return _boredomThreshhold;
}

template<class T> int vkjackHJ<T>::getBrainLayers() {
  return _brainLayers;
}

template<class T> int vkjackHJ<T>::getBrainRegisters() {
  return _brainRegisters;
}

template<class T> string vkjackHJ<T>::getDigest() {
  ostringstream st;
  st << "hyperjack {" << endl;
  st << getFunctionText();
  st << "}";
  return st.str();
}

template<class T> bool vkjackHJ<T>::getDynamic() {
  return _dynamic;
}

template<class T> string vkjackHJ<T>::getFunctionTextLayerReg(int layer_,
  int reg_) {

  ostringstream st;
  // cycle through ()/[]/{}
  if (layer_ == 1) {
    st << "(";
    st << _brain[layer_][reg_].pA;
    st << " ";
    st << _brain[layer_][reg_].op;
    st << " ";
    st << _brain[layer_][reg_].pB;
    st << ")";
  } else {
    st << "(";
    st << getFunctionTextLayerReg(layer_ - 1, _brain[layer_][reg_].pA);
    st << " ";
    st << _brain[layer_][reg_].op;
    st << " ";
    st << getFunctionTextLayerReg(layer_ - 1, _brain[layer_][reg_].pB);
    st << ")";
  }
  return st.str();
}

template<class T> string vkjackHJ<T>::getFunctionText() {
  ostringstream st;
  for (int eachReg = 0; eachReg <= (_brainRegisters - 1); eachReg++) {
    st << "  register " << eachReg << " : ";
    st << getFunctionTextLayerReg(_brainLayers, eachReg);
    st << endl;
  }
  return st.str();
}

template<class T> int vkjackHJ<T>::getNeuronAddAge() {
  return _neuronAddAge;
}

template<class T> int vkjackHJ<T>::getNeuronMinAge() {
  return _neuronMinAge;
}

template<class T> void vkjackHJ<T>::initNeuron(int c_, int d_) {
  vkmobRandom* mobRand = vkmobRandom::instance();
  _brain[c_][d_].pA = mobRand->randomLong() % _brainRegisters;
  _brain[c_][d_].pB = mobRand->randomLong() % _brainRegisters;
  _brain[c_][d_].op = mobRand->randomLong() % 16;
  _brain[c_][d_].stale = 0;
  _brain[c_][d_].value = mobRand->randomLong() % 2;
  _brain[c_][d_].age = _neuronMinAge + (mobRand->randomLong() % _neuronAddAge);
}

template<class T> vector<T> vkjackHJ<T>::pop() {
  vector<int> f;
  if (!_oQ.empty()) {
    f = _oQ.front();
    _oQ.pop();
  }
  return f;
}

template<class T> void vkjackHJ<T>::pulse() {
  // inputs
  if (!_iQ.empty()) {
    // waking life
    vector<int> f(_iQ.front());
    _iQ.pop();
    for (int j = 0; j <= (_brainRegisters - 1); j++) {
      int value = f[j];
      if (value != _brain[0][j].value) {
        _brain[0][j].stale = 0;
      } else {
        _brain[0][j].stale++;
      }
      _brain[0][j].value = value;
    }
  } else {
    // dreaming
    vkmobRandom* mobRand = vkmobRandom::instance();
    for (int j = 0; j <= (_brainRegisters - 1); j++) {
      int value(mobRand->randomLong() % 2);
      if (value != _brain[0][j].value) {
        _brain[0][j].stale = 0;
      } else {
        _brain[0][j].stale++;
      }
      _brain[0][j].value = value;
    }
  }

  mutc = 0;
  agec = 0;

  // neurons
  for (int j = 1; j <= (_brainLayers); j++) {
    for (int k = 0; k <= (_brainRegisters - 1); k++) {
      // processing
      int a = _brain[j - 1][_brain[j][k].pA].value;
      int b = _brain[j - 1][_brain[j][k].pB].value;
      int op = _brain[j][k].op;
      int value = vkmathBoolBinOps[op][a][b];
      if (value != _brain[j][k].value) {
        _brain[j][k].stale = 0;
      } else {
        _brain[j][k].stale++;
      }
      _brain[j][k].value = value;

      if (_dynamic) {
        // aging
        _brain[j][k].age--;
        if (_brain[j][k].age <= 0) {
          initNeuron(j, k);
          agec++;
        }
        // self-reforming
        if (_brain[j][k].stale >= _boredomThreshhold) {
          initNeuron(j, k);
          mutc++;
        }
      }

    }
  }

  // outputs
  vector<int> b;
  b.resize(_brainRegisters);
  for (int j = 0; j <= (_brainRegisters - 1); j++) {
    b[j] = _brain[_brainLayers][j].value;
  }
  _oQ.push(b);

  _age++;
}

template<class T> void vkjackHJ<T>::push(vector<T> in_) {
  _iQ.push(in_);
}

template<class T> void vkjackHJ<T>::setBoredomThreshhold(
  int boredomThreshhold_) {

  _boredomThreshhold = boredomThreshhold_;
}

template<class T> void vkjackHJ<T>::setDynamic(bool dynamic_) {
  _dynamic = dynamic_;
}

template<class T> void vkjackHJ<T>::setNeuronAddAge(int neuronAddAge_) {
  _neuronAddAge = neuronAddAge_;
}

template<class T> void vkjackHJ<T>::setNeuronMinAge(int neuronMinAge_) {
  _neuronMinAge = neuronMinAge_;
}

template<class T> istream& operator>> (istream& s, vkjackHJ<T>& hj) {
  int i;
  int j;
  int k;
  int l;
  int m;
  int n(0);
  vector< vector<vkjackNeuron> >::iterator ita;
  vector< vector<vkjackNeuron> >::iterator itx;
  itx = hj._brain.begin();
  itx++;
  hj._brain.resize(hj._brainLayers + 1);
  s >> hj._age;
  for (ita = itx; ita != hj._brain.end(); ita++) {
    vector<vkjackNeuron>::iterator itb;
    hj._brain[n].resize(hj._brainRegisters);
    for (itb = ita->begin(); itb != ita->end(); itb++) {
      s >> i;
      s >> j;
      s >> k;
      s >> l;
      s >> m;
      itb->op = i;
      itb->pA = j;
      itb->pB = k;
      itb->stale = l;
      itb->age = m;
    }
    n++;
  }
  return s;
}

template<class T> ostream& operator<< (ostream& s, vkjackHJ<T> hj) {
  stringstream strs;
  vector< vector<vkjackNeuron> >::iterator ita;
  vector< vector<vkjackNeuron> >::iterator itx;
  itx = hj._brain.begin();
  itx++;
  strs << hj._age << " ";
  for (ita = itx; ita != hj._brain.end(); ita++) {
    vector<vkjackNeuron>::iterator itb;
    for (itb = ita->begin(); itb != ita->end(); itb++) {
      strs << itb->op << " ";
      strs << itb->pA << " ";
      strs << itb->pB << " ";
      strs << itb->stale << " ";
      strs << itb->age << " ";
    }
  }
  //cout << strs << endl;
  return s << strs.str();
}

#endif
