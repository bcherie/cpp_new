#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(ClapTrap const &source);
	ClapTrap(std::string const name);
	~ClapTrap();
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName() const;
	int getHitpoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;
	ClapTrap &operator=(ClapTrap const &right);

private:
	std::string _name;
	unsigned int _hitpoints;
	unsigned int _energy_points;
	unsigned int _attack_damage;
};

#endif
