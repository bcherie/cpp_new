#include "Bureaucrat.hpp"

int main()
{
	// Bureaucrat One("Max", 10);
	// Bureaucrat Second("John", 60);

	try
	{
		Bureaucrat One("Max", 50);
		// One.decrGrade();
		std::cout << One << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
