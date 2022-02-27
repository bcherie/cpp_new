#ifndef ARRAYEXC_HPP
#define ARRAYEXC_HPP

#include <iostream>
#include <string>

class ArrayException
{
private:
	std::string m_error;

public:
	ArrayException(std::string error)
		: m_error(error)
	{
	}

	 const char* getError() { return m_error.c_str(); }
};

#endif
