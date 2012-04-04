/*
 * Parameter.h
 *
 *  Created on: Mar 7, 2012
 *      Author: reza
 */

#ifndef PARAMETER_H_
#define PARAMETER_H_

struct parameters {
	int iterate;
};

const struct parameters DEFAULT_PARAMS = {
		100, // iterate
};

class Parameter {
public:
	Parameter();
	virtual void setParams(parameters params);
	virtual parameters getParams();
	virtual ~Parameter();

protected:
	parameters params;
};

#endif /* PARAMETER_H_ */
