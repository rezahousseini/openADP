/*
 * STCStepsizeParameter.h
 *
 *  Created on: Apr 4, 2012
 *      Author: reza
 */

#ifndef STCSTEPSIZERPARAMETER_H_
#define STCSTEPSIZERPARAMETER_H_

#include "Parameter.h"


class STCStepsizeParameter : public Parameter {
public:
	STCStepsizeParameter();
	virtual ~STCStepsizeParameter();
	float alpha0;
	float beta;
	float a;
	float b;
};

#endif /* STCSTEPSIZERPARAMETER_H_ */
