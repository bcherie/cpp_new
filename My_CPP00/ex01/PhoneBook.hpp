#pragma once

#include "Contact.hpp"
#include <sstream>

class PhoneBook
{
	Contact data[8];
public:
	PhoneBook();
	static bool bookisfull;
	static uint i;
	~PhoneBook();

	void add_contact(const std::string &f_name, const std::string &l_name, const std::string &number, \
		const std::string &nickname, const std::string &d_secret);
	void output_contacts();
	void output_index(int &index);
};
