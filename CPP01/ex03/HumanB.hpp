#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *_Weapon;
	public:
		HumanB(std::string name);
		void attack();
		void setWeapon(Weapon _Weapon);
		~HumanB();
};

#endif
