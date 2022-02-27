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
	//A constructor that takes a constant floating-point number as a parameter
	Fixed(const float i);
	Fixed(const Fixed &obj);
	//Перегруженный оператор присваивания:
	Fixed &operator=(const Fixed &obj);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	~Fixed();
};

// << перезагрузка оперетора
std::ostream& operator<< (std::ostream &out, const Fixed &fixed);

#endif
