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
#include "SimpleParameter.h"
#include "Stepsize.h"
#include "STCStepsize.h"
//#include "Status.h"
#include "PLValueFunction.h"

template<typename T1, typename T2>
class Solver {
public:
	Solver(const SimpleParameter& _params);
	//virtual const int solve() = 0;
	// virtual const int getStatus();
	// virtual const GeneralParameter& getParams() const;
	virtual ~Solver() {};

protected:
	// int iter;
	// Status *status;
	T1 valfunc;
	T2 stepsize;
	const GeneralParameter& gparams;
	const StepsizeParameter& sparams;
	// boost::numeric::ublas::vector<T> valfuncs;
};

#endif /* SOLVER_H_ */
