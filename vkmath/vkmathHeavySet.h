#ifndef vkmathHeavySet_h
#define vkmathHeavySet_h

#include "../vkmob/vkmobDigestable.h"

class vkmathHeavySet : public vkmobDigestable {
protected:
  vector<double> _set;
  // should change this to valarray when available
public:
  vkmathHeavySet();
  ~vkmathHeavySet();
  void includeElement(double element_);
  string getDigest();
  double getSize();
  vector<double> getSet();
  double getSum();
  void setSet(vector<double> set_);
  virtual void transform();
  double operator[] (double index_);
};

#endif
