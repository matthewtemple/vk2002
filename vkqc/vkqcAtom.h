#ifndef vkqcAtom_h
#define vkqcAtom_h

#include "../vkmob/vkmobDigestable.h"
#include "../vkmob/vkmobUniquelyNamed.h"
#include "vkqcFuncEqPGame.h"
#include "vkqcFuncHashPGame.h"
#include "vkqcPolicy.h"

class vkqcAxis;
class vkqcGame;
class vkqcRole;
class vkqcStrategy;

class vkqcAtom : public vkmobDigestable, public vkmobUniquelyNamed {
  slist<vkqcAxis*> _axes;  // make sure this is being updated by axis and
                           // whoever needs to 
  string _name;
  hash_map<vkqcGame*, vkqcStrategy*, vkqcFuncHashPGame,
    vkqcFuncEqPGame> _strategies;
    // put safeguards in this class to ensure that the atom only uses a
    // a strategy appropriate for the game being played...this in access
    // methods
  void _uniqueAxes();
public:
  vkqcAtom();
  vkqcAtom(string name_);
  ~vkqcAtom();
  void attachAxis(vkqcAxis* axis_);
  // void attachAxes(vector<vkqcAxis*> axes_);  could be faster than multiple
  // calls to attachAxis()
  void detachAxis(vkqcAxis* axis_);
  virtual string getDigest();
  virtual string getDigestX();
  string getName();
  vkqcPolicy getPolicy(vkqcAxis* axis_, vkqcGame* game_);
  vkqcRole* getRole(vkqcAxis* axis_, vkqcGame* game_);
  void setName(string name_);
  void setPolicy(vkqcAxis* axis_, vkqcGame* game_, vkqcPolicy policy_);
  void setRole(vkqcAxis* axis_, vkqcGame* game_, vkqcRole* role_);
  bool sharesAxisWith(vkqcAtom* atom_);
  // bool sharesAxisWith(string atomName_);  if you ever need it
  friend class vkqcFuncLtPAtom;
};

#endif
