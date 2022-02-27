#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default Constructor is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap Constructor is called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap copy constructor is called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
	if (this != &obj)
	{
		ClapTrap::operator=(obj);
	}
	return *this;
}


void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->get_name() << " in Gate" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Desstructor is called" << std::endl;
}

