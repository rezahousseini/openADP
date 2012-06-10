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
#include "Status.h"
#include "State.h"
#include "Resource.h"
#include "Decision.h"

template<typename T1, typename T2, typename T3>
class Solver {
 public:
	Solver(
      boost::numeric::ublas::vector<boost::numeric::ublas::vector<Resource> >& resources_data, 
      boost::numeric::ublas::vector<boost::numeric::ublas::matrix<Decision> >& decisions_data,
      const SimpleParameter& _params);
	const int solve(void);
	~Solver() {};
 private:
	void optimizeStates(void);
	Status status;
	std::vector<State<T1, T2> > states;
	T3 stepsize;
	const GeneralParameter& params;
};

#endif /* SOLVER_H_ */