/*
 * SolverParameter.cpp
 *
 *  Created on: Apr 4, 2012
 *      Author: reza
 */

#include "SolverParameter.h"
#include "../abstract/Parameter.h"

SolverParameter::SolverParameter() : Parameter() {
	rho = 10;
	iterate = 10;
}

SolverParameter::~SolverParameter() {
	// TODO Auto-generated destructor stub
}
