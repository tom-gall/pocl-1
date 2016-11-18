#include "pocl_cl.h"
extern CL_API_ENTRY cl_int CL_API_CALL
POname(clReleaseSampler)(cl_sampler sampler)
CL_API_SUFFIX__VERSION_1_0
{
  int new_refcount;

  POCL_RETURN_ERROR_COND((sampler == NULL), CL_INVALID_SAMPLER);
  POCL_RELEASE_OBJECT (sampler, new_refcount);

  if (new_refcount == 0)
    POCL_MEM_FREE(sampler);
  
  return CL_SUCCESS;
}
POsym(clReleaseSampler)
