#pragma once
#include <boost/python.hpp>

class TelloPro
{
public:
	TelloPro():command(nullptr){}
	virtual ~TelloPro(){ if(command != nullptr) delete[] command;}
public:
	virtual boost::python::str get_command(){ return command; }
	virtual double get_delay() { return -1; }
protected:
	char* command;
};