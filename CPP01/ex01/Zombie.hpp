#pragma once
#include <iostream>
#include <string>
#include <iomanip>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std::string name);
		void set_name(const std::string &z_name);
		std::string get_name() const;
		void announce();
		~Zombie();
};
Zombie* zombieHorde(int N, std::string name);
