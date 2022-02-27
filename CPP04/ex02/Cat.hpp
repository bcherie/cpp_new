#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{
private:
	Brain *atribute;
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat &obj);
	Cat &operator=(const Cat &obj);
	void makeSound() const;
	void get_ideas();
	std::string set_ideas(std::string str);
	~Cat();
};

#endif
