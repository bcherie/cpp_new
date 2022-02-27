#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default Constructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	this->type = obj.get_type();
	return ;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	if (this != &obj)
	{
		this->type = obj.get_type();
	}
	return (*this);
}

void WrongAnimal::set_type(std::string t)
{
	this->type = t;
}

std::string WrongAnimal::get_type() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "wrong default sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default Desstructor is called" << std::endl;
}
