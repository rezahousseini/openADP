#ifndef SGASTEPSIZE_H_
#define SGASTEPSIZE_H_

#include "Stepsize.h"

class SGAStepsize : public Stepsize {
	public:
		SGAStepsize(float _alpha0, float _a, float _b, float _c);
		void update(void);
	protected:
		float beta;
		float a;
		float b;
};

#endif /* SGASTEPSIZE_H_ */
