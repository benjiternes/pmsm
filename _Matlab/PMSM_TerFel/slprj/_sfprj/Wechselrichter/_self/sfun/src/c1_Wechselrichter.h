#ifndef __c1_Wechselrichter_h__
#define __c1_Wechselrichter_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc1_WechselrichterInstanceStruct
#define typedef_SFc1_WechselrichterInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c1_sfEvent;
  uint8_T c1_tp_Z1;
  uint8_T c1_tp_Z2;
  uint8_T c1_tp_Z3;
  uint8_T c1_tp_Z4;
  uint8_T c1_tp_Z5;
  uint8_T c1_tp_Z6;
  boolean_T c1_isStable;
  uint8_T c1_is_active_c1_Wechselrichter;
  uint8_T c1_is_c1_Wechselrichter;
  uint8_T c1_doSetSimStateSideEffects;
  const mxArray *c1_setSimStateSideEffectsInfo;
} SFc1_WechselrichterInstanceStruct;

#endif                                 /*typedef_SFc1_WechselrichterInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_Wechselrichter_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c1_Wechselrichter_get_check_sum(mxArray *plhs[]);
extern void c1_Wechselrichter_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
