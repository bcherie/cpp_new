#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *newZombie = new Zombie[N];
	int i = 0;
	while (i < N)
	{
		newZombie[i].set_name(name);
		newZombie[i].announce();
		i++;
	}
	return (newZombie);
}
