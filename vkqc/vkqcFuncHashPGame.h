#ifndef vkqcFuncHashPGame_h
#define vkqcFuncHashPGame_h

#include "../vkmob/vkmobJect.h"

class vkqcGame;

class vkqcFuncHashPGame : public vkmobJect {
public:
  vkqcFuncHashPGame();
  ~vkqcFuncHashPGame();
  size_t operator() (vkqcGame* game_) const;
};

#endif
