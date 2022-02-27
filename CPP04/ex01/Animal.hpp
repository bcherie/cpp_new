#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &obj);
	Animal &operator=(const Animal &obj);
	void set_type(std::string t);
	std::string get_type() const;
	virtual void makeSound() const;
	virtual ~Animal();
};

#endif
