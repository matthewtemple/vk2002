#ifndef vkmobLogConsts_h
#define vkmobLogConsts_h

const size_t vkmobLogMaskSize(32);

#ifdef vkDefHaveBitset
typedef bitset<vkmobLogMaskSize> vkmobLogMask;
#else
typedef string vkmobLogMask;
#endif

typedef vkmobLogMask vkmobLogFace;
const vkmobLogMask
  vkmobLogMaskAll(string("11111111111111111111111111111111"));
const vkmobLogMask
  vkmobLogMaskNone(string("00000000000000000000000000000000"));
const vkmobLogMask
  vkmobLogDefaultFace(string("11111111111111111111111111111111"));
const vkmobLogMask
  vkmobLogDefaultMask(string("11111111111111111111111111111111"));
//const int vkmobLogDefaultOutputLineLength(80);

#endif
