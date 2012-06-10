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

class PLOptimizer : public Optimizer {
 public:
	PLOptimizer(boost::numeric::ublas::vector<Resource>& resources_data,
              boost::numeric::ublas::matrix<Decision>& decisions_data,
              int scale);
	~PLOptimizer() {};
	void run(const boost::numeric::ublas::matrix<Decision>& decisions);
	void update(void);
};

#endif /* PLOPTIMIZER_H_ */
