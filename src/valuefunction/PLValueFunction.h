/*
 * PLValueFunction.h
 *
 *  Created on: Mar 30, 2012
 *      Author: reza
 */

#ifndef PLVALUEFUNCTION_H_
#define PLVALUEFUNCTION_H_

#include <boost/numeric/ublas/matrix.hpp>

#include "ValueFunction.h"
#include "GeneralParameter.h"

class PLValueFunction : ValueFunction {
public:
	PLValueFunction();
	PLValueFunction(const GeneralParameter& _params);
	~PLValueFunction();
	void update();
private:
	boost::numeric::ublas::vector<float> weights;
	const GeneralParameter& params;
};

#endif /* PLVALUEFUNCTION_H_ */
