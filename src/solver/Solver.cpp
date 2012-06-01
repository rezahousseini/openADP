/*
 * Solver.cpp
 *
 *  Created on: Mar 7, 2012
 *      Author: reza
 */

#include "Solver.h"
#include "PLValueFunction.h"
#include "STCStepsize.h"

using namespace boost::numeric::ublas;

template<typename T1, typename T2>
Solver<T1, T2>::Solver(
	vector<vector<Resource> >& resources,
	vector<matrix<Decision> >& decisions,
	const SimpleParameter& _params
) : states(resources.size()), stepsize(_params.stepsize), params(_params.general) {
	// Instantiate the states
	for (int i=0; i<resources.size(); i++) {
		states(i) = State<T1>(resources(i), decisions(i), params);
	}
}

template<typename T1, typename T2>
const int Solver<T1, T2>::solve(void) {
	// Iterate trough sample space
	for (int i=0; i<params.iterate; i++) {
		// Do for every time step
		for (int t=0; t<states.size(); t++) {
			
		}
	}
	
	return 0;
}

// const GeneralParameter& Solver<T>::getParams() const {return params;}

// const int Solver::getStatus() {

	// if (status) {
		// return status->init(this, this->iter);
	// }
	// else {
		// return status->current(this->iter);
	// }

// }

// Explicit class declaration
template class Solver<PLValueFunction, STCStepsize>;
