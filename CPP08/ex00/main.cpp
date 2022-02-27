#include "easyfind.hpp"
#include <cstdlib>

#define SIZE 5
#define LOW 0
#define HIGH 11



struct Kek
{
		Kek(){};
		~Kek(){};
};

int main()
{
	std::vector<int> vect;
	// std::vector<int>::iterator it;
	// it = vect.begin();

	int num;
	for (int count = 0; count < SIZE; ++count)
	{
		num = std::rand() % SIZE;
		vect.push_back(num);
		std::cout << "vect: " << vect[count] << '\n';
	}

	// std::cout << easyfind(vect, 7) << std::endl;

	try
	{
		int elem = 3;
		std::cout << "Finding elem " << elem << " in vector" << std::endl;
		std::cout << easyfind2(vect, 3) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	// vect.clear();

	return 0;
}
