#add_library(stepsize BAKFStepsize.cpp OSAVIStepsize.cpp SGAStepsize.cpp STCStepsize.cpp)
add_library(stepsize 
	Stepsize.cpp
	STCStepsize.cpp
)
