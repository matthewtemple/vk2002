#ifndef vkmathNaughtyPi_h
#define vkmathNaughtyPi_h

#include "../vkmob/vkmobJect.h"

class vkmathNaughtyPi : public vkmobJect {
public:
  vkmathNaughtyPi();
  ~vkmathNaughtyPi();
  double circ(double r, int n);
  double pi(double r, int n);
  double side(double r, int n);
};

#endif
