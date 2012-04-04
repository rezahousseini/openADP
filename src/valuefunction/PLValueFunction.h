/*
 * PLValueFunction.h
 *
 *  Created on: Mar 30, 2012
 *      Author: reza
 */

#ifndef PLVALUEFUNCTION_H_
#define PLVALUEFUNCTION_H_

#include "../abstract/ValueFunction.h"

class PLValueFunction : ValueFunction {
public:
	PLValueFunction();
	virtual ~PLValueFunction();
	void update();
};

#endif /* PLVALUEFUNCTION_H_ */
