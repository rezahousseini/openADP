/*
 * Status.h
 *
 *  Created on: Mar 8, 2012
 *      Author: reza
 */

#ifndef STATUS_H_
#define STATUS_H_

//class Solver;

enum TerminationCode {
  SUCCESSFUL_TERMINATION = 0,
  NOT_FINISHED = 1,
  MAX_ITS_EXCEEDED = 2,
  INFEASIBLE = 3,
  UNKNOWN = 4
};

class Status {
public:
	Status();
	//virtual int init(Solver *solver, int iteration);
	virtual int current(int iteration);
	virtual ~Status();

protected:
	int iteration;
	//Solver *solver;
};

#endif /* STATUS_H_ */
