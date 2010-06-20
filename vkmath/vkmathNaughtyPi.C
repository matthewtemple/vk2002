#include "vkmathNaughtyPi.h"

vkmathNaughtyPi::vkmathNaughtyPi() {}

vkmathNaughtyPi::~vkmathNaughtyPi() {}

double vkmathNaughtyPi::circ(double r, int n) {
  double x(4 * pow(2, n) * side(r, n));
  return x;
}

double vkmathNaughtyPi::pi(double r, int n) {
  double x(circ(r, n) / (2 * r));  // circumference / diameter
  return x;
}

double vkmathNaughtyPi::side(double r, int n) {
  double x;
  if (n == 0) {
    x = sqrt(2 * pow(r, 2));
  } else {
    double m(side(r, n - 1));
    x = sqrt(
             pow(m / 2, 2) +
             pow(r - sqrt(pow(r, 2) - pow(m / 2, 2)), 2)
            );
  }
  return x;
}
