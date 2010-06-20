#ifndef vkmathDiscreteDerivative_h
#define vkmathDiscreteDerivative_h

#include "../vkmob/vkmobDigestable.h"

class vkmathDiscreteDerivative : public vkmobDigestable {
  bool _abs;
  vector< vector<double> > _sequences;
  void calcDerivative(int level_);
public:
  vkmathDiscreteDerivative();
  ~vkmathDiscreteDerivative();
  void appendElement(double element_);
  string getDigest();
  void setAbs(bool abs_);
  vector<double> operator[] (int derivativeLevel_);
};

#endif
