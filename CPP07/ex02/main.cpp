#include "Array.hpp"

int main( void )
{
	int i = 3;
	int j = 0;
	// Array<int> a(i);
	int *m = new int[i];

	while (j < i)
	{
		std::cout << j << m[j] << std::endl;
		// i++;
		j++;
	}

	try
	{
		m[7];
	}
	catch (std::exception &exception)
	{
		std::cerr << "Standard exception: " << exception.what() << '\n';
	}

	delete [] m;
	return 0;
}
