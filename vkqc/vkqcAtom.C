#include "vkqcAtom.h"
#include "vkqcAtomNamer.h"
#include "vkqcAxis.h"
#include "vkqcFuncEqPGame.h"
#include "vkqcFuncHashPGame.h"
#include "vkqcFuncLtPAxis.h"

vkqcAtom::vkqcAtom() {
  vkqcAtomNamer* atomNamer = vkqcAtomNamer::instance();
  _name = atomNamer->uniqueName();
}

vkqcAtom::vkqcAtom(string name_) {
  if (name_ != "") {
    _name = name_;
  } else {
    vkqcAtomNamer* atomNamer = vkqcAtomNamer::instance();
    _name = atomNamer->uniqueName();
  }
}

vkqcAtom::~vkqcAtom() {}

void vkqcAtom::_uniqueAxes() {
  _axes.sort<vkqcFuncLtPAxis>(vkqcFuncLtPAxis());
  _axes.unique();
}

void vkqcAtom::attachAxis(vkqcAxis* axis_) {
  if ((axis_->_a == this) || (axis_->_b == this)) {
    _axes.insert(_axes.end(), axis_);
    _uniqueAxes();
  }
}

void vkqcAtom::detachAxis(vkqcAxis* axis_) {
  _axes.remove(axis_);
}

string vkqcAtom::getDigest() {
  string digest("");
  digest += "atom ";
  digest += getName();
  return digest;
}

string vkqcAtom::getDigestX() {
  string digest("");
  digest += "atom ";
  digest += getName();
  digest += " : axes{";
  slist<vkqcAxis*>::iterator it;
  bool anyAxes(false);
  for (it = _axes.begin(); it != _axes.end(); it++) {
    anyAxes = true;
    digest += (*it)->getName();
    // ...getDigestY()
    //ostrstream os;
    //os << *it;
    //digest += "(";
    //digest += os.str();
    //digest += ")";
    digest += ", ";
  }
  if (anyAxes) {
    digest.replace(digest.length() - 2, 2, "");
  }
  digest += "}";
  return digest;
}

string vkqcAtom::getName() {
  return _name;
}

vkqcPolicy vkqcAtom::getPolicy(vkqcAxis* axis_, vkqcGame* game_) {
  vkqcPolicy policy(vkqcPolicyUndefined);

  if (this == axis_->_a) {
    policy = axis_->_aPolicies[game_];
  }
  if (this == axis_->_b) {
    policy = axis_->_bPolicies[game_];
  }
  return policy;
}

vkqcRole* vkqcAtom::getRole(vkqcAxis* axis_, vkqcGame* game_) {
  vkqcRole* role(0);

  if (this == axis_->_a) {
    role = axis_->_aRoles[game_];
  }
  if (this == axis_->_b) {
    role = axis_->_bRoles[game_];
  }
  return role;
}

void vkqcAtom::setName(string name_) {
  _name = name_;
}

void vkqcAtom::setPolicy(vkqcAxis* axis_, vkqcGame* game_,
  vkqcPolicy policy_) {

  if (this == axis_->_a) {
    axis_->_aPolicies[game_] = policy_;
  }
  if (this == axis_->_a) {
    axis_->_aPolicies[game_] = policy_;
  }
}

void vkqcAtom::setRole(vkqcAxis* axis_, vkqcGame* game_, vkqcRole* role_) {
  if (this == axis_->_a) {
    axis_->_aRoles[game_] = role_;
  }
  if (this == axis_->_b) {
    axis_->_bRoles[game_] = role_;
  }
}

bool vkqcAtom::sharesAxisWith(vkqcAtom* atom_) {
  slist<vkqcAxis*>::iterator it;
  bool sharesAxis(false);
  for (it = _axes.begin(); it != _axes.end(); it++) {
    if ((atom_ == (*it)->getAtomA()) || (atom_ == (*it)->getAtomB())) {
      sharesAxis = true;
    }
  }
  return sharesAxis;
}
