#ifndef vkqcFuncLtPAxis_h
#define vkqcFuncLtPAxis_h

#include "../vkmob/vkmobJect.h"

class vkqcAxis;

class vkqcFuncLtPAxis : public vkmobJect {
public:
  vkqcFuncLtPAxis();
  ~vkqcFuncLtPAxis();
  bool operator() (vkqcAxis* a_, vkqcAxis* b_) const;
};

#endif
