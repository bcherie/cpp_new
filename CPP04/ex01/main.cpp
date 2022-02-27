#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	// int i = 0;
	// const Animal *D[4];

	// while (i < 2)
	// {
	// 	D[i] = new Dog();
	// 	std::cout << i << std::endl;
	// 	std::cout << "Who is it? " << D[i]->get_type() << std::endl;
	// 	i++;
	// }
	// std::cout << "-----------------------------" << std::endl;
	// while (i < 4)
	// {
	// 	D[i] = new Cat();
	// 	std::cout << i << std::endl;
	// 	std::cout << "Who is it? " << D[i]->get_type() << std::endl;
	// 	i++;
	// }
	// std::cout << "-----------------------------" << std::endl;
	// for (int i = 0; i < 4; i++)
	// {
	// 	delete D[i];
	// }

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;//should not create a leak
	delete i;
	return 0;
}

