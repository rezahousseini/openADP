#include "SGAStepsize.h"
#include <math.h>

SGAStepsize::SGAStepsize(float _alpha0, float _a, float _b, float _c) : Stepsize(_alpha0), a(_a), b(_b), c(_c) {
}

void SGAStepsize::update(void) {
	iteration = iteration+1;
}
