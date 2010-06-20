#include "vkcgiMIMEType.h"

string vkcgiGetMIMETypeString(vkcgiMIMEType mime_) {
  string mimetext;
  switch (mime_) {
  case vkcgiMIMETypeTextHtml:
    mimetext = "text/html";
    break;
  case vkcgiMIMETypeUndefined:
    mimetext = "undefined";
    break;
  default:
    mimetext = "undefined";
    break;
  }
  return mimetext;
}
