/*
 * Model.cpp
 *
 *  Created on: Mar 22, 2012
 *      Author: reza
 */

#include "Model.h"
#include <lemon/graph_to_eps.h>

using namespace lemon;

typedef dim2::Point<int> Point;

Model::Model(const vector<Resource> &_resources, const matrix<Connection> &_connections) :
	resources(_resources), connections(_connections) {
	int noRes = connections.size1();

	graph = new ListDigraph();

	ListDigraph::NodeMap<Point> coords(*graph);
	ListDigraph::NodeMap<std::string> name(*graph);

	ListDigraph::ArcMap<Connection> connectionMap(*graph);
	ListDigraph::ArcMap<int> lower(*graph);
	ListDigraph::ArcMap<int> upper(*graph);

	nodeMap = matrix<ListDigraph::Node> (noRes, 3);

	// Add source node
	source = graph->addNode();
	coords[source] = Point(0, (noRes-1)*5);
	std::stringstream ssource;
	ssource << "source";
	name[source] = ssource.str();

	// Add sink node
	sink = graph->addNode();
	coords[sink] = Point(80, (noRes-1)*5);
	std::stringstream ssink;
	ssink << "sink";
	name[sink] = ssink.str();

	// Add resources to the graph
	for (int i1=0; i1<3; i1++) {
		for (int i2=0; i2<noRes; i2++) {
			ListDigraph::Node node = graph->addNode();
			nodeMap(i2, i1) = node;
			std::stringstream ss;
			ss << i2 << "/" << i1 << " " << resources(i2).maxCapacity;
			name[node] = ss.str();
			nodeMap(i2, i1) = node;
			coords[node] = Point(20+i1*20, i2*10);
		}
	}

	// Add connections to the graph
	for (int i1=0; i1<noRes; i1++) {
		if (resources(i1).maxCapacity > 0) {
			graph->addArc(nodeMap(i1, 0), nodeMap(i1, 1));
		}

		if (resources(i1).maxCapacity != 0) {
			graph->addArc(nodeMap(i1, 1), nodeMap(i1, 2));
		}

		if (resources(i1).maxCapacity == -1) {
			graph->addArc(source, nodeMap(i1, 0));
		}

		for (int i2=0; i2<noRes; i2++) {
			if (connections(i1, i2).maxFlow > 0) {
				graph->addArc(nodeMap(i1, 0), nodeMap(i2, 1));
			}
		}
	}

//	// Add connections to the graph
//	for (int i1=0; i1<noRes; i1++) {
//		for (int i2=0; i2<noRes; i2++) {
//			if (connections(graph.id(n1), graph.id(n2)).params.efficiency > 0) {
//				ListDigraph::Arc arc = graph.addArc(n1, n2);
//				connectionMap[arc] = connections(graph.id(n1), graph.id(n2));
//				lower[arc] = connections(graph.id(n1), graph.id(n2)).params.maxFlow;
//				upper[arc] = connections(graph.id(n1), graph.id(n2)).params.minFlow;
//			}
//		}
//	}

	graphToEps(*graph, "graph_model.eps").
		coords(coords).
		enableParallel().
		parArcDist(1).
		drawArrows().
		nodeScale(0.03).
		nodeTexts(name).
		run();
}

Model::~Model() {
	// TODO Auto-generated destructor stub
}
