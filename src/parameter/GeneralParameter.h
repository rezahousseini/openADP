/*
 * GeneralParameter.h
 *
 *  Created on: Apr 4, 2012
 *      Author: reza
 */

#ifndef GENERALPARAMETER_H_
#define GENERALPARAMETER_H_

#include "Parameter.h"


class GeneralParameter : public Parameter {
public:
	GeneralParameter();
	virtual ~GeneralParameter();
	int iterate;
	int horizon;
	int scale;
};

#endif /* GENERALPARAMETER_H_ */
