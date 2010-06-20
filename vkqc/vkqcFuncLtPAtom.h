#ifndef vkqcFuncLtPAtom_h
#define vkqcFuncLtPAtom_h

#include "../vkmob/vkmobJect.h"

class vkqcAtom;

class vkqcFuncLtPAtom : public vkmobJect {
public:
  vkqcFuncLtPAtom();
  ~vkqcFuncLtPAtom();
  bool operator() (vkqcAtom* a_, vkqcAtom* b_) const;
};

#endif
