/*
 * State.h
 *
 *  Created on: Mar 22, 2012
 *      Author: reza
 */

#ifndef STATE_H_
#define STATE_H_

#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/matrix.hpp>

#include "Resource.h"
#include "ValueFunction.h"
#include "Decision.h"

class State {
public:
	State();
	State(boost::numeric::ublas::vector<Resource>& _resources, 
		boost::numeric::ublas::vector<ValueFunction>& _valfuncs,
		boost::numeric::ublas::matrix<Decision>& _decisions);
	~State();

	boost::numeric::ublas::vector<Resource> resources;
	boost::numeric::ublas::vector<ValueFunction> valfuncs;
	boost::numeric::ublas::matrix<Decision> decisions;
};

#endif /* STATE_H_ */
