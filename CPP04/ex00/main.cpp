#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	WrongAnimal *any = new WrongCat();
	WrongCat *cat = new WrongCat();

	std::cout << j->get_type() << " " << std::endl;
	std::cout << i->get_type() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	std::cout << std::endl << "---------------------" << std::endl;
	any->makeSound();
	cat->makeSound();
	delete any;
	delete cat;
	return 0;
}

