/*
 * SolverParameter.h
 *
 *  Created on: Apr 4, 2012
 *      Author: reza
 */

#ifndef SOLVERPARAMETER_H_
#define SOLVERPARAMETER_H_

#include "../abstract/Parameter.h"

class SolverParameter : public Parameter {
public:
	SolverParameter();
	int rho;
	int iterate;
	virtual ~SolverParameter();
};

#endif /* SOLVERPARAMETER_H_ */
