#include "Bureaucrat.hpp"
#include "Form.hpp"


Form::Form(const std::string name, const int g_sign, const int g_execute) : f_name(name), grd_sign(g_sign), grd_execute(g_execute)
{
	std::cout << "Form costructor" << std::endl;
	this->is_signed = false;
}

Form::~Form()
{
	std::cout << "Form destructor is called" << std::endl;
}

std::string Form::getName() const
{
	return this->f_name;
}

int Form::get_gradeSign() const
{
	return this->grd_sign;
}

int Form::get_gradeExecute() const
{
	return this->grd_execute;
}

bool Form::get_isSigned() const
{
	return is_signed;
}

void Form::beSigned(Bureaucrat &One)
{
	if (One.getGrade() > get_gradeSign())
		throw (Form::GradeTooLowException());
	is_signed = true;

}

Form::Form(const Form &obj) : f_name(obj.getName()), grd_sign(obj.get_gradeSign()), grd_execute(obj.get_gradeExecute())
{
	// *name = obj.name;
	// *this = obj;
	// this->grd_sign = obj.get_gradeSign();
	this->is_signed = obj.get_isSigned();

}

Form &Form::operator=(const Form &obj)
{
	if (this == &obj)
		return (*this);
	this->is_signed = obj.get_isSigned();
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Form &obj)
{
	out << "You must have " << obj.get_gradeSign() << " and " << obj.get_gradeExecute() << " to sign " << obj.getName() << std::endl;
	return (out);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Error: TooHighGrade";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Error: TooLowGrade";
}
