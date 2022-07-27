/* Include files */

#include "Medical3_cgxe.h"
#include "m_M840gKcpSYaimk92VkNFZD.h"
#include "m_vvvSErOHZga7mqpIKwA4cF.h"
#include "m_E2HGlAwvpVWsN6Gi4DeuAD.h"
#include "m_fwk72YF0RlyFfLPfJ6qj3E.h"

unsigned int cgxe_Medical3_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 422297439 &&
      ssGetChecksum1(S) == 3261324001 &&
      ssGetChecksum2(S) == 462684496 &&
      ssGetChecksum3(S) == 1542195944) {
    method_dispatcher_M840gKcpSYaimk92VkNFZD(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 665599035 &&
      ssGetChecksum1(S) == 476093358 &&
      ssGetChecksum2(S) == 420912241 &&
      ssGetChecksum3(S) == 2340152682) {
    method_dispatcher_vvvSErOHZga7mqpIKwA4cF(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1142964993 &&
      ssGetChecksum1(S) == 1650078575 &&
      ssGetChecksum2(S) == 2889647171 &&
      ssGetChecksum3(S) == 1323483767) {
    method_dispatcher_E2HGlAwvpVWsN6Gi4DeuAD(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1390266224 &&
      ssGetChecksum1(S) == 1640015936 &&
      ssGetChecksum2(S) == 2079457627 &&
      ssGetChecksum3(S) == 3391124491) {
    method_dispatcher_fwk72YF0RlyFfLPfJ6qj3E(S, method, data);
    return 1;
  }

  return 0;
}
