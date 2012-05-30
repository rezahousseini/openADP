/*
 * StepsizeParameter.h
 *
 *  Created on: Apr 4, 2012
 *      Author: reza
 */

#ifndef STEPSIZERPARAMETER_H_
#define STEPSIZERPARAMETER_H_

#include "Parameter.h"


class StepsizeParameter : public Parameter {
public:
	StepsizeParameter();
	virtual ~StepsizeParameter();
	float alpha0;
	float beta;
	float a;
	float b;
};

#endif /* STEPSIZERPARAMETER_H_ */
