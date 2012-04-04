/*
 * Parameter.cpp
 *
 *  Created on: Mar 7, 2012
 *      Author: reza
 */

#include "Parameter.h"

Parameter::Parameter() {
	this->params = DEFAULT_PARAMS;
}

void Parameter::setParams(parameters params) {
	this->params = params;
}

parameters Parameter::getParams() {
	return this->params;
}

Parameter::~Parameter() {
	// TODO Auto-generated destructor stub
}
