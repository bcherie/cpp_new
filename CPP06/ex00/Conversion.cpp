#include "Conversion.hpp"

Conversion::Conversion(std::string arg)
{
	std::cout << "Conversion Constructor called" << std::endl;
	this->str = arg;
}

void Conversion::identifier()
{
	char c;
	int integ = 0;
	float fl;
	double doub;
	int i = 0;
	int j = 0;
	const char *a;
	int flag_dot = 0;
	int flag_float = 0;
	int flag_min = 0;
	int index = 0;

	i = str.length();
	std::cout << i << std::endl;

	while (j < i)
	{
		if (str[j] == '.')
			flag_dot = 1;
		if(str[j + 1] == 'f')
			flag_float = 1;
		if (str[j] == '-')
		{
			flag_min = 1;
			index = j;
			str = str.substr(index + 1, i);
		}
		j++;
	}
	j = 0;
	if (flag_dot == 1)
	{
		if (i == 1 && str[j] == '.')
			std::cout << "it's only dot" << std::endl;
		//float
		if((flag_float == 1 && i > 2))
		{
			fl = std::stof(str);
			if (flag_min == 1)
					fl *= -1;
			converter_float(fl);
		}
		//double
		if (flag_float == 0)
		{
			while (this->str[j] <= '9' && this->str[j] >= '0')
			{
				//std::stod() string to double
				std::stringstream ss(str);
				ss >> doub;
				if (flag_min == 1)
					doub *= -1;
				// std::cout << "double: " << doub << std::endl;
				converter_double(doub);
				break ;
			}
		}
	}
	j = 0;
	//int
	if (flag_dot != 1)
	{
		while (this->str[j] <= '9' && this->str[j] >= '0')
		{
			a = &str[j];
			integ = atoi(a);
			if (flag_min == 1)
				integ *= -1;
			std::cout << "int: " << integ << std::endl;
			converter_int(integ);
			break ;
		}
	}
	if ((str[j] >= 33 && str[j] < 127) && !isdigit(str[j]))
	{
		if (str == "nanf" || str == "-inff" || str == "+inff")
		{
			if (str == "nanf")
				{
				std::cout << "float: nanf" << std::endl;
				std::cout << "double: nan" << std::endl;
				std::cout << "int: impossible" << std::endl;
				std::cout << "char: impossible" << std::endl;
				}
		}
		else if (i == 1)
		{
			c = str[j];
			converter_char(str[j]);
		}
		else
			std::cout << "Not valid simbol" << std::endl;
	}
	// if (str == "nanf" || str == "-inff" || str == "+inff")
	// {
	// 	if (str == "nanf")
	// 	{
	// 		std::cout << "float: nanf" << std::endl;
	// 		std::cout << "double: nan" << std::endl;
	// 		std::cout << "int: impossible" << std::endl;
	// 		std::cout << "char: impossible" << std::endl;
	// 	}
	// }
}

void Conversion::converter_double(double i)
{
	//convertation
	int j = 0;
	float f = 0.0;
	double tmp = 0.0;
	double tmp1;
	double p = 0.0;
	char c;
	int integ = 0;

	//double print
	tmp1 = modf(i, &p);
	std::cout << "double: " << i << (tmp1 == 0 ? ".0" : "") << std::endl;

	//double to  int
	j = round(i);
	std::cout << "int: " << j << std::endl;

	//double to float
	// 5.06, p = 0.06
	tmp = modf(i, &p);
	f = static_cast<float>(i);
	std::cout << "float: " << f << (tmp == 0 ? ".0f" : "f") << std::endl;

	//double to char
	integ = roundf(i);
	if (integ == 0)
		std::cout << "char: Non displayable" << std::endl;
	else if (integ < 0)
		std::cout << "char: impossible" << std::endl;
	else
	{
		c = integ;
		std::cout << "char: " << &c << std::endl;
	}
}


void Conversion::converter_int(int i)
{
	double d;
	float f;
	char c;
	//как обработать мин и макс значние?
	//int to double
	d = double(i);
	std::cout << "double: " << d << ".0" << std::endl;
	//int to float
	f = float(i);
	std::cout << "float: " << d << ".0f" << std::endl;
	//int to char
	if (i == 0)
		std::cout << "char: Non displayable" << std::endl;
	else if (i < 0)
		std::cout << "char: impossible" << std::endl;
	else
	{
		c = i;
		std::cout << "char: " << c << std::endl;
	}
}

void Conversion::converter_float(float i)
{
	float tmp;
	double tmp1;
	double d;
	float p;
	int integ;
	char c;

	//print float
	tmp = modf(i, &p);
	std::cout << "float: " << i << (tmp == 0 ? ".0f" : "f") << std::endl;

	//float to double
	tmp = modf(i, &p);
	tmp1 = double(tmp);
	d = static_cast<double>(i);
	std::cout << "double: " << d << (tmp1 == 0 ? ".0" : "") << std::endl;

	//float to int
	integ = roundf(i);
	std::cout << "int: " << integ << std::endl;

	//float to char
	// integ = roundf(i);
	if (i == 0)
		std::cout << "char: Non displayable" << std::endl;
	else if (i < 0)
		std::cout << "char: impossible" << std::endl;
	else
	{
		c = integ;
		std::cout << "char: " << c << std::endl;
	}
}

void Conversion::converter_char(char c)
{
	int i;
	double d;
	float f;

	//print char
	std::cout << "char: " << c << std::endl;

	//char to int
	i = c;
	std::cout << "int: " << i << std::endl;
	//char to float
	f = c;
	std::cout << "float: " << f << std::endl;

	//char to double
	d = c;
	std::cout << "double: " << d << std::endl;
}

Conversion::~Conversion()
{
	std::cout << "Conversion Destructor called" << std::endl;
}
