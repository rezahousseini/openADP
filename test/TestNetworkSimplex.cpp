/*
 * TestNetworkSimplex.cpp
 *
 *  Created on: Mar 8, 2012
 *      Author: reza
 */

#include "TestNetworkSimplex.h"
#include <lemon/network_simplex.h>
#include <lemon/list_graph.h>
#include <boost/numeric/ublas/matrix.hpp>
#include "../src/utilities/ArrayToGraph.h"
//#include <lemon/maps.h>
//#include <lemon/concepts/digraph.h>
//#include <lemon/core.h>
#include "../src/solver/SimpleSolver.h"
#include <lemon/graph_to_eps.h>
#include <lemon/math.h>

using namespace lemon;
using namespace boost::numeric::ublas;

TestNetworkSimplex::TestNetworkSimplex() {
	// TODO Auto-generated constructor stub

}

int TestNetworkSimplex::test() {
	typedef dim2::Point<int> Point;

	ListDigraph g;

	ListDigraph::NodeMap<Point> coords(g);
	ListDigraph::NodeMap<int> supply(g);
	ListDigraph::ArcMap<int> lower(g);
	ListDigraph::ArcMap<int> upper(g);
	ListDigraph::ArcMap<int> cost(g);
	ListDigraph::ArcMap<int> flow(g);

	ListDigraph::Node g1 = g.addNode();
	ListDigraph::Node s1 = g.addNode();
	ListDigraph::Node n1 = g.addNode();
	ListDigraph::Node r1 = g.addNode();

	ListDigraph::Node g2 = g.addNode();
	ListDigraph::Node s2 = g.addNode();
	ListDigraph::Node n2 = g.addNode();
	ListDigraph::Node r2 = g.addNode();

	ListDigraph::Node g3 = g.addNode();
	ListDigraph::Node s3 = g.addNode();
	ListDigraph::Node n3 = g.addNode();
	ListDigraph::Node r3 = g.addNode();

	ListDigraph::Node source = g.addNode();
	ListDigraph::Node sink = g.addNode();

	coords[g1] = Point(20, 30); supply[g1] = 3;
	coords[s1] = Point(20, 20); supply[s1] = 7;
	coords[n1] = Point(20, 10); supply[n1] = 0;
	coords[r1] = Point(20, 0); supply[r1] = 0;

	coords[g2] = Point(40, 30); supply[g2] = 0;
	coords[s2] = Point(40, 20); supply[s2] = 0;
	coords[n2] = Point(40, 10); supply[n2] = 0;
	coords[r2] = Point(40, 0); supply[r2] = -7;

	coords[g3] = Point(60, 30); supply[g3] = 0;
	coords[s3] = Point(60, 20); supply[s3] = 0;
	coords[n3] = Point(60, 10); supply[n3] = 0;
	coords[r3] = Point(60, 0); supply[r3] = 0;

	coords[source] = Point(0, 15); supply[source] = 0;
	coords[sink] = Point(80, 15); supply[sink] = -3;

	ListDigraph::Arc a0 = g.addArc(g1, s2); lower[a0] = 0; upper[a0] = 10; cost[a0] = 0;
	ListDigraph::Arc a1 = g.addArc(g1, n2); lower[a1] = 0; upper[a1] = 10; cost[a1] = -1;
	ListDigraph::Arc a2 = g.addArc(g1, r2); lower[a2] = 0; upper[a2] = 10; cost[a2] = -2;
	ListDigraph::Arc a3 = g.addArc(s1, r2); lower[a3] = 0; upper[a3] = 10; cost[a3] = 0;
	ListDigraph::Arc a4 = g.addArc(s1, s2); lower[a4] = 0; upper[a4] = 8; cost[a4] = 0;
	ListDigraph::Arc a5 = g.addArc(n1, r2); lower[a5] = 0; upper[a5] = 10; cost[a5] = 1;
//	ListDigraph::Arc a6 = g.addArc(n1, n2); lower[a6] = 0; upper[a6] = 10; cost[a6] = 0;
	ListDigraph::Arc a15 = g.addArc(r1, r2); lower[a15] = 0; upper[a15] = 10; cost[a15] = 0;

	ListDigraph::Arc a7 = g.addArc(g2, g3); lower[a7] = 0; upper[a7] = 0; cost[a7] = 0;
	ListDigraph::Arc a8 = g.addArc(s2, s3); lower[a8] = 0; upper[a8] = 8; cost[a8] = 0;
	ListDigraph::Arc a9 = g.addArc(n2, n3); lower[a9] = 0; upper[a9] = 10; cost[a9] = 0;
	ListDigraph::Arc a10 = g.addArc(r2, r3); lower[a10] = 0; upper[a10] = 0; cost[a10] = 0;

	ListDigraph::Arc a11 = g.addArc(g3, sink); lower[a11] = 0; upper[a11] = 10; cost[a11] = 0;
	ListDigraph::Arc a12 = g.addArc(s3, sink); lower[a12] = 0; upper[a12] = 10; cost[a12] = 0;
	ListDigraph::Arc a13 = g.addArc(n3, sink); lower[a13] = 0; upper[a13] = 10; cost[a13] = 0;
	ListDigraph::Arc a14 = g.addArc(r3, sink); lower[a14] = 0; upper[a14] = 10; cost[a14] = 0;

	ListDigraph::Arc a16 = g.addArc(source, n1); lower[a16] = 0; upper[a16] = 10; cost[a16] = 0;

	ListDigraph::Arc a17 = g.addArc(s3, sink); lower[a17] = 0; upper[a17] = 1; cost[a17] = 0;
	ListDigraph::Arc a18 = g.addArc(s3, sink); lower[a18] = 0; upper[a18] = 1; cost[a18] = 0;
	ListDigraph::Arc a19 = g.addArc(s3, sink); lower[a19] = 0; upper[a19] = 1; cost[a19] = 0;
	ListDigraph::Arc a20 = g.addArc(s3, sink); lower[a20] = 0; upper[a20] = 1; cost[a20] = 0;

	NetworkSimplex<ListDigraph> ns(g);

	ns.lowerMap(lower).upperMap(upper).costMap(cost).supplyMap(supply).run();

	ns.flowMap(flow);

	graphToEps(g, "graph_to_eps_demo.eps").
		coords(coords).
		enableParallel().
		parArcDist(1).
		drawArrows().
		nodeScale(0.03).
		nodeTexts(supply).
		arcWidths(flow).
		run();

//	for (ListDigraph::NodeIt n(g); n!=INVALID; ++n) {
//		std::cout << "Node potential:" << ns.potential(n) << " ";
//
//		for (ListDigraph::OutArcIt a(g, n); a!=INVALID; ++a) {
//			std::cout << "OutArc:" << flow[a] << " ";
//		}
//
//		for (ListDigraph::InArcIt b(g, n); b!=INVALID; ++b) {
//			std::cout << "InArc: " << flow[b] << " ";
//		}
//
//		std::cout  << std::endl;
//	}

	return 0;
}

TestNetworkSimplex::~TestNetworkSimplex() {
	// TODO Auto-generated destructor stub
}
