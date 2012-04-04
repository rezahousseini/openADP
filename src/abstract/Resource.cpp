/*
 * Resource.cpp
 *
 *  Created on: Mar 8, 2012
 *      Author: reza
 */

#include "Resource.h"

Resource::Resource() {

}

Resource::Resource(int maxCapacity, float efficiency) {
	this->maxCapacity = maxCapacity;
	this->efficiency = efficiency;
//	this->params = params;
}

Resource::~Resource() {
	// TODO Auto-generated destructor stub
}
