#include "Conversion.hpp"


//You have to first detect the type of the literal passed as parameter, convert it from
//string to its actual type, then convert it explicitly to the three other data types.
//Lastly, display the results as shown below.
int main(int argc, char **argv)
{
	Conversion A(argv[1]);
	// (void)argv;
	if (argc != 2)
		std::cout << "No arguments" << std::endl;
	else
		A.identifier();

	return 0;
}
