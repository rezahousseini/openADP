/*
 * PLOptimizer.cpp
 *
 *  Created on: Mar 30, 2012
 *      Author: reza
 */

#include "PLOptimizer.h"
#include <boost/numeric/ublas/matrix_proxy.hpp>
//#include <lemon/list_graph.h>

//using namespace lemon;

PLOptimizer::PLOptimizer(Model &_model, const SimpleParameter &_params) : Optimizer(),
		params(_params), model(_model), valfunc() {

	//vector<ListDigraph::Node> futurNodes = matrix_column<matrix<ListDigraph::Node> > (model.nodeMap, 2);
	//valfunc = vector<PLValueFunction> (model.resources.size());

	//// Adding arcs for the piecewise linear value function
	//for (unsigned i=0; i<futurNodes.size(); i++) {
		//if (model.resources(i).maxCapacity > 0) {
			//// Add an arc for every discretization step rho
			//valfunc(i) = PLValueFunction(params.rho*model.resources(i).maxCapacity);
			//for (int k=0; k<params.rho; k++) {
				//valfunc(i).weights(k) = model.graph->addArc(futurNodes(i), model.sink);
			//}
		//}
	//}
}

void PLOptimizer::run() {

}

void PLOptimizer::update() {

}

PLOptimizer::~PLOptimizer() {
	// TODO Auto-generated destructor stub
}
