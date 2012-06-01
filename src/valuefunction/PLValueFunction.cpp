/*
 * PLValueFunction.cpp
 *
 *  Created on: Mar 30, 2012
 *      Author: reza
 */

#include "PLValueFunction.h"

PLValueFunction::PLValueFunction() : weights() {
}

PLValueFunction::PLValueFunction(const GeneralParameter& _params) : weights(_params.scale), params(_params) {
}

void PLValueFunction::update() {

}

PLValueFunction::~PLValueFunction() {
	// TODO Auto-generated destructor stub
}