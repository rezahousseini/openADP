#ifndef STCSTEPSIZE_H_
#define STCSTEPSIZE_H_

#include "Stepsize.h"
#include "STCStepsizeParameter.h"

class STCStepsize : public Stepsize {
	public:
		STCStepsize(const STCStepsizeParameter &_params);
		void update(void);
	protected:
		const STCStepsizeParameter &params;
};

#endif /* STCSTEPSIZE_H_ */
