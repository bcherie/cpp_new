#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	Form("Presidential Pardon", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor is called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor); // If not signed, throws error
	if (executor.getGrade() > get_gradeExecute())
		throw (Form::GradeTooLowException());
	std::cout <<this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
