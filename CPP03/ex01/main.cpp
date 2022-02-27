#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
	ScavTrap Tom("Tom");
	// ScavTrap Jack("Jack");

	// ClapTrap Max;

	// Attacking and repairing cost 1 energy point each.
	Tom.attack("castle");
	// Jack.attack("castle");
	Tom.takeDamage(3);
	// // Jack.takeDamage(2);
	Tom.beRepaired(2);
	Tom.guardGate();
	//l energy points. ClapTrap can’t do anything if it has no hit points
	//or energy points left

	return 0;
}
