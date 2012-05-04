#include "Stepsize.h"

Stepsize::Stepsize(const Parameter &_params) : alpha(1), params(_params) {
	iteration = 0;
}

void Stepsize::update(void) {
	iteration = iteration+1;
}

float Stepsize::get(void) {
	return alpha;
}

Stepsize::~Stepsize() {
	// TODO Auto-generated destructor stub
}
