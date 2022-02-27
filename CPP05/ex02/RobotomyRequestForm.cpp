#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form("Robotomy Request", 72, 45)
{
	this->target = target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor); // If not signed, throws error
	if (executor.getGrade() > get_gradeExecute())
		throw (Form::GradeTooLowException());
	std::cout <<this->target << " has been robotomized successfully 50% of the time" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
