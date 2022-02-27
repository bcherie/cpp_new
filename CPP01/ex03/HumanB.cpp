#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->_Weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon _Weapon)
{
	this->_Weapon = &_Weapon;
}

HumanB::~HumanB()
{
	std::cout << "Destructor HumanB is called" << std::endl;
}
