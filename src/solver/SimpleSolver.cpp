/*
 * SimpleSolver.cpp
 *
 *  Created on: Mar 7, 2012
 *      Author: reza
 */

#include "SimpleSolver.h"
#include "../abstract/Status.h"
#include "../abstract/ValueFunction.h"
#include <boost/lexical_cast.hpp>
#include <lemon/graph_to_eps.h>

SimpleSolver::SimpleSolver(const vector<Resource> &_resources, const matrix<Connection> &_connections,
		const SolverParameter &_params) : Solver(_params), model(_resources, _connections),
		optimizer(model, _params), simulator(model) {

}

int SimpleSolver::solve() {

	for (int i=0; i<params.iterate; i++) {

	}

}
