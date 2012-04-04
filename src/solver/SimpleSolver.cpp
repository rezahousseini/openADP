/*
 * SimpleSolver.cpp
 *
 *  Created on: Mar 7, 2012
 *      Author: reza
 */

#include "SimpleSolver.h"
#include "../abstract/Status.h"
#include "../abstract/ValueFunction.h"
#include <boost/lexical_cast.hpp>
#include <lemon/graph_to_eps.h>

SimpleSolver::SimpleSolver(const vector<Resource> &_resources, const matrix<Connection> &_connections,
		const Parameter &_params) : Solver(_params), model(_resources, _connections),
		optimizer(model), simulator(model) {


//	// Add resources to the graph
//	for (vector<Resource>::const_iterator it=resources.begin(); it!=resources.end(); ++it) {
//		ListDigraph::Node node = graph.addNode();
//		resourceMap[node] = *it;
//	}
//
//	// Add connections to the graph
//	for (ListDigraph::NodeIt n1(graph); n1!=INVALID; ++n1) {
//		for (ListDigraph::NodeIt n2(graph); n2!=INVALID; ++n2) {
//			if (connections(graph.id(n1), graph.id(n2)).params.efficiency > 0) {
//				ListDigraph::Arc arc = graph.addArc(n1, n2);
//				connectionMap[arc] = connections(graph.id(n1), graph.id(n2));
//				lower[arc] = connections(graph.id(n1), graph.id(n2)).params.maxFlow;
//				upper[arc] = connections(graph.id(n1), graph.id(n2)).params.minFlow;
//			}
//		}
//	}
//
//	// Add node if capacity is bigger then zero or smaller then infinite
//	for (ListDigraph::NodeIt n(graph); n!=INVALID; ++n) {
//		if (resourceMap[n].params.maxCapacity > 0 && resourceMap[n].params.maxCapacity < 1.0/0.0) {
//			ListDigraph::Node node = graph.addNode();
//			ListDigraph::Arc arc = graph.addArc(n, node);
//
//			resourceMap[node] = Resource();
//			connectionMap[arc] = Connection();
//			lower[arc] = resourceMap[n].params.minCapacity;
//			upper[arc] = resourceMap[n].params.maxCapacity;
//
//			// Add value function approximation
////			ListDigraph::Node emptyNode = graph.addNode();
////			valFuncMap[node] = ValueFunction(graph, node, resourceMap[n].params.maxCapacity);
//		}
//	}


}

int SimpleSolver::solve() {

	int done;
	int status_code;

	done = 0;
	iter = 0;

	do {
		iter++;

		status_code = this->getStatus();
		if (status_code != NOT_FINISHED) break;

	} while (!done);

	return status_code;

}
