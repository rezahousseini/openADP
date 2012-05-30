/*
 * Solver.h
 *
 *  Created on: Mar 7, 2012
 *      Author: reza
 */

#ifndef SOLVER_H_
#define SOLVER_H_

//#include <boost/numeric/ublas/vector.hpp>

#include "GeneralParameter.h"
#include "Stepsize.h"
//#include "Status.h"
#include "PLValueFunction.h"

template<typename T>
class Solver {
public:
	Solver(const GeneralParameter& _params, const Stepsize& _stepsize);
	//virtual const int solve() = 0;
	// virtual const int getStatus();
	// virtual const GeneralParameter& getParams() const;
	virtual ~Solver() {};

// protected:
	// int iter;
	// Status *status;
	Stepsize stepsize;
	const GeneralParameter& params;
	// boost::numeric::ublas::vector<T> valfuncs;
};

template<>
class Solver<PLValueFunction> {
};

#endif /* SOLVER_H_ */
