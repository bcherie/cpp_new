#include "FragTrap.hpp"


FragTrap::FragTrap()
{
	this->set_hitPoints(100);
	this->set_EnergyPoints(100);
	this->set_attackDamage(30);
	std::cout << "FragTrap Default Constructor is called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->set_hitPoints(100);
	this->set_EnergyPoints(100);
	this->set_attackDamage(30);
	std::cout << "FragTrap name constructor is called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj) : ClapTrap(obj)
{
	std::cout << "FragTrap copy constructor is called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
{
	if (this != &obj)
	{
		FragTrap::operator=(obj);
	}
	return *this;
}


void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->get_name() << " high Fives Guys" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor is called" << std::endl;
}
