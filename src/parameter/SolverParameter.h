/*
 * SolverParameter.h
 *
 *  Created on: Apr 4, 2012
 *      Author: reza
 */

#ifndef SOLVERPARAMETER_H_
#define SOLVERPARAMETER_H_

#include "Parameter.h"

template<typename T1, typename T2, typename T3>
class SolverParameter {
public:
	SolverParameter();
	~SolverParameter() {};
	Parameter general;
	Parameter stepsize;
};

#endif /* SOLVERPARAMETER_H_ */
