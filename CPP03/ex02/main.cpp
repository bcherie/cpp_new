#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main()
{
	FragTrap Tom("Tom");
	// ScavTrap Jack("Jack");

	// ClapTrap Max;

	// Attacking and repairing cost 1 energy point each.
	Tom.attack("castle");
	// Jack.attack("castle");
	Tom.takeDamage(3);
	// // Jack.takeDamage(2);
	Tom.beRepaired(2);
	Tom.highFivesGuys();
	std::cout << "FragTrap has hit Points " << Tom.get_hitPoints() << " and has Energy Points "<< Tom.get_EnergyPoints() << std::endl;

	//l energy points. ClapTrap can’t do anything if it has no hit points
	//or energy points left

	return 0;
}
