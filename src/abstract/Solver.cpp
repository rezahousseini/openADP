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
) : valfuncs(10), stepsize(_params.stepsize), params(_params) {
	// valfuncs = zero_vector<T1> (resources.size());
	// Instantiate the state
	// for (int i=0; i<resources.size(); i++) {
		// vector<T1> valfuncs(resources(i).size());
		// states(i) = State(resources(i), valfuncs, decisions(i));
	// }
}

// template<typename T1, typename T2>
// Solver<T1, T2>::Solver(const SimpleParameter& _params) : 
// valfunc(), stepsize(_params.stepsize) {
	
// }
// Solver<T1, T2>::Solver(const Parameter& _params) : params(_params) {
	
// }

// gparams(_params.general), sparams(_params.stepsize), 

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
