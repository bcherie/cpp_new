#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	PresidentialPardonForm();

public:
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	void execute(Bureaucrat const & executor) const;
};


