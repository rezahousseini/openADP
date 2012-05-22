/*
 * ProblemInstance.h
 *
 *  Created on: Mar 30, 2012
 *      Author: reza
 */

#ifndef PROBLEMINSTANCE_H_
#define PROBLEMINSTANCE_H_

#include <boost/graph/adjacency_list.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/matrix.hpp>

#include "Resource.h"
#include "Decision.h"

// typedef boost::adjacency_list<
	// boost::listS,
    // boost::vecS,
    // boost::directedS,
    // Resource,
    // Decision
// > Graph;

// typedef Graph::vertex_descriptor VertexID;
// typedef Graph::edge_descriptor   EdgeID;

class ProblemInstance {
public:
	ProblemInstance(const char* _fname);
	ProblemInstance(const boost::numeric::ublas::vector<boost::numeric::ublas::vector<Resource> >& _resources, 
		const boost::numeric::ublas::vector<boost::numeric::ublas::matrix<Decision> >& _decisions);
	~ProblemInstance();
	// Graph graph;
private:
	boost::numeric::ublas::vector<boost::numeric::ublas::vector<Resource> > resources;
	boost::numeric::ublas::vector<boost::numeric::ublas::matrix<Decision> > decisions;
};

#endif /* PROBLEMINSTANCE_H_ */
