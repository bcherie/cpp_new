#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat default Constructor is called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	this->set_type("Cat");
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout << "Copy operator" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
	if (this != &obj)
	{
		Animal::operator=(obj);
		this->type = obj.get_type();
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << get_type() << " says maw-maw" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat default Destructor is called" << std::endl;
}
