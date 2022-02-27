#include "ClapTrap.hpp"


int main()
{
	ClapTrap Tom("Tom");
	ClapTrap Jack("Jack");

	// ClapTrap Max;

	// Attacking and repairing cost 1 energy point each.
	Tom.attack("castle");
	// Jack.attack("castle");
	Tom.takeDamage(3);
	// // Jack.takeDamage(2);
	Tom.beRepaired(2);
	//l energy points. ClapTrap can’t do anything if it has no hit points
	//or energy points left

	return 0;
}
