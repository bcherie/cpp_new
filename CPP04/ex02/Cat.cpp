#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat default Constructor is called" << std::endl;
	atribute = new Brain();
}

Cat::Cat(std::string type) : Animal(type)
{
	this->set_type("Cat");
}

Cat::Cat(const Cat &obj) : Animal(obj)
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

Cat &Cat::operator=(const Cat &obj)
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

void Cat::makeSound() const
{
	std::cout << get_type() << " says maw-maw" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat default Destructor is called" << std::endl;
	delete this->atribute;
}
