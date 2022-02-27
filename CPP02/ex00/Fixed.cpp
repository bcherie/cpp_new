#include "Fixed.hpp"

Fixed::Fixed()
{
	this->integer = 0;
	// setRawBits(0);
	std::cout << "Constructor is called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "\nКонструктор копирования\n" << std::endl;
	this->integer = obj.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &obj)
{
	std::cout << "Перегруженный оператор присваивания" << std::endl;
	if (this != &obj)
	{
		this->integer = obj.integer;
	}
	return *this;
}

int Fixed::getRawBits(void) const
{
	//that returns the raw value of the fixed-point value.
	std::cout << "getRawBits member function called" << std::endl;
	return (this->integer);
}

void Fixed::setRawBits(int const raw)
{
	//that sets the raw value of the fixed-point number.
	this->integer = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor is called" << std::endl;
}
