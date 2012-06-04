/*
 * State.cpp
 *
 *  Created on: Mar 22, 2012
 *      Author: reza
 */

#include "State.h"
#include "PLValueFunction.h"

using namespace boost::numeric::ublas;

template<typename T>
State<T>::State(
	vector<Resource>& _resources,
	matrix<Decision>& _decisions,
	const GeneralParameter& params
) : resources(_resources), decisions(_decisions), valfuncs(_resources.size(), T(params.scale)) {}

template class State<PLValueFunction>;