#ifndef STEPSIZE_H_
#define STEPSIZE_H_

#include "Parameter.h"

class Stepsize {
	public:
		Stepsize(const Parameter &_params);
		virtual ~Stepsize();
		virtual void update(void);
		virtual float get(void);
	protected:
		const Parameter &params;
		float alpha;
		int iteration;
};

#endif /* STEPSIZE_H_ */
