/*
 * TestModel.cpp
 *
 *  Created on: Mar 23, 2012
 *      Author: reza
 */

#include "TestModel.h"
#include <math.h>

TestModel::TestModel() {
	// TODO Auto-generated constructor stub

}

int TestModel::test() {
	vector<Resource> resources(4);
	matrix<Connection> connections(4, 4);

	resources(0) = Resource(0, 1);
	resources(1) = Resource(10, 1);
	resources(2) = Resource(0, 1);
	resources(3) = Resource(-1, 1);

	connections(0, 0) = Connection(0, 0);
	connections(0, 1) = Connection(10, 1);
	connections(0, 2) = Connection(10, 1);
	connections(0, 3) = Connection(10, 1);

	connections(1, 0) = Connection(0, 0);
	connections(1, 1) = Connection(0, 0);
	connections(1, 2) = Connection(10, 1);
	connections(1, 3) = Connection(0, 0);

	connections(2, 0) = Connection(0, 0);
	connections(2, 1) = Connection(0, 0);
	connections(2, 2) = Connection(0, 0);
	connections(2, 3) = Connection(0, 0);

	connections(3, 0) = Connection(0, 0);
	connections(3, 1) = Connection(0, 0);
	connections(3, 2) = Connection(10, 1);
	connections(3, 3) = Connection(0, 0);

	Model model = Model(resources, connections);

	return 0;

}

TestModel::~TestModel() {
	// TODO Auto-generated destructor stub
}
