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

#include "Solver.h"
#include "State.h"
#include "Resource.h"
#include "Connection.h"
#include "SimpleParameter.h"
#include "Model.h"
#include "PLOptimizer.h"
#include "UniSimulator.h"
#include "PlValueFunction.h"

class SimpleSolver: public Solver {
public:
	SimpleSolver(boost::numeric::ublas::vector<State>& _states, const SimpleParameter& _params);
	const int solve();
private:
	boost::numeric::ublas::vector<State> states;
};

#endif /* SIMPLESOLVER_H_ */
