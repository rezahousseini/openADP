/*
 * TestModel.h
 *
 *  Created on: Mar 23, 2012
 *      Author: reza
 */

#ifndef TESTMODEL_H_
#define TESTMODEL_H_

#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include "../src/model/Model.h"
#include "../src/abstract/Resource.h"
#include "../src/abstract/Connection.h"


using namespace boost::numeric::ublas;

class TestModel {
public:
	TestModel();
	int test();
	virtual ~TestModel();
};

#endif /* TESTMODEL_H_ */
