#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Dog default Constructor is called" << std::endl;
	atribute = new Brain();
}

Dog::Dog(std::string type) : Animal(type)
{
	this->set_type("Dog");
	this->atribute = new Brain();
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Copy operator" << std::endl;
	this->type = obj.get_type();
	atribute = new Brain();
	for (int i = 0; i < 100; i++)
	{
		atribute->set_ideas("some idea");
		obj.atribute->get_ideas(i);
	}
}

Dog &Dog::operator=(const Dog &obj)
{
	if (this != &obj)
	{
		Animal::operator=(obj);
		this->type = obj.get_type();
		atribute = new Brain();
		for (int i = 0; i < 100; i++)
		{
			atribute->set_ideas("some idea");
			obj.atribute->get_ideas(i);
		}
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << get_type() << " says maw-maw" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog default Destructor is called" << std::endl;
	delete this->atribute;
}
