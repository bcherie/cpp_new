#include "Zombie.hpp"

int main()
{
	Zombie Tom;
	Tom.set_name("Tom");
	Zombie *Sam = newZombie("Sam");

	Tom.announce();
	Sam->announce();
	randomChump("Jack");
	delete Sam;
	return (0);
}
