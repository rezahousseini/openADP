/*
 * Connection.h
 *
 *  Created on: Mar 12, 2012
 *      Author: reza
 */

#ifndef CONNECTION_H_
#define CONNECTION_H_

//struct ConnectionParameters {
//	int minFlow;
//};

class Connection {
public:
	Connection();
	Connection(int maxFlow, float efficiency);
	virtual ~Connection();

	int maxFlow;
	float efficiency;
//	ConnectionParameters params;
};

#endif /* CONNECTION_H_ */
