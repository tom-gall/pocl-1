#include "pocl_cl.h"

CL_API_ENTRY cl_int CL_API_CALL
POname(clRetainSampler)(cl_sampler  sampler ) CL_API_SUFFIX__VERSION_1_0
{
  POCL_RETURN_ERROR_COND((sampler == NULL), CL_INVALID_SAMPLER);
  POCL_RETAIN_OBJECT (sampler);
  return CL_SUCCESS;
}

POsym(clRetainSampler)
