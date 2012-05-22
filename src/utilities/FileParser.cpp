/*
 * FileParser.cpp
 *
 *  Created on: Mar 9, 2012
 *      Author: reza
 */

#include "FileParser.h"

#include <fstream>
#include <iomanip>
#include <algorithm>
#include <exception>
#include <boost/algorithm/string.hpp>
#include <boost/numeric/ublas/io.hpp>
#include <boost/lexical_cast.hpp>

#include "MyException.h"

using namespace std;
using namespace boost;
using namespace boost::algorithm;
using namespace boost::numeric::ublas;

FileParser::FileParser(const char *_fname) : fname(_fname) {
	ifstream fp_in;	
	string token;
	
	try {
		fp_in.open(fname, ios::in);
		string fstring;
		copy(istreambuf_iterator<char>(fp_in), istreambuf_iterator<char>(), back_inserter(fstring));
		size_t start_mod = fstring.find("model;")+6;
		size_t start_dat = fstring.find("data;")+5;
		size_t end_mod;
		size_t end_dat;
		
		if (start_mod < start_dat) {
			end_mod = fstring.find("end;");
			end_dat = fstring.rfind("end;");
		}
		else {
			end_dat = fstring.find("end;");
			end_mod = fstring.rfind("end;");
		}
		
		process_model(fstring.substr(start_mod, end_mod));
		process_data(fstring.substr(start_dat, end_dat));
		
		cout << "finish reading file: " << fname << endl;
		
		fp_in.close();
	}
	catch (std::exception &e) {
		cerr << e.what() << endl;
		abort();
	}

}

void FileParser::process_model(const string& data) throw() {
	cout << "reading model section of file: " << fname << " ..." << endl;
	stringstream fp_in(data);
	string token;
	string name;
	string value;
	
	while (fp_in.good() != 0) {
		fp_in >> token;
		if (token.compare("res") == 0) {
			getline(fp_in, value, ';');
			process_resources(value);
		}
		else if (token.compare("var") == 0) {
			getline(fp_in, value, ';');
			process_variables(value);
		}
		else if (token.compare("map") == 0) {
			getline(fp_in, value, ';');
			process_map(value);
		}
		else if (token.compare("end;") == 0) {
			cout << endl;
			break;
		}
		else {
			stringstream serr;
			serr << "error: unknown keyword \"" << token << 
				"\" or forgotten \"end;\"" << endl;
			throw MyException(serr.str());
		}
	}
}

void FileParser::process_resources(const string& value) throw() {
	stringstream ss(value);	
	getline(ss, resources.identifier, '{');
	getline(ss, resources.set, '}');
}

void FileParser::process_variables(const string& value) throw() {
	stringstream ss(value);
	getline(ss, variables.identifier, '{');
	getline(ss, variables.set, '}');
}

void FileParser::process_map(const string& value) throw() {
	stringstream ss(value);
	string token;
	string identifier;
	string set;
	string tokenMap1;
	string tokenMap2;
	
	getline(ss, identifier, '{');
	getline(ss, set, '}');
	
	ss >> token; // skip ":"
	if (token.compare(":") != 0) {
		stringstream serr;
		serr << "error: missspelled keyword \"" << token << 
			"\" or forgotten \":\"" << endl;
		throw MyException(serr.str());
	}
	
	ss >> tokenMap1;
	trim(tokenMap1);
	
	ss >> token;
	if (token.compare("to") != 0) {
		stringstream serr;
		serr << "error: missspelled keyword \"" << token << 
			"\" or forgotten \"to\"" << endl;
		throw MyException(serr.str());
	}
	
	ss >> tokenMap2;
	trim(tokenMap2);
	
	mapping(tokenMap1, tokenMap2);
}

void FileParser::mapping(const string& rhs, const string& lhs) {
	
}

void FileParser::process_data(const string& data) throw() {
	cout << "reading data section of file: " << fname << " ..." << endl;
	stringstream fp_in(data);
	string token;
	string name;
	string value;
	
	while (fp_in.good() != 0) {
		fp_in >> token;
		if (token.compare("set") == 0) {
			fp_in >> name;
			getline(fp_in, value, ';');
			sets.push_back(process_set(name, value));
			cout << "set \"" << name << "\" with " << sets.at(sets.size()-1).value.size1() 
				<< " elements processed ..." << endl;
		}
		else if (token.compare("param") == 0) {
			fp_in >> name;
			getline(fp_in, value, ';');
			params.push_back(process_param(name, value));
			cout << "param \"" << name << "\" with " << params.at(params.size()-1).value.size() 
				<< " elements processed ..." << endl;
		}
		else if (token.compare("end;") == 0) {
			cout << endl;
			break;
		}
		else {
			stringstream serr;
			serr << "error: unknown keyword \"" << token << 
				"\" or forgotten \"end;\"" << endl;
			throw MyException(serr.str());
		}
	}
}

