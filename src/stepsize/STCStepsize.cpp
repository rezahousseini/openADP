#include "STCStepsize.h"
#include <math.h>

STCStepsize::STCStepsize(const STCStepsizeParameter &_params) : 
 Stepsize(_params), params(_params) {
	 alpha = params.alpha0;
}

void STCStepsize::update(void) {
	iteration = iteration+1;
	alpha = params.alpha0*(params.b/iteration+params.a)/(params.b/iteration+params.a+pow(iteration, params.beta));
}
