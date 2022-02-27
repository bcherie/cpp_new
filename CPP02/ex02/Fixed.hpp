#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int integer;
	static const int c_int = 8;
public:
	Fixed();
	Fixed(const int i);
	//A constructor that takes a constant floating-point number as a parameter?
	Fixed(const float i);
	Fixed(const Fixed &obj);
	//Перегруженный оператор присваивания:
	Fixed &operator=(const Fixed &obj);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	bool operator>(const Fixed &fixed) const;
	bool operator<(const Fixed &fixed) const;
	bool operator>=(const Fixed &fixed);
	bool operator<=(const Fixed &fixed);
	bool operator==(const Fixed &fixed);
	bool operator!=(const Fixed &fixed);
	Fixed operator+(const Fixed &fixed);
	Fixed operator-(const Fixed &fixed);
	Fixed operator*(const Fixed &fixed);
	Fixed operator/(const Fixed &fixed);
	Fixed operator++(int);
	Fixed operator--(int);
	Fixed &operator--();
	Fixed &operator++();

	static Fixed min(const Fixed &a, const Fixed &b);
	static Fixed max(const Fixed &a, const Fixed &b);
	static Fixed min(Fixed &a, Fixed &b);
	static Fixed max(Fixed &a, Fixed &b);
	~Fixed();
};

// << перезагрузка оперетора
std::ostream& operator<< (std::ostream &out, const Fixed &fixed);
#endif
