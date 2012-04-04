/*
 * Resource.h
 *
 *  Created on: Mar 8, 2012
 *      Author: reza
 */

#ifndef RESOURCE_H_
#define RESOURCE_H_

#include "Data.h"

//struct ResourceParameters {
//	int minCapacity;
//};

class Resource {
public:
	Resource();
	Resource(int maxCapacity, float efficiency);
	virtual ~Resource();

	int maxCapacity;
	float efficiency;
//	ResourceParameters params;
};

#endif /* RESOURCE_H_ */