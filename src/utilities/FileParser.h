/*
 * FileParser.h
 *
 *  Created on: Mar 9, 2012
 *      Author: reza
 */

#ifndef FILEPARSER_H_
#define FILEPARSER_H_

#include <string>
#include <sstream>
#include <iostream>
#include <boost/numeric/ublas/matrix.hpp>

struct res {
	std::string identifier;
	std::string set;
	std::vector<Resource> value;
};

struct var {
	std::string identifier;
	std::string set;
};

struct set_data {
	std::string name;
	boost::numeric::ublas::matrix<std::string> value;
};

struct param_data {
	std::string name;
	std::vector<std::vector<std::string> > dimension;
	std::vector<std::vector<std::vector<std::string> > > value;
};

class FileParser {
public:
	FileParser();
	~FileParser();
protected:
	res resources;
	var variables;
	std::vector<set_data> sets;
	std::vector<param_data> params;
private:
	void process_resources(const std::string& data) throw();
	void process_variables(const std::string& value) throw();
	void process_map(const std::string& value) throw();
	void mapping(const std::string& rhs, const std::string& lhs);
	void process_model(const std::string& data) throw();
	void process_data(const std::string& data) throw();
	set_data process_set(std::string name, std::string value) throw();
	param_data process_param(std::string name, std::string value) throw();
	void string_remove(std::string& src, const std::string& target);
	param_data process_param3d(std::string name, std::string value);
	
	const char *fname;
};

#endif /* FILEPARSER_H_ */
