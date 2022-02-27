#pragma once

#include <iostream>
#include <string>
#include <cwchar>
#include <iomanip>

class Contact
{
private:
	std::string f_name;
	std::string l_name;
	std::string number;
	std::string nickname;
	std::string d_secret;

	// Contact();
public:
	// ~Contact();

	void set_firstname(const std::string &f);
	std::string get_firstname() const;

	void set_lastname(const std::string &f);
	std::string get_lastname() const;

	void set_number(const std::string &f);
	std::string get_number() const;

	void set_nickname(const std::string &f);
	std::string get_nickname() const;

	void set_d_secret(const std::string &f);
	std::string get_d_secret() const;

	int ft_strlen(std::string str);
	void show();
	void show_index();
};
