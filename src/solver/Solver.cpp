/*
 * Solver.cpp
 *
 *  Created on: Mar 7, 2012
 *      Author: reza
 */

#include <exception>
#include "Solver.h"
#include "PLValueFunction.h"
#include "PLOptimizer.h"
#include "STCStepsize.h"

using namespace boost::numeric::ublas;

template<typename T1, typename T2, typename T3>
Solver<T1, T2, T3>::Solver(vector<vector<Resource> >& resources_data,
                           vector<matrix<Decision> >& decisions_data,
                           const SimpleParameter& _params) 
    : states(),
      stepsize(_params.stepsize), 
      params(_params.general), 
      status() {
  states.reserve(resources_data.size());
	for (int i=0; i<resources_data.size(); i++) {
		states[i] = State<T1, T2>(resources_data(i), decisions_data(i), params);
  }
}

template<typename T1, typename T2, typename T3>
const int Solver<T1, T2, T3>::solve(void) {
	for (int i=0; i<params.iterate; i++) {
		optimizeStates();
		stepsize.update();
		if (params.printStatus) status.print();
	}
	return 0;
}

template<typename T1, typename T2, typename T3>
void Solver<T1, T2, T3>::optimizeStates(void) {
	for (int t=0; t<states.size()-1; t++) {
		states[t].findOptimalDecision(status);
		states[t].calculateNextState(states[t+1]);
		states[t].updateValueFunction(states[t+1], stepsize);
	}
}

// Explicit class declaration
template class Solver<PLValueFunction, PLOptimizer, STCStepsize>;
