#include "vkhtmlML.h"
#include "vkhtmlText.h"
#include "../vkmob/vkmobFuncEqPChar.h"

vkhtmlML::vkhtmlML() {
  _attribs = 0;
  _mls = 0;
  _newPChars = 0;
  _newTexts = 0;
  _requireEndTag = true;
  _tagName = "";
}

vkhtmlML::~vkhtmlML() {
  if (_attribs) {
    delete _attribs;
  }
  if (_mls) {
    delete _mls;
  }
  if (_newTexts) {
    vector<vkhtmlText*>::iterator it;
    for (it = _newTexts->begin(); it != _newTexts->end(); it++) {
      delete *it;
    }
  }
  if (_newPChars) {
    vector<char*>::iterator it;
    for (it = _newPChars->begin(); it != _newPChars->end(); it++) {
      delete *it;
    }
  }
}

void vkhtmlML::_assureAttribs() {
  if (!_attribs) {
    _attribs = new hash_map<char*, char*, hash<char*>, vkmobFuncEqPChar>;
  }
}

void vkhtmlML::_assureMLs() {
  if (!_mls) {
    _mls = new list<vkhtmlML*>;
  }
}

void vkhtmlML::_assureNewPChars() {
  if (!_newPChars) {
    _newPChars = new vector<char*>;
  }
}

void vkhtmlML::_assureNewTexts() {
  if (!_newTexts) {
    _newTexts = new vector<vkhtmlText*>;
  }
}

char* vkhtmlML::_newPChar(string string_) {
  _assureNewPChars();
  char* pchar = new char[string_.length() + 1];
  _newPChars->insert(_newPChars->end(), pchar);
  string_.copy(pchar, string::npos);
  pchar[string_.length()] = 0;
  return pchar;
}

vkhtmlText* vkhtmlML::_newText(string string_) {
  _assureNewTexts();
  vkhtmlText* text = new vkhtmlText(string_);
  _newTexts->insert(_newTexts->end(), text);
  return text;
}

vkhtmlText* vkhtmlML::_newTextFile(string fileName_) {
  _assureNewTexts();
  string fileContents("");
  ifstream file(fileName_.c_str());
  if (file) {
    char ch;
    while (file.get(ch)) {
      fileContents += ch;
    }
  }
  vkhtmlText* text = new vkhtmlText(fileContents);
  _newTexts->insert(_newTexts->end(), text);
  return text;
}

void vkhtmlML::append(string string_) {
  if (string_ != "") {
    vkhtmlText* text = _newText(string_);
    append(text);
  }
}

void vkhtmlML::append(vkhtmlML* ml_) {
  _assureMLs();
  _mls->insert(_mls->end(), ml_);
}

void vkhtmlML::append(vkhtmlText* text_) {
  _assureMLs();
  _mls->insert(_mls->end(), text_);
}

void vkhtmlML::appendFile(string fileName_) {
  vkhtmlText* text = _newTextFile(fileName_);
  _mls->insert(_mls->begin(), text);
}

void vkhtmlML::clearAttribs() {
  _attribs->clear();
}

string vkhtmlML::getAttribs() {
  string attribs("");
  if (_attribs) {
    hash_map<char*, char*, hash<char*>, vkmobFuncEqPChar>::iterator it;
    for (it = _attribs->begin(); it != _attribs->end(); it++) {
      attribs += " ";
      attribs += it->first;
      attribs += "=\"";
      attribs += it->second;
      attribs += "\"";
    }
  }
  return attribs;
}

string vkhtmlML::getHTML() {
  string ml("");
  ml += "<";
  ml += _tagName;
  ml += getAttribs();
  ml += ">";
  if (_mls) {
    list<vkhtmlML*>::iterator it;
    for (it = _mls->begin(); it != _mls->end(); it++) {
      ml += (*it)->getHTML();
    }
  }
  if (_requireEndTag) {
    ml += "</";
    ml += _tagName;
    ml += ">";
  }
  return ml;
}

bool vkhtmlML::getRequireEndTag() {
  return _requireEndTag;
}

string vkhtmlML::getTagName() {
  return _tagName;
}

void vkhtmlML::insert(string string_) {
  if (string_ != "") {
    vkhtmlText* text = _newText(string_);
    insert(text);
  }
}

void vkhtmlML::insert(vkhtmlML* ml_) {
  _assureMLs();
  _mls->insert(_mls->begin(), ml_);
}

void vkhtmlML::insert(vkhtmlText* text_) {
  _assureMLs();

  _mls->insert(_mls->begin(), text_);
}

void vkhtmlML::insertFile(string fileName_) {
  vkhtmlText* text = _newTextFile(fileName_);
  _mls->insert(_mls->begin(), text);
}

void vkhtmlML::modifyAttrib(string name_, string value_) {
  _assureAttribs();
  char* name = _newPChar(name_);
  char* value = _newPChar(value_);
  (*_attribs)[name] = value;
}

void vkhtmlML::setRequireEndTag(bool requireEndTag_) {
  _requireEndTag = requireEndTag_;
}

void vkhtmlML::setTagName(string tagName_) {
  _tagName = tagName_;
}

ostream& operator<< (ostream& s, vkhtmlML* vkhtmlML_) {
  return s << vkhtmlML_->getHTML();
}
