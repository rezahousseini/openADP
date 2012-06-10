/*
 * PLOptimizer.cpp
 *
 *  Created on: Mar 30, 2012
 *      Author: reza
 */

#include <boost/numeric/ublas/matrix_proxy.hpp>
#include <glpk.h>
#include "PLOptimizer.h"

using namespace boost::numeric::ublas;

PLOptimizer::PLOptimizer(vector<Resource>& resources_data, 
                         matrix<Decision>& decisions_data,
                         std::vector<ValueFunction>& valfuncs
                         int scale)
    : Optimizer(resources_data, decisions_data) {
  // glp_prob *lp = glp_create_prob();
  // int numV = accumulate(numR, 0)-numSfin;
	// glp_add_rows(lp, 2*numSfin+2);
	// glp_add_cols(lp, 3*numS+numV);
}

void PLOptimizer::run(const boost::numeric::ublas::matrix<Decision>& decisions) {

}

void PLOptimizer::update() {

}
