/*
 * SimpleSolver.h
 *
 *  Created on: Mar 7, 2012
 *      Author: reza
 */

#ifndef SIMPLESOLVER_H_
#define SIMPLESOLVER_H_

#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/vector.hpp>

// #include "Solver.h"
#include "State.h"
#include "Resource.h"
#include "Decision.h"
#include "Connection.h"
#include "SimpleParameter.h"
#include "Model.h"
#include "PLOptimizer.h"
#include "UniSimulator.h"
#include "PLValueFunction.h"

// template <>
// class SimpleSolver : public Solver {
class SimpleSolver {
public:
	SimpleSolver(boost::numeric::ublas::vector<boost::numeric::ublas::vector<Resource> >& _resources, 
	boost::numeric::ublas::vector<boost::numeric::ublas::matrix<Decision> >& _decisions,
	const SimpleParameter& _params);
	const int solve();
private:
	boost::numeric::ublas::vector<State> states;
};

#endif /* SIMPLESOLVER_H_ */
