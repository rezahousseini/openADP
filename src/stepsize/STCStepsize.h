#ifndef STCSTEPSIZE_H_
#define STCSTEPSIZE_H_

#include "Stepsize.h"
#include "StepsizeParameter.h"

class STCStepsize : public Stepsize {
	public:
		STCStepsize(const StepsizeParameter& _params);
		void update(void);
	protected:
		const StepsizeParameter& params;
};

#endif /* STCSTEPSIZE_H_ */
