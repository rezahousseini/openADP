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
#include "Status.h"
#include "Stepsize.h"

template<typename T1, typename T2>
class State {
 public:
	State(boost::numeric::ublas::vector<Resource>& resources_data,
        boost::numeric::ublas::matrix<Decision>& decisions_data,
        const GeneralParameter& params);
	void findOptimalDecision(Status& status);
	void calculateNextState(const State& futureState);
	void updateValueFunction(const State& futureState, const Stepsize& stepsize);
	~State() {};
 private:
  void findOptimalDecision(void);
	boost::numeric::ublas::vector<Resource> resources;
	boost::numeric::ublas::matrix<Decision> decisions;
	std::vector<T1> valfuncs;
	T2 optimizer;
};

#endif /* STATE_H_ */
