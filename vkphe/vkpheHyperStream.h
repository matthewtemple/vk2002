#ifndef vkpheHyperStream_h
#define vkpheHyperStream_h

#include "../vkmob/vkmobJect.h"
#include "vkpheHyperToken.h"

template<class T> class vkpheHyperStream : public vkmobJect {
  vector< vkpheHyperToken<T> > _stream;
public:
  vkpheHyperStream();
  ~vkpheHyperStream();
  vector< vkpheHyperToken<T> > get();
  void set(string stream_);
};

#endif
