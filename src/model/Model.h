/*
 * Model.h
 *
 *  Created on: Mar 22, 2012
 *      Author: reza
 */

#ifndef MODEL_H_
#define MODEL_H_

#include "../abstract/Resource.h"
#include "../abstract/Connection.h"
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include <lemon/list_graph.h>
#include <lemon/graph_to_eps.h>

using namespace boost::numeric::ublas;
using namespace lemon;

typedef dim2::Point<int> Point;

class Model {
public:
	Model(const vector<Resource> &_resources, const matrix<Connection> &_connections);
	virtual ~Model();
	matrix<ListDigraph::Node> nodeMap;
	ListDigraph::Node source;
	ListDigraph::Node sink;
	const vector<Resource> &resources;
	const matrix<Connection> &connections;
	ListDigraph *graph;
};

#endif /* MODEL_H_ */
