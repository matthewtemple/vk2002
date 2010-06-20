#include "vkmobLogable.h"

vkmobLogable::vkmobLogable() {
  _face = vkmobLogDefaultFace;
  _log = 0;
}

vkmobLogable::~vkmobLogable() {}

void vkmobLogable::enter(string entry_, string a_, string b_, string c_,
  string d_) {

  if (_log) {
    _log->enter(entry_, _face, a_, b_, c_, d_);
  }
}

vkmobLogFace vkmobLogable::getFace() {
  return _face;
}

vkmobLog* vkmobLogable::getLog() {
  return _log;
}

void vkmobLogable::setFace(vkmobLogFace face_) {
  _face = face_;
}

void vkmobLogable::setLog(vkmobLog* log_) {
  _log = log_;
}
