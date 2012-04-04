/*
 * Solver.h
 *
 *  Created on: Mar 7, 2012
 *      Author: reza
 */

#ifndef SOLVER_H_
#define SOLVER_H_

#include "Parameter.h"

class Status;

class Solver {
public:
	Solver(const Parameter &_params) : params(_params) {};

	virtual int solve() = 0;
	virtual int getStatus();
	virtual const Parameter & getParams();
	virtual ~Solver();

protected:
	int iter;
	Status *status;
	const Parameter &params;
};

#endif /* SOLVER_H_ */
