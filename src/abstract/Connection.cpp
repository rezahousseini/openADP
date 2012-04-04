/*
 * Connection.cpp
 *
 *  Created on: Mar 12, 2012
 *      Author: reza
 */

#include "Connection.h"

Connection::Connection() {

}

Connection::Connection(int maxFlow, float efficiency) {
	this->maxFlow = maxFlow;
	this->efficiency = efficiency;
//	this->params = params;
}

Connection::~Connection() {
	// TODO Auto-generated destructor stub
}
