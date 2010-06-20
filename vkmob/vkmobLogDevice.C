#include "vkmobLogDevice.h"
#include "vkmobTime.h"

vkmobLogDevice::vkmobLogDevice() {
  _addTimestamp = true;
  _entrySeparator = "\n";
  //_outputLineLength = vkmobLogDefaultOutputLineLength;
  _performSubstitutions = true;
  _timeSeparator = " ";
  _timeFormat = vkmobTimeFormatSecondsMilliseconds;
  //_splitLongLines = true;
}

vkmobLogDevice::~vkmobLogDevice() {}

void vkmobLogDevice::enter(string entry_,
  vkmobLogMask face_ = vkmobLogDefaultFace, string a_, string b_,
  string c_, string d_) {}

bool vkmobLogDevice::getAddTimestamp() {
  return _addTimestamp;
}

string vkmobLogDevice::getEntrySeparator() {
  return _entrySeparator;
}

bool vkmobLogDevice::getPerformSubstitutions() {
  return _performSubstitutions;
}

vkmobTimeFormat vkmobLogDevice::getTimeFormat() {
  return _timeFormat;
}

//int vkmobLogDevice::getOutputLineLength() {
//  return _outputLineLength;
//}

//bool vkmobLogDevice::getSplitLongLines() {
//  return _splitLongLines;
//}

string vkmobLogDevice::processEntry(string entry_, string a_, string b_,
  string c_, string d_) {

  string processedEntry("");
  if (_addTimestamp) {
    vkmobTime* mobTime = vkmobNewPTime(_timeFormat);
    processedEntry += mobTime->getTime();
    delete mobTime;
    processedEntry += _timeSeparator;
  }
  processedEntry += entry_;
  processedEntry += _entrySeparator;
  if (_performSubstitutions) {
    static const string tag_a("{A}");
    static const string tag_b("{B}");
    static const string tag_c("{C}");
    static const string tag_d("{D}");
    int tag_at = processedEntry.find(tag_a);
    while (tag_at != -1) {
      processedEntry.replace(tag_at, 3, a_);
      tag_at = processedEntry.find(tag_a);
    }
    tag_at = processedEntry.find(tag_b);
    while (tag_at != -1) {
      processedEntry.replace(tag_at, 3, b_);
      tag_at = processedEntry.find(tag_b);
    }
    tag_at = processedEntry.find(tag_c);
    while (tag_at != -1) {
      processedEntry.replace(tag_at, 3, c_);
      tag_at = processedEntry.find(tag_c);
    }
    tag_at = processedEntry.find(tag_d);
    while (tag_at != -1) {
      processedEntry.replace(tag_at, 3, d_);
      tag_at = processedEntry.find(tag_d);
    }
  }
  return processedEntry;
}

void vkmobLogDevice::setAddTimestamp(bool addTimestamp_) {
  _addTimestamp = addTimestamp_;
}

void vkmobLogDevice::setEntrySeparator(string entrySeparator_) {
  _entrySeparator = entrySeparator_;
}

void vkmobLogDevice::setPerformSubstitutions(
  bool performSubstitutions_) {

  _performSubstitutions = performSubstitutions_;
}

void vkmobLogDevice::setTimeFormat(vkmobTimeFormat timeFormat_) {
  _timeFormat = timeFormat_;
}

//void vkmobLogDevice::setOutputLineLength(int outputLineLength_) {
//  _outputLineLength = outputLineLength_;
//}

//void vkmobLogDevice::setSplitLongLines(bool splitLongLines_) {
//  _splitLongLines = splitLongLines_;
//}
