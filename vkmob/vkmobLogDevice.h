#ifndef vkmobLogDevice_h
#define vkmobLogDevice_h

#include "vkmobLog.h"

class vkmobLogDevice : public vkmobLog {
  bool _addTimestamp;
  string _entrySeparator;
  //int _outputLineLength;
  bool _performSubstitutions;
  vkmobTimeFormat _timeFormat;
  string _timeSeparator;
  //bool _splitLongLines;
protected:
  string processEntry(string entry_, string a_ = "", string b_ = "",
    string c_ = "", string d_ = "");
public:
  vkmobLogDevice();
  virtual ~vkmobLogDevice();
  virtual void enter(string entry_,
    vkmobLogMask face_ = vkmobLogDefaultFace, string a_ = "",
    string b_ = "", string c_ = "", string d_ = "");
  bool getAddTimestamp();
  string getEntrySeparator();
  bool getPerformSubstitutions();
  vkmobTimeFormat getTimeFormat();
  //int getOutputLineLength();
  //bool getSplitLongLines();
  void setAddTimestamp(bool addTimestamp_);
  void setEntrySeparator(string entrySeparator_);
  void setPerformSubstitutions(bool performSubstitutions_);
  void setTimeFormat(vkmobTimeFormat timeFormat_);
  //void setOutputLineLength(int outputLineLength_);
  //void setSplitLongLines(bool splitLongLines_);
};

#endif
