/*
 * PLOptimizer.h
 *
 *  Created on: Mar 30, 2012
 *      Author: reza
 */

#ifndef PLOPTIMIZER_H_
#define PLOPTIMIZER_H_

#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include "Optimizer.h"

using namespace boost::numeric::ublas;

class PLOptimizer : public Optimizer {
 public:
	PLOptimizer(boost::numeric::ublas::vector<Resource>& resources_data,
              boost::numeric::ublas::matrix<Decision>& decisions_data);
	~PLOptimizer() {};
	// void run();
	void update();
};

#endif /* PLOPTIMIZER_H_ */
