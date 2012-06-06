/*
 * Status.h
 *
 *  Created on: Mar 8, 2012
 *      Author: reza
 */

#ifndef STATUS_H_
#define STATUS_H_

class Status {
 public:
	enum StatusCode {
		SUCCESSFUL_TERMINATION = 0,
		NOT_FINISHED = 1,
		MAX_ITS_EXCEEDED = 2,
		INFEASIBLE = 3,
		UNKNOWN = 4
	};
	Status();
	int current(void);
	void print(void);
	void update();
	StatusCode status;
	~Status() {};
 private:
	int iteration;
};

#endif /* STATUS_H_ */
