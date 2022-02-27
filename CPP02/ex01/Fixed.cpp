#include "Fixed.hpp"

Fixed::Fixed()
{
	this->integer = 0;
	std::cout << "Constructor is called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "\nКонструктор копирования\n" << std::endl;
	this->integer = obj.getRawBits();
}

Fixed::Fixed(const int i)
{
	//Побитовый сдвиг влево << на 8 бит
	// std::cout << "тест"<< std::endl;
	this->integer = i << c_int;
}

Fixed::Fixed(const float i)
{
	this->integer = (int)roundf(i * 256);
}

Fixed& Fixed::operator=(const Fixed &obj)
{
	std::cout << "Перегруженный оператор присваивания" << std::endl;
	// integer = obj.integer;
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

float Fixed::toFloat(void) const
{
	//that converts the fixed-point value to a floating-point value.
	// return ((float)(this->integer)) / (float)(1 << Fixed::c_int);
	return (float)(this->integer) / 256;
}

int Fixed::toInt(void) const
{
	//that converts the fixed-point value to an integer value.
	return (this->integer >> Fixed::c_int);
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed::~Fixed()
{
	std::cout << "Destructor is called" << std::endl;
}