set_data FileParser::process_set(string name, string value) throw() {
	set_data result;
	result.name = name;
	matrix<string> data;
	std::vector<string> _data;
	
	// Remove unnecessary characters
	value.erase(remove(value.begin(), value.end(), '\"' ), value.end());
	string_remove(value, ":=");
	string_remove(value, "[");
	string_remove(value, "]");
	string_remove(value, "'");
	string_remove(value, "(");
	string_remove(value, ")");
	trim(value);

	stringstream ss(value);
	
	for (istream_iterator<string> ss_it(ss); ss_it != istream_iterator<string>(); ss_it++)
		_data.push_back((*ss_it).c_str());
	
	if (_data.size() == 0) {
		stringstream serr;
		serr << "error: no data provided for set \"" << name << "\"" << endl;
		throw MyException(serr.str());
	}
	
	int set_size = count(_data[0].begin(), _data[0].end(), ',')+1;
	
	data = zero_matrix<string> (_data.size(), set_size);
	
	for (int i=0; i<_data.size(); i++) {	
		string _token;
		stringstream _ss(_data[i]);
		
		for (int j=0; j<set_size-1; j++) {
			getline(_ss, _token, ',');
			data(i, j) = _token;
		}
		_ss >> _token;
		data(i, set_size-1) = _token;
	}
	result.value = data;
	return result;
}

param_data FileParser::process_param(string name, string value) throw() {
	stringstream ss(value);
	string token;
	
	// Get token with ":="
	ss >> token;
	if (token.find(":=") != string::npos) ss >> token;
	int dim = count(token.begin(), token.end(), ',')+1-count(token.begin(), token.end(), '(');
	
	if (dim == 3) return process_param3d(name, ss.str());
	else {
		stringstream serr;
		serr << "error: syntax \"" << token << "\"" << endl;
		throw MyException(serr.str());
	}
}

param_data FileParser::process_param3d(string name, string value) {
	param_data result;
	stringstream ss(value);
	result.name = name;
	string token;
	string _value;
	std::vector<std::vector<string> > dim(3);
	std::vector<std::vector<std::vector<string> > > val;
	std::vector<std::vector<string> > _row;
	std::vector<string> _col;
	
	// dump unnessecary characters
	getline(ss, token, '[');
	while (ss.good() != 0) {
		// dimension 1
		getline(ss, token, ']');
		string_remove(token, "*");
		string_remove(token, ",");
		trim(token);
		dim[0].push_back(token);
		
		// dimension 2
		getline(ss, token, '=');
		if (dim[1].empty()) {
			string_remove(token, ":");
			trim(token);
			stringstream _ss(token);
			while (_ss.good() != 0) {
				_ss >> token;
				trim(token);
				dim[1].push_back(token);
			}
		}
				
		// dimension 3
		getline(ss, token, '[');
		trim(token);
		stringstream _ss(token);
		if (dim[2].empty()) {
			while (_ss.good() != 0) {
				_ss >> token;
				trim(token);
				dim[2].push_back(token);
				for (int i=0; i<dim[1].size(); i++) {
					_ss >> token;
					trim(token);
					_col.push_back(token);
				}
				_row.push_back(_col);
				_col.erase(_col.begin(), _col.end());
			}
		}
		else {
			while (_ss.good() != 0) {
				_ss >> token;
				for (int i=0; i<dim[1].size(); i++) {
					_ss >> token;
					trim(token);
					_col.push_back(token);
				}
				_row.push_back(_col);
				_col.erase(_col.begin(), _col.end());
			}
		}
		
		val.push_back(_row);
		_row.erase(_row.begin(), _row.end());
	}
	
	result.dimension = dim;
	result.value = val;
	
	return result;
}

void FileParser::string_remove(string &src, string const &target) {
	if (target.length() == 0) return;
	if (src.length() == 0) return;

    size_t idx = 0;
    for (;;) {
		idx = src.find(target, idx);
        if (idx == string::npos) break;
        src.replace(idx, target.length(), "");
    }
}

FileParser::~FileParser() {
	// TODO Auto-generated destructor stub
}
