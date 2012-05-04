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
#include "Model.h"
#include "SimpleParameter.h"
#include "PLValueFunction.h"

using namespace boost::numeric::ublas;

class PLOptimizer : public Optimizer {
public:
	PLOptimizer(Model &_model, const SimpleParameter &_params);
	virtual ~PLOptimizer();
	void run();
	void update();

protected:
	const SimpleParameter &params;
	Model &model;
	vector<PLValueFunction> valfunc;
};

#endif /* PLOPTIMIZER_H_ */
