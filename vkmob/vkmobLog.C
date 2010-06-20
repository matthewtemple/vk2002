#include "vkmobLog.h"

vkmobLog::vkmobLog(vkmobLogMask mask_ = vkmobLogDefaultMask) {
  _logs = 0;
  _mask = mask_;
}

vkmobLog::~vkmobLog() {
  if (_logs) {
    delete _logs;
  }
}

void vkmobLog::attachLog(vkmobLog* log_) {
  if (!_logs) {
    _logs = new vector<vkmobLog*>;
  }
  _logs->insert(_logs->end(), log_);
  log_->setMask(_mask);
}

void vkmobLog::detachLogs() {
  _logs->erase(_logs->begin(), _logs->end());
}

void vkmobLog::enter(string entry_,
  vkmobLogMask face_ = vkmobLogDefaultFace, string a_, string b_, string c_,
  string d_) {

  if (_logs) {
    size_t logPos(0);
    vector<vkmobLog*>::iterator it;
    for (it = _logs->begin(); it != _logs->end(); it++) {
      #ifdef vkDefHaveBitset
      bool faceBit(face_[logPos]);
      bool maskBit(_mask[logPos]);
      if (faceBit && maskBit) {
      #else
      char faceBit(face_[logPos]);
      char maskBit(_mask[logPos]);
      if ((faceBit == '1') && (maskBit == '1')) {
      #endif
        (*it)->enter(entry_, face_, a_, b_, c_, d_);
      }
      logPos++;
    }
  }
}

vkmobLogMask vkmobLog::getMask() {
  return _mask;
}

void vkmobLog::setMask(vkmobLogMask mask_) {
  _mask = mask_;
}
