#ifndef vkhtmlML_h
#define vkhtmlML_h

#include "../vkmob/vkmobJect.h"

class vkhtmlText;
class vkmobFuncEqPChar;

class vkhtmlML : public vkmobJect {
  hash_map<char*, char*, hash<char*>, vkmobFuncEqPChar>* _attribs;
  list<vkhtmlML*>* _mls;
  vector<char*>* _newPChars;
  vector<vkhtmlText*>* _newTexts;
  bool _requireEndTag;
  string _tagName;
  void _assureAttribs();
  void _assureMLs();
  void _assureNewPChars();
  void _assureNewTexts();
  char* _newPChar(string string_);
  vkhtmlText* _newText(string string_);
  vkhtmlText* _newTextFile(string fileName_);
protected:
  void setRequireEndTag(bool requireEndTag_);
  void setTagName(string tagName_);
public:
  vkhtmlML();
  virtual ~vkhtmlML();
  void append(string string_);
  void append(vkhtmlML* ml_);
  void append(vkhtmlText* text_);
  void appendFile(string fileName_);
  void clearAttribs();
  string getAttribs();
  virtual string getHTML();
  bool getRequireEndTag();
  string getTagName();
  void insert(string string_);
  void insert(vkhtmlML* ml_);
  void insert(vkhtmlText* text_);
  void insertFile(string fileName_);
  void modifyAttrib(string name_, string value_);
};

ostream& operator<< (ostream& s, vkhtmlML* vkhtmlML_);

#endif
