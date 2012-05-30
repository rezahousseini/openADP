/*
 * Solver.cpp
 *
 *  Created on: Mar 7, 2012
 *      Author: reza
 */

#include "Solver.h"

template<typename T1, typename T2>
Solver<T1, T2>::Solver(const SimpleParameter& _params) : 
gparams(_params.general), sparams(_params.stepsize) {
	
}

// const GeneralParameter& Solver<T>::getParams() const {return params;}

// const int Solver::getStatus() {

	// if (status) {
		// return status->init(this, this->iter);
	// }
	// else {
		// return status->current(this->iter);
	// }

// }
