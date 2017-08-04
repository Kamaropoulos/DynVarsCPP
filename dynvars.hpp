#ifndef DYNVARS_H
#define DYNVARS_H

#include <map>
#include <chrono>
#include <boost/variant.hpp>

#include <string>
#define DATA_TYPES int, double, std::string

class DynVars {
	std::map<char*, boost::variant<DATA_TYPES> > _data;

public:

	void newVariable(char* variableName) {
		_data[variableName];
	}

	template<typename T>
	T readVariable(char* variableName) const {
		return boost::get<T>(_data.at(variableName));
	}

	template<typename T>
	T writeVariable(char* variableName, T value) {
		_data[variableName] = value;
		return boost::get<T>(_data[variableName]);
	}

	template<typename T>
	T* getPointer(char* variableName) {
		return &boost::get<T>(_data[variableName]);
	}
};

#endif