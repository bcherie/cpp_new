#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Constructor is called" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
}

Animal::Animal(const Animal &obj)
{
	this->type = obj.get_type();
	return ;
}

Animal &Animal::operator=(const Animal &obj)
{
	if (this != &obj)
	{
		this->type = obj.get_type();
	}
	return (*this);
}

void Animal::set_type(std::string t)
{
	this->type = t;
}

std::string Animal::get_type() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "default sound" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Default Desstructor is called" << std::endl;
}
