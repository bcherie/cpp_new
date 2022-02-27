#include "Zombie.hpp"

int main()
{
	int colvo_zomb = 5;

	Zombie *zomb = zombieHorde(colvo_zomb, "Horde");

	delete[] zomb;
	return (0);
}
