/*
 * Status.cpp
 *
 *  Created on: Mar 8, 2012
 *      Author: reza
 */

#include "Status.h"
#include "Solver.h"

Status::Status() {
	// TODO Auto-generated constructor stub

}

int Status::init(Solver *solver, int iteration) {

	this->solver = solver;
	this->iteration = iteration;

	return NOT_FINISHED;
}

int Status::current(int iteration) {

//	if (this->solver->getParams()->getIterate() == iteration) {
//		return SUCCESSFUL_TERMINATION;
//	}
//	else {
//		return NOT_FINISHED;
//	}

}

Status::~Status() {
	// TODO Auto-generated destructor stub
}
