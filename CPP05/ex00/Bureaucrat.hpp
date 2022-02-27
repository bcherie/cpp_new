#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <stdexcept>

#include "Form.hpp"
class Form;

class Bureaucrat
{
private:
	const std::string name;
	int grd;
	Bureaucrat();

public:
	Bureaucrat(const std::string name, int grd);
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat &operator=(const Bureaucrat &obj);

	std::string getName() const;
	int getGrade() const;

	void signForm(Form &forma);
	void incrGrade();
	void decrGrade();
	~Bureaucrat();

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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif
