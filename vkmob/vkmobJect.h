#ifndef vkmobJect_h
#define vkmobJect_h

#include "../vkDef.h"

#include <assert.h>

#ifdef vkDefHaveBitSet
#include <bitset>
#endif

#include <cstdlib>
#include <fstream>
#include <hash_map>
#include <hash_set>
#include <iostream>
#include <list>
#include <math.h>
#include <queue>

#ifdef vkDefHaveRope
#include <rope>
#endif

#include <slist>
#include <string>
#include "../library/libstdc++/ducttape/sstream-2.95.3"
#include <time.h>
#include <sys/time.h>
//#include <valarray>
#include <vector>

class vkmobJect {
public:
  vkmobJect();
  ~vkmobJect();
};

string vkmobPChar2String(char* pchar_);

#endif
