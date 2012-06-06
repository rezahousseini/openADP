/*
 * PLOptimizer.cpp
 *
 *  Created on: Mar 30, 2012
 *      Author: reza
 */

#include <boost/numeric/ublas/matrix_proxy.hpp>
#include "PLOptimizer.h"

PLOptimizer::PLOptimizer(vector<Resource>& resources_data, 
                         matrix<Decision>& decisions_data)
    : Optimizer(resources_data, decisions_data) {
}

// void PLOptimizer::run() {

// }

void PLOptimizer::update() {

}
