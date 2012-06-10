/*
 * State.cpp
 *
 *  Created on: Mar 22, 2012
 *      Author: reza
 */

#include "State.h"
#include "PLValueFunction.h"
#include "PLOptimizer.h"

using namespace boost::numeric::ublas;

template<typename T1, typename T2>
State<T1, T2>::State(vector<Resource>& resources_data, 
                     matrix<Decision>& decisions_data,
                     const GeneralParameter& params)
    : resources(resources_data.size()),
      decisions(decisions_data.size1(), decisions_data.size2()),
      valfuncs(resources_data.size(), T1(params.scale)),
      optimizer(resources_data, decisions_data, params.scale) {}

template<typename T1, typename T2>
void State<T1, T2>::findOptimalDecision(Status& status) {
	findOptimalDecision();
	status.update();
}

template<typename T1, typename T2>
void State<T1, T2>::findOptimalDecision(void) {
	optimizer.run(decisions);
}

template<typename T1, typename T2>
void State<T1, T2>::calculateNextState(const State& futureState) {
	
}

template<typename T1, typename T2>
void State<T1, T2>::updateValueFunction(const State& futureState,
                                        const Stepsize& stepsize) {
  optimizer.update();
}

template class State<PLValueFunction, PLOptimizer>;