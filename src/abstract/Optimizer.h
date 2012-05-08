/*
 * Optimizer.h
 *
 *  Created on: Mar 30, 2012
 *      Author: reza
 */

#ifndef OPTIMIZER_H_
#define OPTIMIZER_H_

#include "ValueFunction.h"
#include "Model.h"

class Optimizer {
public:
	Optimizer();
	virtual ~Optimizer();
	virtual void run();
	virtual void update();
};

#endif /* OPTIMIZER_H_ */
