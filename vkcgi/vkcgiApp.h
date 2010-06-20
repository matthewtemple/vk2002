#ifndef vkcgiApp_h
#define vkcgiApp_h

#include "vkcgiMIMEType.h"
#include "../vkapp/vkappApp.h"

class vkcgiApp : public vkappApp {
  string _atom;
  string _style;
  string _title;
  void dispatch();
  string getBODY(string HTML_ = "");
  string getHEAD(string HTML_ = "");
  string getHTTPHeader(vkcgiMIMEType mime_ = vkcgiMIMETypeTextHtml);
  string getPage(string HTML_ = "");
  string getResource(vkcgiMIMEType mime_, string file_);
  string getResponse(string HTML_ = "");
  string getStylesheetLINK();
  string getTITLE();
  string getURLParam(string name_, string default_);
  void initD();
  void loadD();
  void readCookies();
protected:
  bool containsImage(string html_);  // make this a feature of vkhtml?
  string getFile(vkcgiMIMEType mime_, string name_);
  virtual void readURLParams();
  virtual void processText();
public:
  vkcgiApp();
  virtual ~vkcgiApp();
  string getAtom();
  virtual string getContent(string HTML_ = "") = 0;
  string getStyle();
  string getTitle();
  void setAtom(string atom_);
  void setStyle(string style_);
  void setTitle(string title_);
  void go();
};

#endif
