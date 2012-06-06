/*
 * PLValueFunction.h
 *
 *  Created on: Mar 30, 2012
 *      Author: reza
 */

#ifndef PLVALUEFUNCTION_H_
#define PLVALUEFUNCTION_H_

// #include <boost/numeric/ublas/matrix.hpp>
#include <vector>

#include "ValueFunction.h"
#include "GeneralParameter.h"

class PLValueFunction : ValueFunction {
 public:
	// PLValueFunction();
	PLValueFunction(int scale = 10);
	~PLValueFunction() {};
	void update();
 private:
	std::vector<float> weights;
	// const GeneralParameter& params;
};

#endif /* PLVALUEFUNCTION_H_ */
