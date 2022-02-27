#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
private:
	/* data */
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &obj);
	ScavTrap &operator=(ScavTrap const &obj);
	void guardGate();
	~ScavTrap();
};

#endif
