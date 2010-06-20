#include "vkmobLogDeviceFile.h"

vkmobLogDeviceFile::vkmobLogDeviceFile() {
  _file = 0;
  _fileName = "";
}

vkmobLogDeviceFile::vkmobLogDeviceFile(string fileName_) {
  _fileName = fileName_;
  _file = new ofstream(_fileName.c_str());
}

vkmobLogDeviceFile::~vkmobLogDeviceFile() {
  if (_file) {
    _file->close();
    delete _file;
  }
}

void vkmobLogDeviceFile::enter(string entry_,
  vkmobLogMask face_ = vkmobLogDefaultFace, string a_, string b_, string c_,
  string d_) {

  if (_file) {
    (*_file) << processEntry(entry_, a_, b_, c_, d_);
  }
}

string vkmobLogDeviceFile::getFileName() {
  return _fileName;
}

void vkmobLogDeviceFile::setFileName(string fileName_) {
  if (_fileName != fileName_) {
    _fileName = fileName_;
    if (_file) {
      delete _file;
    }
    _file = new ofstream(_fileName.c_str());
  }
}
