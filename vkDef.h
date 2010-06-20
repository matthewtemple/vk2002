#define vkDefArticulation   // comment to disable all logging

#ifdef vkDefArticulation
#define vkDefArticulationX  // comment to disable extended logging
#define vkDefArticulationY  // ...further extended
#define vkDefArticulationZ  // ...further extended
#endif

#define vkDefHaveBitset
#define vkDefHaveRope

//#define vkDefLinux
#define vkDefOSX

#ifdef vkDefOSX
#undef vkDefHaveBitset
#undef vkDefHaveRope
#endif
