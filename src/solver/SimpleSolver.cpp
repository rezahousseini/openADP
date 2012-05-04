/*
 * SimpleSolver.cpp
 *
 *  Created on: Mar 7, 2012
 *      Author: reza
 */

#include <boost/lexical_cast.hpp>
//#include <lemon/graph_to_eps.h>
#include "SimpleSolver.h"
#include "Status.h"
#include "ValueFunction.h"
#include "STCStepsize.h"

SimpleSolver::SimpleSolver(const vector<Resource> &_resources,
 const matrix<Connection> &_connections,
 const SimpleParameter &_params) : 
	Solver(_params.general, STCStepsize(_params.stepsize)),
	model(_resources, _connections),
	optimizer(model, _params),
	simulator(model) {}

void SimpleSolver::init(void) {
	
}

int SimpleSolver::solve(void) {
	// Iterate trough sample space
	for (int i=0; i<params.iterate; i++) {
		
	}

}
