#include "TestNetworkSimplex.h"
#include "TestSimpleSolver.h"
#include "TestModel.h"
#include <iostream>

int main() {
	TestModel *testModel = new TestModel();
	TestNetworkSimplex *testNetworkSimplex = new TestNetworkSimplex();
	TestSimpleSolver *testSimpleSolver = new TestSimpleSolver();

	if (testModel->test() == 0) {
		std::cout << "Test clear:  \"Model\"\n";
	}
	else {
		std::cout << "Test failed: \"Model\"\n";
	}

	if (testNetworkSimplex->test() == 0) {
		std::cout << "Test clear:  \"NetworkSimplex\"\n";
	}
	else {
		std::cout << "Test failed: \"NetworkSimplex\"\n";
	}

	if (testSimpleSolver->test() == 0) {
		std::cout << "Test clear:  \"SimpleSolver\"\n";
	}
	else {
		std::cout << "Test failed: \"SimpleSolver\"\n";
	}

	return 0;
}
