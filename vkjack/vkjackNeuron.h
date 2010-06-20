#ifndef vkjackNeuron_h
#define vkjackNeuron_h

struct vkjackNeuron {
  int pA;
  int pB;
  int op;
  int value;
  int stale;
  int age;
};

#endif
