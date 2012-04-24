#ifndef BAKFSTEPSIZE_H_
#define BAKFSTEPSIZE_H_

#include "Stepsize.h"

class BAKFStepsize : public Stepsize {
	public:
		BAKFStepsize(float alpha0, float beta0, float nu0, float lambda0, float _a);
		void update(float epsilon);
	protected:
		float beta;
		float nu;
		float lambda;
		float eta;
		float sigma;
};

#endif /* BAKFSTEPSIZE_H_ */
