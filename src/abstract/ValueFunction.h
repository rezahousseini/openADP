/*
 * ValueFunction.h
 *
 *  Created on: Mar 13, 2012
 *      Author: reza
 */

#ifndef VALUEFUNCTION_H_
#define VALUEFUNCTION_H_

//#include <lemon/list_graph.h>
//#include <lemon/maps.h>

//using namespace lemon;

class ValueFunction {
public:
	ValueFunction();
	ValueFunction(int numberFeatures);
	//ValueFunction(ListDigraph &graph, ListDigraph::Node &node, int numberFeatures);
	virtual ~ValueFunction();

//	ListDigraph::ArcMap<float> approxCostMap;
};

#endif /* VALUEFUNCTION_H_ */
