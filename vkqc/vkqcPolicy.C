#include "vkqcPolicy.h"

string vkqcGetPolicyName(vkqcPolicy policy_) {
  string policyName("");
  switch (policy_) {
  case vkqcPolicyBuild:
    policyName = "build";
    break;
  case vkqcPolicyBurn:
    policyName = "burn";
    break;
  case vkqcPolicyMaintain:
    policyName = "maintain";
    break;
  case vkqcPolicyNeglect:
    policyName = "neglect";
    break;
  case vkqcPolicyUndefined:
    policyName = "undefined";
    break;
  default:
    policyName = "undefined";
    break;
  }
  return policyName;
}
