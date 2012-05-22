/*
 * Resource.h
 *
 *  Created on: Mar 8, 2012
 *      Author: reza
 */

#ifndef RESOURCE_H_
#define RESOURCE_H_

#include <string>

#include "Data.h"

class Resource {
public:
	Resource() {};
	Resource(int maxCapacity, float efficiency);
	~Resource();

	std::string name;
	int maxCapacity;
	float efficiency;
};

#endif /* RESOURCE_H_ */
