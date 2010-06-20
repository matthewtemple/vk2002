#include "vkqcHypergon.h"
#include "vkqcAtom.h"
#include "vkqcAxis.h"
#include "vkqcFuncEqPGame.h"
#include "vkqcFuncHashPGame.h"
#include "vkqcFuncLtPAtom.h"
#include "vkqcFuncLtPAxis.h"

vkqcHypergon::vkqcHypergon(string name_ = "", vkmobLog* log_) {
  setLog(log_);
  _name = name_;
}

vkqcHypergon::vkqcHypergon(vector<vkqcAtom*>* atoms_, string name_,
  vkmobLog* log_) {

  setLog(log_);
  _name = name_;
  vector<vkqcAtom*>::iterator it;
  for (it = atoms_->begin(); it != atoms_->end(); it++) {
    _atoms.insert(_atoms.begin(), *it);
    #ifdef vkDefArticulationX
      enter("inserting {A}", (*it)->getDigest());
    #endif
  }
  _uniqueAtoms();
  slist<vkqcAtom*>::iterator itA;
  slist<vkqcAtom*>::iterator itB;
  for (itA = _atoms.begin(); itA != _atoms.end(); itA++) {
    for (itB = _atoms.begin(); itB != itA; itB++) {
      vkqcAxis* axis = _newAxis(*itA, *itB);
      _axes.insert(_axes.begin(), axis);
      #ifdef vkDefArticulationX
        enter("creating {A}", axis->getDigest());
      #endif
    }
  }
  _uniqueAxes();
}

vkqcHypergon::vkqcHypergon(vector<string>* atomNames_, string name_ = "",
  vkmobLog* log_ = 0) {

  setLog(log_);
  _name = name_;
  vector<string>::iterator it;
  for (it = atomNames_->begin(); it != atomNames_->end(); it++) {
    vkqcAtom* atom = _newAtom(*it);
    _atoms.insert(_atoms.begin(), atom);
  }
  _uniqueAtoms();
  slist<vkqcAtom*>::iterator itA;
  slist<vkqcAtom*>::iterator itB;
  for (itA = _atoms.begin(); itA != _atoms.end(); itA++) {
    for (itB = _atoms.begin(); itB != itA; itB++) {
      vkqcAxis* axis = _newAxis(*itA, *itB);
      _axes.insert(_axes.begin(), axis);
    }
  }
  _uniqueAxes();
}

vkqcHypergon::~vkqcHypergon() {
  vector<vkqcAtom*>::iterator itAtoms;
  for (itAtoms = _newAtoms.begin(); itAtoms != _newAtoms.end(); itAtoms++) {
    delete *itAtoms;
  }
  vector<vkqcAxis*>::iterator itAxes;
  for (itAxes = _newAxes.begin(); itAxes != _newAxes.end(); itAxes++) {
    delete *itAxes;
  }
}

vkqcAtom* vkqcHypergon::_newAtom(string name_) {
  vkqcAtom* atom = new vkqcAtom(name_);
  _newAtoms.insert(_newAtoms.end(), atom);
  return atom;
}

vkqcAxis* vkqcHypergon::_newAxis(vkqcAtom* atomA_, vkqcAtom* atomB_) {
  vkqcAxis* axis = new vkqcAxis(atomA_, atomB_);
  _newAxes.insert(_newAxes.end(), axis);
  return axis;
}

void vkqcHypergon::_rebuildAtoms() {
  _atoms.clear();
  slist<vkqcAxis*>::iterator it;
  for (it = _axes.begin(); it != _axes.end(); it++) {
    _atoms.insert(_atoms.end(), (*it)->getAtomA());
    _atoms.insert(_atoms.end(), (*it)->getAtomB());
  }
  _uniqueAtoms();
}

void vkqcHypergon::_uniqueAtoms() {
  _atoms.sort<vkqcFuncLtPAtom>(vkqcFuncLtPAtom());
  _atoms.unique();
}

void vkqcHypergon::_uniqueAxes() {
  _axes.sort<vkqcFuncLtPAxis>(vkqcFuncLtPAxis());
  _axes.unique();
}

void vkqcHypergon::attachAxis(vkqcAxis* axis_) {
  _axes.insert(_axes.end(), axis_);
  _atoms.insert(_atoms.end(), axis_->getAtomA());
  _atoms.insert(_atoms.end(), axis_->getAtomB());
  _uniqueAtoms();
  _uniqueAxes();
}

void vkqcHypergon::detachAxis(vkqcAxis* axis_) {
  _axes.remove(axis_);
  _rebuildAtoms();
}

void vkqcHypergon::enter(string entry_, string a_, string b_, string c_) {
  string entry("vkqcHypergon {D} : ");
  entry += entry_;
  vkmobLogable::enter(entry, a_, b_, c_, _name);
}

string vkqcHypergon::getDigest() {
  string digest("");
  digest += "hypergon ";
  digest += getName();
  digest += " : ";

  digest += "atoms{";
  slist<vkqcAtom*>::iterator itAtoms;
  bool anyAtoms(false);
  for (itAtoms = _atoms.begin(); itAtoms != _atoms.end(); itAtoms++) {
    anyAtoms = true;
    digest += (*itAtoms)->getName();
    digest += ", ";
  }
  if (anyAtoms) {
    digest.replace(digest.length() - 2, 2, "");
  }
  digest += "}";

  return digest;
}

string vkqcHypergon::getDigestX() {
  string digest("");
  digest += "hypergon ";
  digest += getName();
  digest += " : ";

  digest += "atoms{";
  slist<vkqcAtom*>::iterator itAtoms;
  bool anyAtoms(false);
  for (itAtoms = _atoms.begin(); itAtoms != _atoms.end(); itAtoms++) {
    anyAtoms = true;
    digest += (*itAtoms)->getName();
    digest += ", ";
  }
  if (anyAtoms) {
    digest.replace(digest.length() - 2, 2, "");
  }
  digest += "}";

  digest += "; ";

  digest += "axes{";
  slist<vkqcAxis*>::iterator itAxes;
  bool anyAxes(false);
  for (itAxes = _axes.begin(); itAxes != _axes.end(); itAxes++) {
    anyAxes = true;
    digest += (*itAxes)->getName();
    digest += ", ";
  }
  if (anyAxes) {
    digest.replace(digest.length() - 2, 2, "");
  }
  digest += "}";

  return digest;
}

string vkqcHypergon::getName() {
  return _name;
}

void vkqcHypergon::setName(string name_) {
  _name = name_;
}
