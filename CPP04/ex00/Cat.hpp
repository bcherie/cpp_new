#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
private:
	/* data */
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat &obj);
	Cat &operator=(const Cat &obj);
	void makeSound() const;
	~Cat();
};

#endif
