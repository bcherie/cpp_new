#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &_Weapon) : _Weapon(_Weapon)
{
	this->name = name;
	// this->_Weapon = _Weapon;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->_Weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destructor HumanA is called" << std::endl;
}
