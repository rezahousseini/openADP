/*
 * ArrayToGraph.cpp
 *
 *  Created on: Mar 9, 2012
 *      Author: reza
 */

#include "ArrayToGraph.h"


ArrayToGraph::ArrayToGraph() {
	// TODO Auto-generated constructor stub

}

//ListDigraph ArrayToGraph::convert(matrix<int> M) {
//	ListDigraph graph;
//
//	if (M.size1() != M.size2()) throw "Dimension mismatch";
//
//	int dim = M.size1();
//	vector<ListDigraph::Node> nodes(dim);
//
//	for (int i=0; i<dim; i++) {
//		nodes(i) = graph.addNode();
//	}
//
//	for (int i=0; i<dim; i++) {
//		for (int j=0; j<dim; j++) {
//			if (M(i, j) > 0) {
//				graph.addArc(nodes(i), nodes(j));
//			}
//		}
//	}
//
//	return graph;
//}

ArrayToGraph::~ArrayToGraph() {
	// TODO Auto-generated destructor stub
}
