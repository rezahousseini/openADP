/*
 * UniSimulator.h
 *
 *  Created on: Mar 30, 2012
 *      Author: reza
 */

#ifndef UNISIMULATOR_H_
#define UNISIMULATOR_H_

#include "../abstract/Simulator.h"
#include "../model/Model.h"

class UniSimulator : public Simulator {
public:
	UniSimulator(Model &_model);
	virtual ~UniSimulator();
protected:
	Model &model;
};

#endif /* UNISIMULATOR_H_ */
