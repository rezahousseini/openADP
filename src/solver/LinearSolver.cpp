/*
 * LinearSolver.cpp
 *
 *  Created on: Mar 7, 2012
 *      Author: reza
 */

//#include <boost/lexical_cast.hpp>
#include "LinearSolver.h"
#include "Status.h"
#include "PLValueFunction.h"
#include "STCStepsize.h"

// LinearSolver::LinearSolver(const vector<Resource> &_resources,
 // const matrix<Connection> &_connections,
 // const SimpleParameter &_params) : 
	// Solver(_params.general, STCStepsize(_params.stepsize)),
	// model(_resources, _connections),
	// optimizer(model, _params),
	// simulator(model) {
	// vector<State> states;
// }

using namespace boost::numeric::ublas;

// LinearSolver::LinearSolver(vector<vector<Resource> >& resources, vector<matrix<Decision> >& decisions, 
// const SimpleParameter &_params) : Solver(_params.general, STCStepsize(_params.stepsize)) {
LinearSolver::LinearSolver(vector<vector<Resource> >& resources, vector<matrix<Decision> >& decisions, 
const SimpleParameter &_params) : params(_params.general) {
	
	for (int i=0; i<resources.size(); i++) {
		vector<ValueFunction> valfuncs(resources(i).size());
		states(i) = State(resources(i), valfuncs, decisions(i));
	}
}

const int LinearSolver::solve(void) {
	// Iterate trough sample space
	
	for (int i=0; i<params.iterate; i++) {
		for (int t=0; t<states.size(); t++) {
			
		} 
	}
	
	return 0;
}
