/*
 * Solver.h
 *
 *  Created on: Mar 7, 2012
 *      Author: reza
 */

#ifndef SOLVER_H_
#define SOLVER_H_

#include "GeneralParameter.h"
#include "Stepsize.h"
#include "Status.h"

class Solver {
public:
	Solver(const GeneralParameter& _params, const Stepsize& _stepsize) : 
		params(_params), stepsize(_stepsize) {init();};
	virtual const int solve() = 0;
	virtual const int getStatus();
	virtual const GeneralParameter & getParams();
	virtual ~Solver();

protected:
	virtual void init(void) {};
	int iter;
	Status *status;
	Stepsize stepsize;
	const GeneralParameter& params;
};

#endif /* SOLVER_H_ */
