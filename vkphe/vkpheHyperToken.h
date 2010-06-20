#ifndef vkpheHyperToken_h
#define vkpheHyperToken_h

#include "../vkmob/vkmobJect.h"

template<class T> class vkpheHyperToken : public vkmobJect {
  vector<T> _data;
  int _width;
public:
  vkpheHyperToken();
  ~vkpheHyperToken();
  void append(T element_);
  string getAsString();
  int getWidth();
  void setWidth(int width_);
  bool operator== (vkpheHyperToken token_);
};

template<class T> vkpheHyperToken<T>::vkpheHyperToken() {}

template<class T> vkpheHyperToken<T>::~vkpheHyperToken() {}

template<class T> void vkpheHyperToken<T>::append(T element_) {
  _data.insert(_data.end(), element_);
}

template<class T> string vkpheHyperToken<T>::getAsString() {
  ostringstream str;
  vector<T>::iterator it;
  for (it = _data.begin(); it != _data.end(); it++) {
    str << *it;
  }
  return str.str();
}

template<class T> int vkpheHyperToken<T>::getWidth() {
  return _width;
}

template<class T> void vkpheHyperToken<T>::setWidth(int width_) {
  _width = width_;
}

template<class T> bool vkpheHyperToken<T>::operator== (vkpheHyperToken token_) {
  bool equal(true);
  if (_data.size() != token_._data.size()) {
    equal = false;
  } else {
    vector<T>::iterator ita;
    vector<T>::iterator itb(token_._data.begin());
    for (ita = _data.begin(); ita != _data.end(); ita++) {
      if ((*ita) != (*itb)) {
        equal = false;
      }
      itb++;
    }
  }
  return equal;
}

#endif
