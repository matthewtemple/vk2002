#include "vkqcAxis.h"
#include "vkqcAtom.h"

vkqcAxis::vkqcAxis() {
  _init();
}

vkqcAxis::vkqcAxis(vkqcAtom* atomA_, vkqcAtom* atomB_, string name_) {
  _init();
  _name = name_;
  if (atomA_ && atomB_) {
    _a = atomA_;
    _b = atomB_;
    _a->attachAxis(this);
    _b->attachAxis(this);
    if (name_ == "") {
      _name = (_a->getName() + "-" + _b->getName());
    }
  }
}

vkqcAxis::~vkqcAxis() {}

void vkqcAxis::_init() {
  _a = 0;
  _b = 0;
  _name = "";
}

vkqcAtom* vkqcAxis::getAtom(string atomName_) {
  vkqcAtom* atom(0);
  if (_a->getName() == atomName_) {
    atom = _a;
  } else if (_b->getName() == atomName_) {
    atom = _b;
  }
  return atom;
}

vkqcAtom* vkqcAxis::getAtomA() {
  return _a;
}

vkqcAtom* vkqcAxis::getAtomB() {
  return _b;
}

string vkqcAxis::getDigest() {
  string digest("");
  if (_a && _b) {
    digest += "axis ";
    digest += getName();
    digest += " : atoms{";
    digest += _a->getName();
    digest += ", ";
    digest += _b->getName();
    digest += "}";
  }
  return digest;
}

vkqcPolicy vkqcAxis::getPolicy(string atomName_, vkqcGame* game_) {
  vkqcPolicy policy(vkqcPolicyUndefined);
  if (_a) {
    if (_a->getName() == atomName_) {
      policy = _aPolicies[game_];
    } else if (_b) {
      if (_b->getName() == atomName_) {
        policy = _bPolicies[game_];
      }
    }
  }
  return policy;
}

vkqcPolicy vkqcAxis::getPolicyA(vkqcGame* game_) {
  return _aPolicies[game_];
}

vkqcPolicy vkqcAxis::getPolicyB(vkqcGame* game_) {
  return _bPolicies[game_];
}

vkqcRole* vkqcAxis::getRole(string atomName_, vkqcGame* game_) {
  vkqcRole* role(0);
  if (_a) {
    if (_a->getName() == atomName_) {
      role = _aRoles[game_];
    } else if (_b) {
      if (_b->getName() == atomName_) {
        role = _bRoles[game_];
      }
    }
  }
  return role;
}

vkqcRole* vkqcAxis::getRoleA(vkqcGame* game_) {
  // what if there is no such role record?
  return _aRoles[game_];
}

vkqcRole* vkqcAxis::getRoleB(vkqcGame* game_) {
  // what if there is no such role record?
  return _bRoles[game_];
}

string vkqcAxis::getName() {
  return _name;
}

void vkqcAxis::setAtomA(vkqcAtom* atom_) {
  if (atom_ != _b) {
    _a = atom_;
    if (_a) {
      _a->attachAxis(this);
    }
  } else {
    _a = 0;
  }
}

void vkqcAxis::setAtomB(vkqcAtom* atom_) {
  if (atom_ != _a) {
    _b = atom_;
    if (_b) {
      _b->attachAxis(this);
    }
  } else {
    _b = 0;
  }
}

void vkqcAxis::setName(string name_) {
  _name = name_;
}

void vkqcAxis::setPolicy(string atomName_, vkqcGame* game_,
  vkqcPolicy policy_) {

  if (_a) {
    if (_a->getName() == atomName_) {
      _aPolicies[game_] = policy_;
    } else if (_b) {
      if (_b->getName() == atomName_) {
        _bPolicies[game_] = policy_;
      }
    }
  }
}

void vkqcAxis::setPolicyA(vkqcGame* game_, vkqcPolicy policy_) {
  _aPolicies[game_] = policy_;
}

void vkqcAxis::setPolicyB(vkqcGame* game_, vkqcPolicy policy_) {
  _bPolicies[game_] = policy_;
}

void vkqcAxis::setRole(string atomName_, vkqcGame* game_, vkqcRole* role_) {
  if (_a) {
    if (_a->getName() == atomName_) {
      _aRoles[game_] = role_;
    } else if (_b) {
      if (_b->getName() == atomName_) {
        _bRoles[game_] = role_;
      }
    }
  }
}

void vkqcAxis::setRoleA(vkqcGame* game_, vkqcRole* role_) {
  _aRoles[game_] = role_;
}

void vkqcAxis::setRoleB(vkqcGame* game_, vkqcRole* role_) {
  _bRoles[game_] = role_;
}
