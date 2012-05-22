/*
 * ProblemInstance.cpp
 *
 *  Created on: Mar 30, 2012
 *      Author: reza
 */

#include "ProblemInstance.h"

using namespace boost::numeric::ublas;

ProblemInstance::ProblemInstance(const char* _fname) {
	
}

ProblemInstance::ProblemInstance(const vector<vector<Resource> >& _resources, 
const vector<matrix<Decision> >& _decisions) :
 resources(_resources), decisions(_decisions) {

}

ProblemInstance::~ProblemInstance() {
	// TODO Auto-generated destructor stub
}

