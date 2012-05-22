/*
 * SimpleSolver.cpp
 *
 *  Created on: Mar 7, 2012
 *      Author: reza
 */

//#include <boost/lexical_cast.hpp>
#include "SimpleSolver.h"
#include "Status.h"
#include "ValueFunction.h"
#include "STCStepsize.h"

// SimpleSolver::SimpleSolver(const vector<Resource> &_resources,
 // const matrix<Connection> &_connections,
 // const SimpleParameter &_params) : 
	// Solver(_params.general, STCStepsize(_params.stepsize)),
	// model(_resources, _connections),
	// optimizer(model, _params),
	// simulator(model) {
	// vector<State> states;
// }

SimpleSolver::SimpleSolver(boost::numeric::ublas::vector<State>& _states, const SimpleParameter &_params) : 
	Solver(_params.general, STCStepsize(_params.stepsize)), states(_states) {
	// vector<State> states;
}

const int SimpleSolver::solve(void) {
	// Iterate trough sample space
	
	for (int i=0; i<params.iterate; i++) {
		for (int t=0; t<states.size(); t++) {
			
		} 
	}
	
	return 0;
}
