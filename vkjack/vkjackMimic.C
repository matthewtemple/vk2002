#include "vkjackMimic.h"
#include "../vkmob/vkmobRandom.h"
#include "vkjackHJ.h"

vkjackMimic::vkjackMimic(vector< vector<int> > seqA_,
    vector< vector<int> > seqB_, vkmobLog* log_) {
  setLog(log_);
  _attempts.clear();
  _bestAttempt.fitness = 0;
  _maxExpectedFitness = 0.9;
  _oldAttempts.clear();
  _seqA = seqA_;
  _seqB = seqB_;
  // add range checking for these:
  _seqLength = _seqA.size();
  _seqWidth = _seqA.front().size();
}

vkjackMimic::~vkjackMimic() {}

double vkjackMimic::calcFitness(vkjackHJ<int> hj_) {
  //vector< vector<int> >::iterator it;
  double fitnessSum(0);
  for (int f = 0; f <= (_seqLength - 1); f++) {
    hj_.push(_seqA[f]);
    hj_.pulse();
    vector<int> hjOut = hj_.pop();
    double fuzzEq(fuzzyEqual(hjOut, _seqB[f]));
    fitnessSum += fuzzEq;
  }
  double fitness = (fitnessSum / _seqLength);
  return fitness;
}

double vkjackMimic::fuzzyEqual(vector<int> a_, vector<int> b_) {
  int same(0);
  for (int j = 0; j <= (_seqWidth - 1); j++) {
    if (a_[j] == b_[j]) {
      same++;
    }
  }
  //return double(a_ == b_);
  return double(same) / _seqWidth;
}

vector<vkjackMimicAttempt> vkjackMimic::getAttempts() {
  return _attempts;
}

vkjackMimicAttempt vkjackMimic::getBestAttempt() {
  return _bestAttempt;
}

double vkjackMimic::getMaxExpectedFitness() {
  return _maxExpectedFitness;
}

void vkjackMimic::mimic(int iterations_, int minBrainDepth_,
  int maxBrainDepth_, double goal_) {

  int brainDepth(minBrainDepth_);
  int lowestNewBestDepth(minBrainDepth_);
  int higestNewBestDepth(minBrainDepth_);
  bool reachedGoal(false);
  _attempts.clear();
  _attempts.resize(maxBrainDepth_);

  ostringstream ss;
  ss << "trying to beat "; ss.precision(10);
  ss << goal_ << " within depth {" << minBrainDepth_ << "..."
    << maxBrainDepth_ << "}";
  enter(ss.str());

  bool hitMax(false);
  while ((brainDepth <= maxBrainDepth_) && (!hitMax)) {
    vkjackHJ<int> hj(_seqWidth, brainDepth);
    bool loadedOldHJ(false);
    bool depthReachedGoal(false);
    if (brainDepth <= _oldAttempts.size()) {
      loadedOldHJ = true;
      hj = _oldAttempts[brainDepth - 1].hj;
      hj.setDynamic(true);
    }

    ss.str("");
    ss.width(4);  ss << brainDepth << " ";
    if (loadedOldHJ) {
      ss << "[resume] ";
    }

    int eachIter = 0;
    while ((!depthReachedGoal) && (eachIter <= (iterations_ - 1))) {
      vkmobRandom* mobRand(vkmobRandom::instance());
      int j = mobRand->randomLong() % _seqLength;
      hj.push(_seqA[j]);
      hj.pulse();
      hj.pop();
      double fitness(calcFitness(hj));
      if (fitness > goal_) {
        ss << "locked hyperjack "; ss.precision(10); ss << fitness;
        ss << " after";
        depthReachedGoal = true;
        if (!reachedGoal) {
          lowestNewBestDepth = brainDepth;
        }
        higestNewBestDepth = brainDepth;
        reachedGoal = true;
        hj.setDynamic(false);
        storeAttempt(brainDepth, fitness, hj);
        if (fitness >= _bestAttempt.fitness) {
          setBestAttempt(brainDepth, fitness, hj);
        }
        if (fitness >= _maxExpectedFitness) {
          hitMax = true;
        }
      } else {
        hj.setBoredomThreshhold(int(fitness * 32));
      }
      eachIter++;
    }
    if (!depthReachedGoal) {
      ss << "exhausted";
      double fitness(calcFitness(hj));
      storeAttempt(brainDepth, fitness, hj);
    }
    ss << " " << eachIter << " iterations";
    enter(ss.str());
    //brainDepth++;
    brainDepth = brainDepth * 2;
  }

  if ((reachedGoal) && (_bestAttempt.fitness < _maxExpectedFitness)) {
    ss.str("");
    ss << "found new best " << _bestAttempt.fitness
      << " at depth " << _bestAttempt.brainDepth;
    enter(ss.str());
    _oldAttempts.clear();
    _oldAttempts = _attempts;
    double newGoal = _bestAttempt.fitness;
    //newBrainDepth = _bestAttempt.brainDepth + 1;
    //int newBrainDepth = _bestAttempt.brainDepth * 2;
    int newMinBrainDepth(lowestNewBestDepth);
    if (lowestNewBestDepth >= 2) {
      newMinBrainDepth = int(lowestNewBestDepth / 2);
    }
    int newMaxBrainDepth = higestNewBestDepth * 2;
    mimic(iterations_, newMinBrainDepth, newMaxBrainDepth, newGoal);
  } else {
    if (_bestAttempt.fitness >= _maxExpectedFitness) {
      ss.str("");
      ss << "found new best " << _bestAttempt.fitness
        << " at depth " << _bestAttempt.brainDepth;
      enter(ss.str());
      ss.str("");
      ss << "reached or exceeded maximum expected fitness";
      enter(ss.str());
      ss.str("");
      ss << "overall best " << _bestAttempt.fitness;
      enter(ss.str());
    }
    if (!reachedGoal) {
      ss.str("");
      ss << "exhausted";
      enter(ss.str());
      ss.str("");
      ss << "overall best " << _bestAttempt.fitness;
      enter(ss.str());
    }
  }
}

void vkjackMimic::setBestAttempt(int brainDepth_, double fitness_,
  vkjackHJ<int> hj_) {

  _bestAttempt.brainDepth = brainDepth_;
  _bestAttempt.fitness = fitness_;
  _bestAttempt.hj = hj_;
}

void vkjackMimic::setMaxExpectedFitness(double fitness_) {
  _maxExpectedFitness = fitness_;
}

void vkjackMimic::storeAttempt(int brainDepth_, double fitness_,
  vkjackHJ<int> hj_) {

  vkjackMimicAttempt attempt;
  attempt.brainDepth = brainDepth_;
  attempt.fitness = fitness_;
  attempt.hj = hj_;
  _attempts[brainDepth_ - 1] = attempt;
}
