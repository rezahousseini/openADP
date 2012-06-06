// #include <string> // XXX need to be moved to SimpleSolver.h
// #include <boost/numeric/ublas/vector.hpp>
// #include <boost/numeric/ublas/matrix.hpp>

#include "Solver.h"
#include "Resource.h"
#include "Decision.h"
#include "SimpleParameter.h"
#include "PLValueFunction.h"
#include "PLOptimizer.h"
#include "STCStepsize.h"

using namespace boost::numeric::ublas;

int main(int argc, char *argv[]) {
	SimpleParameter params;
	params.general.iterate = 200;
	
	vector<vector<Resource> > resources(3);
	vector<matrix<Decision> > decisions(3);
	
	Solver<PLValueFunction, PLOptimizer, STCStepsize> sol(resources, decisions, 
                                                        params);

	// vector<vector<std::string> > resourceAttributes;
	// vector<vector<std::string> > decisionAttributes;
	
	// vector<Resource> resources(4);
	// matrix<Connection> connections(4, 4);
	
	//resources(0) = Resource(0, 1);
	//resources(1) = Resource(10, 1);
	//resources(2) = Resource(0, 1);
	//resources(3) = Resource(-1, 1);

	//connections(0, 0) = Connection(0, 0);
	//connections(0, 1) = Connection(10, 1);
	//connections(0, 2) = Connection(10, 1);
	//connections(0, 3) = Connection(10, 1);

	//connections(1, 0) = Connection(0, 0);
	//connections(1, 1) = Connection(0, 0);
	//connections(1, 2) = Connection(10, 1);
	//connections(1, 3) = Connection(0, 0);

	//connections(2, 0) = Connection(0, 0);
	//connections(2, 1) = Connection(0, 0);
	//connections(2, 2) = Connection(0, 0);
	//connections(2, 3) = Connection(0, 0);

	//connections(3, 0) = Connection(0, 0);
	//connections(3, 1) = Connection(0, 0);
	//connections(3, 2) = Connection(10, 1);
	//connections(3, 3) = Connection(0, 0);
	
	return 0;
}
