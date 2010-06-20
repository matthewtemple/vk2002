#ifndef vkjackMimic_h
#define vkjackMimic_h

#include "../vkmob/vkmobLogable.h"
#include "vkjackHJ.h"

struct vkjackMimicAttempt {
  int brainDepth;
  double fitness;
  vkjackHJ<int> hj;
};

class vkjackMimic : public vkmobLogable {
  vector<vkjackMimicAttempt> _attempts;
  vkjackMimicAttempt _bestAttempt;
  double _maxExpectedFitness;
  vector<vkjackMimicAttempt> _oldAttempts;
  vector< vector<int> > _seqA;
  vector< vector<int> > _seqB;
  int _seqLength;
  int _seqWidth;
  void setBestAttempt(int brainDepth_, double fitness_, vkjackHJ<int> hj_);
  void storeAttempt(int brainDepth_, double fitness_, vkjackHJ<int> hj_);
public:
  vkjackMimic(vector< vector<int> > seqA_, vector< vector<int> > seqB_,
    vkmobLog* log_ = 0);
  virtual ~vkjackMimic();
  double calcFitness(vkjackHJ<int> hj_);
  virtual double fuzzyEqual(vector<int> a_, vector<int> b_);
  vector<vkjackMimicAttempt> getAttempts();
  vkjackMimicAttempt getBestAttempt();
  double getMaxExpectedFitness();
  void mimic(int iterations_ = 1024, int minBrainDepth_ = 1,
    int maxBrainDepth_ = 64, double goal_ = 0.51);
  void setMaxExpectedFitness(double fitness_);
};

#endif
