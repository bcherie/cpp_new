#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor is called" << std::endl;
}

Zombie::Zombie(std::string z_name)
{
	name = z_name;
}

Zombie::~Zombie()
{
	std::cout << "Destructor is called" << std::endl;
}
void Zombie::set_name(const std::string &z_name)
{
	name = z_name;
}
std::string Zombie::get_name() const
{
	return name;
}

void Zombie::announce()
{
	std::cout << this->get_name() << " BraiiiiiiinnnzzzZ..." << std::endl;
}
