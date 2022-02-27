#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int integer;
	static const int c_int = 8;
public:
	Fixed();
	//Конструктор копирования в качестве параметра
	//принимает константную ссылку на объект класса
	//вызывается всякий раз, когда создаётся новый объект
	//и для его инициализации берётся значение существующего объекта того же типа
	//Также конструктор копирования вызывается при передаче
	//объекта в функцию или возврате из неё по значению.
	Fixed(const Fixed &obj);
	//Перегруженный оператор присваивания:
	Fixed &operator=(const Fixed &obj);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	~Fixed();
};

#endif
