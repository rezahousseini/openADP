/*
 * ProblemInstance.h
 *
 *  Created on: Mar 30, 2012
 *      Author: reza
 */

#ifndef PROBLEMINSTANCE_H_
#define PROBLEMINSTANCE_H_

#include <string>
#include <sstream>
#include <iostream>
#include <boost/numeric/ublas/matrix.hpp>

struct set_data {
	std::string name;
	boost::numeric::ublas::matrix<std::string> value;
};

struct param_data {
	std::string name;
	std::vector<std::vector<std::string> > dimension;
	std::vector<std::vector<std::vector<std::string> > > value;
};

class ProblemInstance {
public:
	ProblemInstance(const char *_fname);
	virtual ~ProblemInstance();
protected:
	std::vector<set_data> sets;
	std::vector<param_data> params;
private:
	void process_model(const std::string& data) throw();
	void process_data(const std::string& data) throw();
	set_data process_set(std::string name, std::string value) throw();
	param_data process_param(std::string name, std::string value) throw();
	void string_remove(std::string &src, std::string const &target);
	param_data process_param3d(std::string name, std::string value);
	
	const char *fname;
};

#endif /* PROBLEMINSTANCE_H_ */
