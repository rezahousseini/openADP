/*
 * State.cpp
 *
 *  Created on: Mar 22, 2012
 *      Author: reza
 */

#include "State.h"

using namespace boost::numeric::ublas;

State::State() {
}

State::State(vector<Resource>& _resources, vector<ValueFunction>& _valfuncs,
 matrix<Decision>& _decisions) : resources(_resources), valfuncs(_valfuncs), decisions(_decisions) {
}

State::~State() {
	// TODO Auto-generated destructor stub
}
