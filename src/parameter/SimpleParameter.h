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
#include "StepsizeParameter.h"

class SimpleParameter : public Parameter {
public:
	SimpleParameter();
	virtual ~SimpleParameter();
	GeneralParameter general;
	StepsizeParameter stepsize;
};

#endif /* SIMPLEPARAMETER_H_ */
