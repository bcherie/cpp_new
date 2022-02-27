#ifndef BRAIN_HPP
#define BRAIN_HPP
#include "Animal.hpp"
#include <iostream>

class Brain
{
protected:
	std::string ideas[100];
	int count;
public:
	Brain();
	Brain(const Brain &obj);
	Brain &operator=(const Brain &obj);
	std::string get_ideas(int i) const;
	void set_ideas(std::string str);
	~Brain();
};

#endif
