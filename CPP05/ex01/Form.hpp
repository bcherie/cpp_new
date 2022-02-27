#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include <stdexcept>

#include "Bureaucrat.hpp"
class  Bureaucrat;

class Form
{
private:
	const std::string	f_name;
	bool		is_signed;
	const int	grd_sign;
	const int	grd_execute;
	Form();

public:
	~Form();
	Form(const std::string f_name, const int grd_sign, const int grd_execute);
	Form(const Form &obj);
	std::string getName() const;
	Form &operator=(const Form &obj);

	void beSigned(Bureaucrat &One);

	int get_gradeSign() const;
	int get_gradeExecute() const;
	bool get_isSigned() const;

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const Form &obj);

#endif
