/*
 * Solver.cpp
 *
 *  Created on: Mar 7, 2012
 *      Author: reza
 */

#include "Solver.h"
#include "Status.h"

//Solver::Solver(const Parameter &params) {
//
//}

int Solver::getStatus() {

	if (status) {
		return status->init(this, this->iter);
	}
	else {
		return status->current(this->iter);
	}

}

const Parameter & Solver::getParams() {
	return params;
}

Solver::~Solver() {
	// TODO Auto-generated destructor stub
}
