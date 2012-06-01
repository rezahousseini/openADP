/*
 * State.h
 *
 *  Created on: Mar 22, 2012
 *      Author: reza
 */

#ifndef STATE_H_
#define STATE_H_

#include <vector>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/matrix.hpp>

#include "Resource.h"
#include "ValueFunction.h"
#include "Decision.h"
#include "GeneralParameter.h"

template<typename T>
class State {
public:
	State() {};
	State(
		boost::numeric::ublas::vector<Resource>& _resources,
		boost::numeric::ublas::matrix<Decision>& _decisions,
		const GeneralParameter& params
	);
	~State() {};
private:
	boost::numeric::ublas::vector<Resource> resources;
	boost::numeric::ublas::matrix<Decision> decisions;
	std::vector<T> valfuncs;
};

#endif /* STATE_H_ */
