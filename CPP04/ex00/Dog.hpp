#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
private:
	/* data */
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog &obj);
	Dog &operator=(const Dog &obj);
	void makeSound() const;
	~Dog();
};

#endif
