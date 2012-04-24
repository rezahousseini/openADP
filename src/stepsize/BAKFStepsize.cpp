#include "BAKFStepsize.h"
#include <math.h>

BAKFStepsize::BAKFStepsize(float alpha0, float beta0, float nu0, float lambda0, float _a) : 
 Stepsize(alpha0), beta0(beta0), nu0(nu0), lambda(lambda0), eta(alpha0), a(_a) {
}

void BAKFStepsize::update(float epsilon) {
	iteration = iteration+1;
	beta = (1-eta)*beta+eta*epsilon;
	nu = (1-eta)*nu+eta*pow(epsilon, 2);
	sigma = (nu-pow(beta, 2))/(1+lambda);
	
	eta = a/(a+iteration-1);
	lambda = pow(1-alpha, 2)*lambda+pow(alpha, 2); 
	
	if (iteration <= 2) {
		alpha = 1/(iteration+1);
	}
	else {
		alpha = 1-sigma/nu;
	}
}
