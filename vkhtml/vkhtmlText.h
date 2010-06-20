#ifndef vkhtmlText_h
#define vkhtmlText_h

#include "vkhtmlML.h"

class vkhtmlText : public vkhtmlML {
  string _text;
public:
  vkhtmlText();
  vkhtmlText(string text_);
  ~vkhtmlText();
  virtual string get();
  virtual string getHTML();
  virtual void set(string text_);
};

#endif
