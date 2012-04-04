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
#include "../valuefunction/PLValueFunction.h"

class PLOptimizer : public Optimizer {
public:
	PLOptimizer(Model &_model);
	virtual ~PLOptimizer();
	void run();
	void update();

protected:
	Model &model;
	PLValueFunction valfunc;
};

#endif /* PLOPTIMIZER_H_ */
