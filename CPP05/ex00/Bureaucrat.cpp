#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name1, int grd1) : name(name1)
{
	std::cout << "Bureaucrat constructor is called" << std::endl;
	if (grd1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grd1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->grd = grd1;
	// grd = grd1;
}

std::string Bureaucrat::getName() const
{
	return this->name;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	// *name = obj.name;
	*this = obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj)
	{
		// this->name = obj.getName();
		this->grd = obj.getGrade();
	}
	return *this;
}

void Bureaucrat::incrGrade()
{
	if (grd < 150)
		grd += 1;
	else
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::decrGrade()
{
	if (grd > 1)
		grd -= 1;
	else
		throw Bureaucrat::GradeTooHighException();
}

int Bureaucrat::getGrade() const
{
	return this->grd;
}

//
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor is called" << std::endl;
}

// exeption
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Error: TooHighGrade";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Error: TooLowGrade";
}


std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << " bureaucrat has grade " << obj.getGrade() << ".";
	return (out);
}
