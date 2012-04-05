/*
 * PLOptimizer.h
 *
 *  Created on: Mar 30, 2012
 *      Author: reza
 */

#ifndef PLOPTIMIZER_H_
#define PLOPTIMIZER_H_

#include "../abstract/Optimizer.h"
#include "../model/Model.h"
#include "../parameter/SolverParameter.h"
#include "../valuefunction/PLValueFunction.h"
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/vector.hpp>

using namespace boost::numeric::ublas;

class PLOptimizer : public Optimizer {
public:
	PLOptimizer(Model &_model, const SolverParameter &_params);
	virtual ~PLOptimizer();
	void run();
	void update();

protected:
	const SolverParameter &params;
	Model &model;
	vector<PLValueFunction> valfunc;
};

#endif /* PLOPTIMIZER_H_ */
