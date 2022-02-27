#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;
};
