/*
 * Solver.h
 *
 *  Created on: Mar 7, 2012
 *      Author: reza
 */

#ifndef SOLVER_H_
#define SOLVER_H_

#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include <vector>

#include "GeneralParameter.h"
#include "SimpleParameter.h"
// #include "Stepsize.h"
//#include "Status.h"

#include "State.h"
#include "Resource.h"
#include "Decision.h"

template<typename T1, typename T2>
class Solver {
public:
	Solver(
		boost::numeric::ublas::vector<boost::numeric::ublas::vector<Resource> >& resources, 
		boost::numeric::ublas::vector<boost::numeric::ublas::matrix<Decision> >& decisions,
		const SimpleParameter& _params
	);
	//virtual const int solve() = 0;
	// virtual const int getStatus();
	// virtual const GeneralParameter& getParams() const;
	virtual ~Solver() {};

protected:
	// int iter;
	// Status *status;
	std::vector<T1> valfuncs;
	T2 stepsize;
	const SimpleParameter params;
	// const GeneralParameter& gparams;
	// const StepsizeParameter& sparams;
	
private:
	// boost::numeric::ublas::vector<State> states;
};

#endif /* SOLVER_H_ */