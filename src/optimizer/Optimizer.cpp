/*
 * Optimizer.cpp
 *
 *  Created on: Mar 30, 2012
 *      Author: reza
 */

#include "Optimizer.h"

using namespace boost::numeric::ublas;

Optimizer::Optimizer(vector<Resource>& _resources_data, 
                     matrix<Decision>& _decisions_data)
    : resources_data(_resources_data), 
      decisions_data(_decisions_data) {

}

void Optimizer::run(const matrix<Decision>& decisions) {
}

void Optimizer::update() {

}
