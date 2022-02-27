#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
private:
	/* data */
public:
	WrongCat();
	WrongCat(std::string type);
	WrongCat(const WrongCat &obj);
	WrongCat &operator=(const WrongCat &obj);
	void makeSound() const;
	~WrongCat();
};

#endif
