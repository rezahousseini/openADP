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
//#include <lemon/maps.h>
//#include <lemon/list_graph.h>

#include "Solver.h"
#include "ProblemInstance.h"
#include "State.h"
#include "Resource.h"
#include "Connection.h"
#include "SimpleParameter.h"
#include "Model.h"
#include "PLOptimizer.h"
#include "UniSimulator.h"
#include "PlValueFunction.h"

//using namespace lemon;
using namespace boost::numeric::ublas;

class SimpleSolver: public Solver {
public:
	SimpleSolver(const ProblemInstance& _prob, const SimpleParameter& _params);
	const int solve();

protected:
	const ProblemInstance& prob;
	vector<vector<State> > states;
};

#endif /* SIMPLESOLVER_H_ */
