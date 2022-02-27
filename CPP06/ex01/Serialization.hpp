#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include <fstream>
#include <unistd.h>

struct Data
{
	std::string name;
	int age;
	int number;
};
Data Employee =  {"Max", 27, 7777};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
