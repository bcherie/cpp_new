#include "Zombie.hpp"

// void Zombie::set_name(const std::string &z_name)
// {
// 	name = z_name;
// }
// std::string get_name() const
// {
// 	return name;
// }

void randomChump(std::string f)
{
	Zombie New;
	New.set_name(f);
	std::cout << New.get_name() << " Aaaaaaaaaa..." << std::endl;
}
