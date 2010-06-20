#ifndef vkqcRole_h
#define vkqcRole_h

#include "../vkmob/vkmobUniquelyNamed.h"

class vkqcRole : public vkmobUniquelyNamed {
  string _name;
public:
  vkqcRole(string name_ = "");
  ~vkqcRole();
  string getName();
  void setName(string name_);
};

#endif
