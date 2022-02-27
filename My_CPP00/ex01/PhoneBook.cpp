#include "PhoneBook.hpp"

uint PhoneBook::i = 0;
bool PhoneBook::bookisfull = false;

PhoneBook::PhoneBook()
{
	std::cout << "Default constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Default destructor called" << std::endl;
}

void PhoneBook::add_contact(const std::string &f_name, const std::string &l_name, const std::string &number, \
		const std::string &nickname, const std::string &d_secret)
{
	data[i].set_firstname(f_name);
	data[i].set_lastname(l_name);
	data[i].set_nickname(nickname);
	data[i].set_number(number);
	data[i].set_d_secret(d_secret);
	i++;
	if (i == 8)
	{
		i = 0;
		bookisfull = true;
	}
}
void PhoneBook::output_contacts()
	{
		int j = 0;
		const int cot = bookisfull ? 8 : i;
		std::cout << "-----------" << "-----------" << "-----------" << "------------" <<  std::endl;
		std::cout << "|" << std::setw(10) << "index" << "|"  << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) \
		<< "nickname" << "|" <<  std::endl;
		std::cout << "-----------" << "-----------" << "-----------" << "------------" <<  std::endl;
		while (j < cot)
		{
			std::cout << "|" << std::setw(10) << j << "|";
			data[j].show();
			j++;
		}
	}
	void PhoneBook::output_index(int &index)
	{
			std::cout << "|" << std::setw(10) << index << "|";
			data[index].show_index();
	}
