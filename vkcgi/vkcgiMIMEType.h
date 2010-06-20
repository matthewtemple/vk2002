#ifndef vkcgiMIMEType_h
#define vkcgiMIMEType_h

#include <string>

enum vkcgiMIMEType {
  vkcgiMIMETypeUndefined,
  vkcgiMIMETypeTextHtml
};

string vkcgiGetMIMETypeString(vkcgiMIMEType mime_);

#endif
