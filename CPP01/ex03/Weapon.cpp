#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout << "Constructor is called" << std::endl;

}
Weapon::~Weapon()
{
	std::cout << "Destructor is called" << std::endl;
}

void Weapon::setType(std::string str)
{
	this->type = str;
}

std::string const &Weapon::getType()
{
	return (this->type);
}
