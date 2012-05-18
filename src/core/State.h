/*
 * State.h
 *
 *  Created on: Mar 22, 2012
 *      Author: reza
 */

#ifndef STATE_H_
#define STATE_H_

#include "Resource.h"
#include "ValueFunction.h"

class State {
public:
	State();
	State(Resource &_res, ValueFunction &_valfunc);
	virtual ~State();

	Resource res;
	ValueFunction valfunc;
};

#endif /* STATE_H_ */
