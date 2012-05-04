/*
 * SimpleParameter.h
 *
 *  Created on: Apr 4, 2012
 *      Author: reza
 */

#ifndef SIMPLEPARAMETER_H_
#define SIMPLEPARAMETER_H_

#include "Parameter.h"
#include "GeneralParameter.h"
#include "STCStepsizeParameter.h"


class SimpleParameter : public Parameter {
public:
	SimpleParameter();
	virtual ~SimpleParameter();
	GeneralParameter general;
	STCStepsizeParameter stepsize;
};

#endif /* SIMPLEPARAMETER_H_ */
