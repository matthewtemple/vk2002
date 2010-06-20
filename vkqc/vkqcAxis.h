#ifndef vkqcAxis_h
#define vkqcAxis_h

#include "../vkmob/vkmobDigestable.h"
#include "../vkmob/vkmobUniquelyNamed.h"
#include "vkqcFuncEqPGame.h"
#include "vkqcFuncHashPGame.h"
#include "vkqcPolicy.h"

class vkqcAtom;
class vkqcGame;
class vkqcRole;

class vkqcAxis : public vkmobDigestable, vkmobUniquelyNamed {
  vkqcAtom* _a;
  vkqcAtom* _b;
  string _name;
  // should these be keyed on game* or game name?
  // does an axis ever need to access members of its games?
  hash_map<vkqcGame*, vkqcPolicy, vkqcFuncHashPGame,
    vkqcFuncEqPGame> _aPolicies;
  hash_map<vkqcGame*, vkqcPolicy, vkqcFuncHashPGame,
    vkqcFuncEqPGame> _bPolicies;
  hash_map<vkqcGame*, vkqcRole*, vkqcFuncHashPGame, vkqcFuncEqPGame> _aRoles;
  hash_map<vkqcGame*, vkqcRole*, vkqcFuncHashPGame, vkqcFuncEqPGame> _bRoles;
  void _init();
public:
  vkqcAxis();
  vkqcAxis(vkqcAtom* atomA_, vkqcAtom* atomB_, string name_ = "");
  ~vkqcAxis();
  vkqcAtom* getAtom(string atomName_);
  vkqcAtom* getAtomA();
  vkqcAtom* getAtomB();
  virtual string getDigest();
  vkqcPolicy getPolicy(string atomName_, vkqcGame* game_);
  vkqcPolicy getPolicyA(vkqcGame* game_);
  vkqcPolicy getPolicyB(vkqcGame* game_);
  vkqcRole* getRole(string atomName_, vkqcGame* game_);
  vkqcRole* getRoleA(vkqcGame* game_);
  vkqcRole* getRoleB(vkqcGame* game_);
  string getName();
  void setAtomA(vkqcAtom* atom_);
  void setAtomB(vkqcAtom* atom_);
  void setName(string name_);
  void setPolicy(string atomName_, vkqcGame* game_, vkqcPolicy policy_);
  void setPolicyA(vkqcGame* game_, vkqcPolicy policy_);
  void setPolicyB(vkqcGame* game_, vkqcPolicy policy_);
  void setRole(string atomName_, vkqcGame* game_, vkqcRole* role_);
  void setRoleA(vkqcGame* game_, vkqcRole* role_);
  void setRoleB(vkqcGame* game_, vkqcRole* role_);
  friend class vkqcAtom;
  friend class vkqcFuncLtPAxis;
};

#endif
