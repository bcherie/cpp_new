#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "Cat";
	std::cout << "Cat default Constructor is called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	this->set_type("Cat");
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
	std::cout << "Copy operator" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	if (this != &obj)
	{
		WrongAnimal::operator=(obj);
		this->type = obj.get_type();
	}
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << get_type() << " says wrong sound" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Cat default Destructor is called" << std::endl;
}
