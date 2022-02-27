#include "Karen.hpp"

int main()
{
	Karen K;
	std::string level;
	std::string command;

	std::cout << "DEBUG " << "|" << " INFO " << "|" << " WARNING " << "|" << " ERROR" << std::endl;
	while (!std::cin.eof())
	{
		std::getline(std::cin, command);
		K.complain(command);
	}
	return 0;
}
