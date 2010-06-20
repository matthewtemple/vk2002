#include "vkcgiApp.h"
#include "../vkhtml/vkhtml.h"
#include "vkcgiMIMEType.h"

vkcgiApp::vkcgiApp() {
  _atom = "";
  _style = "";
  _title = "";
}

vkcgiApp::~vkcgiApp() {}

bool vkcgiApp::containsImage(string html_) {}

void vkcgiApp::dispatch() {}

string vkcgiApp::getAtom() {
  return _atom;
}

string vkcgiApp::getFile(vkcgiMIMEType mime_, string name_) {
  //open file
  if (mime_ == vkcgiMIMETypeTextHtml) {
    // processText;
  }
}

string vkcgiApp::getHEAD(string HTML_) {
  vkhtmlHEAD head;
  head.append(getTITLE());
  head.append(getStylesheetLINK());
  return head.getHTML();
}

string vkcgiApp::getBODY(string HTML_) {
  vkhtmlBODY body;
  body.append(getContent());
  return body.getHTML();
}

string vkcgiApp::getHTTPHeader(vkcgiMIMEType mime_) {
  ostringstream header;
  header << "Content-type: " << vkcgiGetMIMETypeString(mime_) << endl << endl;
  return header.str();
}

string vkcgiApp::getPage(string HTML_) {
  ostringstream page;
  page << getHEAD() << getBODY();
  return page.str();
}

string vkcgiApp::getResource(vkcgiMIMEType mime_, string file_) {
  string resString;
  ostringstream resource;
  resource << getHTTPHeader(mime_);
  resource << getFile(mime_, file_);
  resString = resource.str();
  return resString;
}

string vkcgiApp::getResponse(string HTML_) {
  ostringstream response;
  // make this do different things depending on member vars
  //   not always returning getPage(), for example
  response << getHTTPHeader() << getPage();
  return response.str();
}

string vkcgiApp::getStyle() {
  return _style;
}

string vkcgiApp::getStylesheetLINK() {
  string styleLink;
  if (_style != "") {
    ostringstream stylePath;
    stylePath << _atom << "/style/" << _style << ".css";
    vkhtmlLINK linkTag;
    linkTag.modifyAttrib("HREF", stylePath.str());
    linkTag.modifyAttrib("REL", "stylesheet");
    linkTag.modifyAttrib("TYPE", "text/css");
    styleLink = linkTag.getHTML();
  }
  return styleLink;
}

string vkcgiApp::getTitle() {
  return _title;
}

string vkcgiApp::getTITLE() {
  vkhtmlTITLE tag;
  tag.append(_title);
  return tag.getHTML();
}

string vkcgiApp::getURLParam(string name_, string default_) {}

void vkcgiApp::go() {
  cout << getPage() << endl;
}

void vkcgiApp::initD() {}

void vkcgiApp::loadD() {}

void vkcgiApp::processText() {}

void vkcgiApp::readCookies() {}

void vkcgiApp::readURLParams() {}

void vkcgiApp::setAtom(string atom_) {
  _atom = atom_;
}

void vkcgiApp::setStyle(string style_) {
  _style = style_;
}

void vkcgiApp::setTitle(string title_) {
  _title = title_;
}
