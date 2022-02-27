#include "Contact.hpp"

// Contact::Contact()
// {
// 	std::cout << "Default constructor called" << std::endl;
// }

// Contact::~Contact()
// {
// 	std::cout << "Default destructor called" << std::endl;
// }

void Contact::set_firstname(const std::string &f)
{
	f_name = f;
}

std::string Contact::get_firstname() const
{
	return f_name;
}
void Contact::set_lastname(const std::string &f)
{
	l_name = f;
}


std::string Contact::get_lastname() const
{
	return l_name;
}
void Contact::set_number(const std::string &f)
{
	number = f;
}
std::string Contact::get_number() const
{
	return number;
}
void Contact::set_nickname(const std::string &f)
{
	nickname = f;
}
std::string Contact::get_nickname() const
{
	return nickname;
}
void Contact::set_d_secret(const std::string &f)
{
	d_secret = f;
}
std::string Contact::get_d_secret() const
{
	return d_secret;
}

void Contact::show()
{
	std::string name = get_firstname();
	std::string l_name = get_lastname();
	std::string n_name = get_nickname();
	int i = 0;
	int j = 0;
	int g = 0;
	i = ft_strlen(name);
	j = ft_strlen(l_name);
	g = ft_strlen(n_name);
	if (i > 10)
	{
		name.replace(9, 1, ".");
		name = name.substr(0, 10);
	}
	if (j > 10)
	{
		l_name.replace(9, 1, ".");
		l_name = l_name.substr(0, 10);
	}
	if (g > 10)
	{
		n_name.insert(9, ".");
		n_name = n_name.substr(0, 10);
	}
	std::cout << std::setw(10) << name << "|" << std::setw(10) << l_name
			  << "|" << std::setw(10) << n_name << "|" << std::endl;
}

void Contact::show_index()
{
	std::cout << std::setw(10) << get_firstname() << "|" << std::setw(10) << get_lastname()
			  << "|" << std::setw(10) << get_nickname() << "|" << std::setw(10) << get_number() << "|" << std::setw(10) << get_d_secret() << "|" << std::endl;
}

int Contact::ft_strlen(std::string str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}
