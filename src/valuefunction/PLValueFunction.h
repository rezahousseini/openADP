/*
 * PLValueFunction.h
 *
 *  Created on: Mar 30, 2012
 *      Author: reza
 */

#ifndef PLVALUEFUNCTION_H_
#define PLVALUEFUNCTION_H_

#include "../abstract/ValueFunction.h"
#include <boost/numeric/ublas/matrix.hpp>
#include <lemon/list_graph.h>

using namespace lemon;
using namespace boost::numeric::ublas;

class PLValueFunction : ValueFunction {
public:
	PLValueFunction();
	PLValueFunction(int numbers);
	virtual ~PLValueFunction();
	void update();
	vector<ListDigraph::Arc> weights; // weights for the arcs
};

#endif /* PLVALUEFUNCTION_H_ */
