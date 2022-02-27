#ifndef CONVERSION_HPP
#define CONVERSION_HPP
#include <string>
#include <iostream>
#include <sstream>
#include <cmath>
#include <ctype.h>

class Conversion
{
private:
	std::string str;
	Conversion();
public:
	Conversion(std::string arg);
	void identifier();
	void converter_double(double i);
	void converter_int(int i);
	void converter_float(float i);
	void converter_char(char c);
	~Conversion();
};

#endif
