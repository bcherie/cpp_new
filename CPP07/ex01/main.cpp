#include " iter.hpp"

int main( void )
{
	int mass[3] = {1, 2, 3};
	std::string s_mass[3] = {"aaa", "bbb", "ccc"};
	iter(mass, 3, funk);
	iter(s_mass, 3, funk);


	return 0;
}
