#ifndef vkqcFuncEqGame_h
#define vkqcFuncEqGame_h

#include "../vkmob/vkmobJect.h"
#include "vkqcGame.h"

class vkqcFuncEqPGame : public vkmobJect {
public:
  vkqcFuncEqPGame();
  ~vkqcFuncEqPGame();
  bool operator() (vkqcGame* a_, vkqcGame* b_) const;
};

#endif
