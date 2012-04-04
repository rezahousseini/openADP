/*
 * ArrayToGraph.h
 *
 *  Created on: Mar 9, 2012
 *      Author: reza
 */

#ifndef ARRAYTOGRAPH_H_
#define ARRAYTOGRAPH_H_

#include <lemon/list_graph.h>
#include <boost/numeric/ublas/matrix.hpp>
#include <lemon/maps.h>

using namespace lemon;
using namespace boost::numeric::ublas;

class ArrayToGraph {
public:
	ArrayToGraph();
//	static ListDigraph convert(matrix<int> M);
	virtual ~ArrayToGraph();
};

#endif /* ARRAYTOGRAPH_H_ */
