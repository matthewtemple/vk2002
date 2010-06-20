#include "vkmobTimeHoursMinutesSeconds.h"

vkmobTimeHoursMinutesSeconds::vkmobTimeHoursMinutesSeconds() {}

vkmobTimeHoursMinutesSeconds::~vkmobTimeHoursMinutesSeconds() {}

void vkmobTimeHoursMinutesSeconds::format() {
  ostringstream s;
  s << ((tv.tv_sec % (24 * 3600)) / 3600) << separator << ((tv.tv_sec % 3600) / 60) << separator << (tv.tv_sec % 60);
  formatted = s.str();
}
