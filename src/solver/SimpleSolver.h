/*
 * SimpleSolver.h
 *
 *  Created on: Mar 7, 2012
 *      Author: reza
 */

#ifndef SIMPLESOLVER_H_
#define SIMPLESOLVER_H_

#include "../abstract/Solver.h"
#include "../abstract/Resource.h"
#include "../abstract/Connection.h"
#include "../abstract/Parameter.h"
#include "../model/Model.h"
#include "../optimizer/PLOptimizer.h"
#include "../simulator/UniSimulator.h"
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include <lemon/maps.h>
#include <lemon/list_graph.h>

using namespace lemon;
using namespace boost::numeric::ublas;

class SimpleSolver: public Solver {
public:
	SimpleSolver(const vector<Resource> &_resources, const matrix<Connection> &_connections, const Parameter &_params);
	int solve();

protected:
	Model model;
	PLOptimizer optimizer;
	UniSimulator simulator;
};

#endif /* SIMPLESOLVER_H_ */
