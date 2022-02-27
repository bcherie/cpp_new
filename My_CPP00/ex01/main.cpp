#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook Book;
	Contact contact[8];
	std::string command;
	std::cout << "Put command: ADD | SEARCH | EXIT\n";
	while (!std::cin.eof())
	{
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			std::string f_name;
			std::string l_name;
			std::string nick_name;
			std::string number;
			std::string d_secret;
			std::cout << "Write a first name\n";
			std::getline (std::cin,f_name);
			std::cout << "Write a last name\n";
			std::getline (std::cin,l_name);
			std::cout << "Write a nick name\n";
			std::getline (std::cin, nick_name);
			std::cout << "Write a number\n";
			std::getline (std::cin, number);
			std::cout << "Write a dark secret\n";
			std::getline (std::cin, d_secret);
			if (!f_name.empty() && !l_name.empty() && !nick_name.empty() && !number.empty() && !d_secret.empty())
				Book.add_contact(f_name, l_name, number, nick_name, d_secret);
		}
		else if (command == "SEARCH")
		{
			std::string str;
			// std::string::size_type sz;
			int i = 0;
			int index = 0;
			int flag_digit = 0;
			Book.output_contacts();
			//index search

			std::cout << "Write an index" <<  std::endl;
			std::getline (std::cin, str);
			while (str[i])
			{
				if (!isdigit(str[i]))
					flag_digit = 1;
				i++;
			}
			if (flag_digit == 0)
			{
				std::istringstream(str) >> index;
				if (index > 7 || index < 0)
					break ;
				else
					Book.output_index(index);
			}
		}
		else if (command == "EXIT")
			break ;
	}
	return (0);
}
