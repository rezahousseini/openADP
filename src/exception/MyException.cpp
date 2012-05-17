#include "MyException.h"

using namespace std;

MyException::MyException(string _message) throw() : message(_message) {
}

const char* MyException::what() const throw() {
	return message.c_str();
}

MyException::~MyException() throw() {
	// TODO Auto-generated destructor stub
}
