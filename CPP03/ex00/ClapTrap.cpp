#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): hitPoints(5), energyPoints(7), attackDamage(5)
{
	std::cout << "Constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): hitPoints(5), energyPoints(7), attackDamage(5)
{
	this->name = name;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	//std::cout << "\nКонструктор копирования\n" << std::endl;
	this->name = obj.name;
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;
	// return *this;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->hitPoints = obj.get_hitPoints();
		this->energyPoints = obj.energyPoints;
		this->attackDamage = obj.get_attackDamage();
	}
	return *this;
	//std::cout << "Перегруженный оператор присваивания" << std::endl
}

void ClapTrap::set_attackDamage(unsigned int amount)
{
	attackDamage = amount;
}

int ClapTrap::get_attackDamage() const
{
	return (this->attackDamage);
}

// void ClapTrap::set_hitPoints(unsigned int amount)
// {
// 	this->hitPoints = amount;
// }

int ClapTrap::get_hitPoints() const
{
	return this->hitPoints;
}


void ClapTrap::attack(const std::string& target)
{
	//std::cout << this->hitPoints << std::endl;
	//std::cout << this->energyPoints << std::endl;
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		this->energyPoints--;
		std::cout << this->name << " attacks " <<
				target << ", causing " << get_attackDamage() << " points of damage!" << std::endl;
	}
	else
		std::cout << this->name << " doesn't have hit Points or energy" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->set_attackDamage(amount);
	if (get_hitPoints() > 0 && this->energyPoints > 0)
	{
		this->attackDamage--;
		// this->hitPoints--;
		std::cout << this->name << " causes damage " << get_attackDamage() << " to target" << std::endl;

	}
	else
		std::cout << this->name << " doesn't have hit Points or energy" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		this->hitPoints++;
		this->energyPoints--;
		std::cout << this->name << " repairs itself for " << amount << " and gets 1 hit Points back" << std::endl;
	}
	else
		std::cout << this->name << " doesn't have hit Points or energy" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor is called" << std::endl;
}

