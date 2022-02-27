#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog default Constructor is called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	this->set_type("Dog");
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Copy operator" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	if (this != &obj)
	{
		Animal::operator=(obj);
		this->type = obj.get_type();
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << get_type() << " says gav-gav" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog default Destructor is called" << std::endl;
}
