#include "ClapTrap.hpp"

int main()
{
	ClapTrap john("John Doe");
	ClapTrap chuck("Chuck Norris");
	ClapTrap foreign;
	foreign = chuck;

	john.attack("Chuck Norris");
	chuck.takeDamage(0);
	chuck.takeDamage(2);
	chuck.beRepaired(2);
	chuck.takeDamage(10);
	foreign.attack("John Doe");
	return 0;
}
