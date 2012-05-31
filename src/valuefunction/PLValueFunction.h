/*
 * PLValueFunction.h
 *
 *  Created on: Mar 30, 2012
 *      Author: reza
 */

#ifndef PLVALUEFUNCTION_H_
#define PLVALUEFUNCTION_H_

#include "ValueFunction.h"
#include <boost/numeric/ublas/matrix.hpp>

class PLValueFunction : ValueFunction {
public:
	PLValueFunction();
	// PLValueFunction(int numbers);
	~PLValueFunction();
	void update();
	//boost::numeric::ublas::vector<ListDigraph::Arc> weights; // weights for the arcs
};

#endif /* PLVALUEFUNCTION_H_ */
