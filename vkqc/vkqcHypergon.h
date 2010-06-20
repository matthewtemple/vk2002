#ifndef vkqcHypergon_h
#define vkqcHypergon_h

#include "../vkmob/vkmobDigestable.h"
#include "../vkmob/vkmobLogable.h"
#include "../vkmob/vkmobUniquelyNamed.h"

class vkqcAtom;
class vkqcAxis;

class vkqcHypergon : public vkmobDigestable, public vkmobLogable,
    public vkmobUniquelyNamed {
  slist<vkqcAtom*> _atoms;
  slist<vkqcAxis*> _axes;
  string _name;
  vector<vkqcAtom*> _newAtoms;
  vector<vkqcAxis*> _newAxes;
  vkqcAtom* _newAtom(string name_ = "");
  vkqcAxis* _newAxis(vkqcAtom* atomA_, vkqcAtom* atomB_);
  void _rebuildAtoms();
  void _uniqueAtoms();
  void _uniqueAxes();
public:
  vkqcHypergon(string name_ = "", vkmobLog* log_ = 0);
  vkqcHypergon(vector<vkqcAtom*>* atoms_, string name_ = "",
    vkmobLog* log_ = 0);
  vkqcHypergon(vector<string>* atomNames_, string name_ = "",
    vkmobLog* log_ = 0);
  ~vkqcHypergon();
  void attachAxis(vkqcAxis* axis_);
  // void attachAxes(vector<vkqcAxis*>* axes_); could be more efficient than
  //   multiple calls to attachAxis()
  void detachAxis(vkqcAxis* axis_);
  void enter(string entry_, string a_ = "", string b_ = "", string c_ = "");
  virtual string getDigest();
  virtual string getDigestX();
  string getName();
  void setName(string name_);
};

#endif
