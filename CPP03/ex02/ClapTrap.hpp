#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>


class ClapTrap
{
protected:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &obj);
	ClapTrap &operator=(const ClapTrap &obj);
	//setters:
	void set_attackDamage(unsigned int amount);
	void set_name(std::string name);
	void set_hitPoints(unsigned int amount);
	void set_EnergyPoints(unsigned int amount);
	//getters
	int get_attackDamage() const;
	std::string get_name(void) const;
	int get_hitPoints() const;
	int get_EnergyPoints() const;
	//func
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	~ClapTrap();
};

#endif
