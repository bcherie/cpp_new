#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form("Shrubbery creation", 145, 137)
{
	this->target = target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor); // If not signed, throws error
	if (executor.getGrade() > get_gradeExecute())
		throw (Form::GradeTooLowException());
	std::ofstream shrubbery(this->target + "_shrubbery");
	shrubbery << shrubbery_str;
	shrubbery.close();
	std::cout << "Form applied to " << this->target << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){};
