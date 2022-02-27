#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b(Fixed( 5.05f ) * Fixed(2));
	std::cout << "a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "max: "<< Fixed::max(a, b) << std::endl;

	std::cout << "-----------------------" << std::endl;
	//my check
	std::cout << "min: " << Fixed::min(a, b) << std::endl;
	Fixed const c(Fixed(2) + Fixed(3));
	Fixed const d(Fixed(6) - Fixed(3));
	Fixed j(5);
	std::cout << "+: " << c << std::endl;
	std::cout << "-: " << d << std::endl;
	std::cout << "--j: " << --j << std::endl;
	std::cout << "j: " << j << std::endl;
	std::cout << "j--: " << j-- << std::endl;
	std::cout << "j: " << j << std::endl;
	std::cout << "a / b: " << a / b << std::endl;
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	return 0;
}
