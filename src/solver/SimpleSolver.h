/*
 * SimpleSolver.h
 *
 *  Created on: Mar 7, 2012
 *      Author: reza
 */

#ifndef SIMPLESOLVER_H_
#define SIMPLESOLVER_H_

#include "Solver.h"
#include "Resource.h"
#include "Connection.h"
#include "SimpleParameter.h"
#include "Model.h"
#include "PLOptimizer.h"
#include "UniSimulator.h"

#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/vector.hpp>
//#include <lemon/maps.h>
//#include <lemon/list_graph.h>

//using namespace lemon;
using namespace boost::numeric::ublas;

class SimpleSolver: public Solver {
public:
	SimpleSolver(const vector<Resource> &_resources,
			const matrix<Connection> &_connections, const SimpleParameter &_params);
	int solve();

protected:
	void init(void);
	Model model;
	PLOptimizer optimizer;
	UniSimulator simulator;
};

#endif /* SIMPLESOLVER_H_ */
