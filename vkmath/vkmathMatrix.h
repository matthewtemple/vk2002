#ifndef vkmathMatrix_h
#define vkmathMatrix_h

#include "../vkmob/vkmobJect.h"

template<class T> class vkmathMatrix : public vkmobJect {
  // if we had valarrays that would be nice
  vector<T> _matrixVector;
public:
  vkmathMatrix();
  ~vkmathMatrix();
};

#endif
