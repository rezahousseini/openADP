/*
 * Optimizer.h
 *
 *  Created on: Mar 30, 2012
 *      Author: reza
 */

#ifndef OPTIMIZER_H_
#define OPTIMIZER_H_

#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/matrix.hpp>
#include "ValueFunction.h"
#include "Resource.h"
#include "Decision.h"

class Optimizer {
 public:
	Optimizer(boost::numeric::ublas::vector<Resource>& _resources_data,
            boost::numeric::ublas::matrix<Decision>& _decisions_data);
	virtual ~Optimizer() {};
	virtual void run(const boost::numeric::ublas::matrix<Decision>& decisions);
	virtual void update(void);
 protected:
  boost::numeric::ublas::vector<Resource> resources_data;
	boost::numeric::ublas::matrix<Decision> decisions_data;
};

#endif /* OPTIMIZER_H_ */
