#include <iostream>

int main()
{
	std::string str;
	str = "HI THIS IS BRAIN";
	std::string *stringPTR;
	stringPTR = &str;
	std::string &stringREF = str;

	std::cout << str << std::endl;
	std::cout << &str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	std::cout << &stringREF << std::endl;
	std::cout << "_______________" << std::endl;
	// str2 = "hhhhh";
	// std::cout << str << std::endl;
	// std::cout << &str << std::endl;
	stringREF = "11111";
	std::cout << *stringPTR << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	std::cout << &stringREF << std::endl;
	// std::cout << "_______________" << std::endl;
	return 0;
}
