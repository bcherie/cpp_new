#include "Karen.hpp"

Karen::Karen()
{
	std::cout << "Constructor is called" << std::endl;

}

Karen::~Karen()
{
	std::cout << "Destructor is called" << std::endl;
}

void Karen::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Karen::info()
{
	std::cout <<  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Karen::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	void (Karen::*methods[4])(void) = {&Karen::debug,
									&Karen::info,
									&Karen::warning,
									&Karen::error};


	std::string commands[] = {"DEBUG",  "INFO", "WARNING", "ERROR"};

	int n_case = -1;
	for (int i = 0; i < 4; i++)
	{
		if (commands[i] == level)
		{
			n_case = i;
			break ;
		}
	}

	switch (n_case)
	{
	case 0:
		(this->*(methods[0]))();
		break;
	case 1:
		(this->*(methods[1]))();
		break;
	case 2:
		(this->*(methods[2]))();
		break;
	case 3:
		(this->*(methods[3]))();
		break;
	default:
		break;
	}
}

