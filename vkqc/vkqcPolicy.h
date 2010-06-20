#ifndef vkqcPolicy_h
#define vkqcPolicy_h

#include <string>

enum vkqcPolicy {
  vkqcPolicyUndefined,
  vkqcPolicyBuild,
  vkqcPolicyBurn,
  vkqcPolicyMaintain,
  vkqcPolicyNeglect
};

string vkqcGetPolicyName(vkqcPolicy policy_);

#endif
