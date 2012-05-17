/*
 * ReadData.h
 *
 *  Created on: Mar 30, 2012
 *      Author: reza
 */

#ifndef READDATA_H_
#define READDATA_H_

#include <string>
#include <sstream>
#include <iostream>
//#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/multi_array.hpp>

struct set {
	std::string name;
	boost::numeric::ublas::matrix<std::string> value;
};

struct param {
	std::string name;
	std::vector<boost::numeric::ublas::matrix<std::string> > value;
};

class ReadData {
public:
	ReadData(const char *_fname);
	virtual ~ReadData();
private:
	set process_set(std::string name, std::string value) throw();
	param process_param(std::string name, std::string value) throw();
	void string_remove(std::string &src, std::string const &target);
	param process_param3d(std::string name, std::string value);
	
	const char *fname;
	std::vector<set> sets;
	std::vector<param> params;
};

#endif /* READDATA_H_ */
