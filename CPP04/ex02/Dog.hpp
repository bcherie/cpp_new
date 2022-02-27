#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{
private:
	Brain *atribute;
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog &obj);
	Dog &operator=(const Dog &obj);
	void makeSound() const;
	void get_ideas();
	~Dog();
};

#endif
