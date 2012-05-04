/*
 * Solver.cpp
 *
 *  Created on: Mar 7, 2012
 *      Author: reza
 */

#include "Solver.h"

int Solver::getStatus() {

	if (status) {
		return status->init(this, this->iter);
	}
	else {
		return status->current(this->iter);
	}

}

const GeneralParameter & Solver::getParams() {
	return params;
}

Solver::~Solver() {
	// TODO Auto-generated destructor stub
}
