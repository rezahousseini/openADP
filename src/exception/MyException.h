#ifndef MYEXCEPTION_H_
#define MYEXCEPTION_H_

#include <exception>
#include <string>

class MyException : public std::exception {
	public:
		MyException(std::string _message) throw();
		virtual const char* what() const throw();
		virtual ~MyException() throw();
	private:
		std::string message;
};

#endif /* MYEXCEPTION_H_ */
