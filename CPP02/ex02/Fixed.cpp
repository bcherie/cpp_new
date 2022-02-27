#include "Fixed.hpp"

Fixed::Fixed()
{
	this->integer = 0;
	// std::cout << "Constructor is called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	// std::cout << "\nКонструктор копирования\n" << std::endl;
	this->integer = obj.getRawBits();
}

Fixed::Fixed(const int i)
{
	//Побитовый сдвиг влево << на 8 бит
	this->integer = i << c_int;
}

Fixed::Fixed(const float i)
{
	this->integer = (int)roundf(i * 256);
}

Fixed& Fixed::operator=(const Fixed &obj)
{
	// std::cout << "Перегруженный оператор присваивания" << std::endl
	if (this != &obj)
	{
		this->integer = obj.integer;
	}
	return *this;
}
int Fixed::getRawBits(void) const
{
	//that returns the raw value of the fixed-point value.
	// std::cout << "getRawBits member function called" << std::endl;
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
	return ((float)(this->integer)) / 256;
}

int Fixed::toInt(void) const
{
	//that converts the fixed-point value to an integer value.
	return (this->integer >> Fixed::c_int);
}

//operators:

std::ostream& operator<< (std::ostream &out, const Fixed &fixed)
{
	// std::cout << "fixad: " << fixed << std::endl;
	out << fixed.toFloat();
	return (out);
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return (this->getRawBits() > fixed.getRawBits());
	//return *this > fixed;
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (this->getRawBits() < fixed.getRawBits());
	//return *this < fixed;
}

bool Fixed::operator>=(const Fixed &fixed)
{
	return (this->getRawBits() >= fixed.getRawBits());
	//return *this >= fixed;
}

bool Fixed::operator<=(const Fixed &fixed)
{
	return (this->getRawBits() <= fixed.getRawBits());
	//return *this <= fixed;
}

bool Fixed::operator==(const Fixed &fixed)
{
	 //return !(*this < fixed) && !(*this < fixed);
	 return (this->getRawBits() == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed)
{
	return !(*this == fixed);
}

Fixed Fixed::operator+(const Fixed &fixed)
{
	Fixed	newOne;
	newOne.setRawBits(this->getRawBits() + fixed.getRawBits());
	return (newOne);
	// return *this;
}

Fixed Fixed::operator-(const Fixed &fixed)
{
	Fixed	newOne;
	newOne.setRawBits(this->getRawBits() - fixed.getRawBits());
	return (newOne);
}

Fixed Fixed::operator*(const Fixed &fixed)
{
	Fixed newOne;
	newOne.setRawBits((this->getRawBits() * fixed.getRawBits()) >> c_int);
	return (newOne);
}

Fixed Fixed::operator/(const Fixed &fixed)
{
	Fixed newOne;
	newOne.setRawBits((this->getRawBits() / fixed.getRawBits()) * 256);
	return (newOne);
}

Fixed Fixed::operator++(int)
{
	Fixed oldVal(*this);
	this->integer += 1;
	return oldVal;
}

Fixed &Fixed::operator++()
{
	this->integer += 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed oldVal(*this);
	this->setRawBits(this->getRawBits() - 1);
	return (oldVal);
}

Fixed &Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor is called" << std::endl;
}
