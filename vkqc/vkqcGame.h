#ifndef vkqcGame_h
#define vkqcGame_h

#include "../vkmath/vkmathGame.h"
#include "../vkmob/vkmobUniquelyNamed.h"

class vkqcRole;

class vkqcGame : public vkmathGame, public vkmobUniquelyNamed {
  string _name;
  vector<vkqcRole*>* _roles;
public:
  vkqcGame(string name_ = "");
  ~vkqcGame();
  string getName();
  void setName(string name_);
};

#endif
