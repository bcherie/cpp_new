#include "evernever.hpp"


int main( void )
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	// std::string c = "chaine1";
	// std::string d = "chaine2";
	// ::swap(c, d);
	// std::cout << "c = " << c << ", d = " << d << std::endl;
	// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	// return 0;

	int i = max(4, 8);
	std::cout << i << '\n';

	double d = max(7.56, 21.434);
	std::cout << d << '\n';

	char ch = max('b', '9');
	std::cout << ch << '\n';

	char c = min('b', '9');
	std::cout << "min: " << c << '\n';

	// int one = 10;
	// int two = 5;
	// swap(one, two);
	// std::cout << one << '\n';
	return 0;
}
