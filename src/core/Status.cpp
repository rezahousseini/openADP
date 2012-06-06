/*
 * Status.cpp
 *
 *  Created on: Mar 8, 2012
 *      Author: reza
 */

#include <iostream>
#include "Status.h"

Status::Status() : status(NOT_FINISHED), iteration(0) {}

int Status::current(void) {
	return status;
}

void Status::print(void) {
	std::cout << current() << std::endl;
}

void Status::update() {

	iteration++;
}