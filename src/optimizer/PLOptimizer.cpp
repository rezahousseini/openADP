/*
 * PLOptimizer.cpp
 *
 *  Created on: Mar 30, 2012
 *      Author: reza
 */

#include "PLOptimizer.h"
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/matrix_proxy.hpp>
#include <lemon/list_graph.h>

using namespace boost::numeric::ublas;
using namespace lemon;

PLOptimizer::PLOptimizer(Model &_model) : Optimizer(), model(_model), valfunc() {

	vector<ListDigraph::Node> futurNodes = matrix_column<matrix<ListDigraph::Node> > (model.nodeMap, 2);

	for (unsigned i=0; i<futurNodes.size(); i++) {
//		Model::graph.addArc(futurNodes(i), model.sink);
	}
}

void PLOptimizer::run() {

}

void PLOptimizer::update() {

}

PLOptimizer::~PLOptimizer() {
	// TODO Auto-generated destructor stub
}
