#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	// Bureaucrat One("Max", 10);
	// Bureaucrat Second("John", 60);

	try
	{
		Bureaucrat Max("Max", 40);
		Bureaucrat KimchiBoy("KimchiBoy", 70);
		Bureaucrat Abi("Abi", 145);
		Bureaucrat Tom("Tom", 11);
		Bureaucrat Putin("Putin", 1);
		ShrubberyCreationForm Stbf("lol");
		RobotomyRequestForm Rob("Rob");
		PresidentialPardonForm Pres("Pres");
		// Form NewForm("Forma", 70, 65);
		// Form NewForm2("Forma2", 70, 65);


		// std::cout << Max << std::endl << std::endl;
		// std::cout << KimchiBoy << std::endl << std::endl;
		// std::cout << Stbf << std::endl << std::endl;
		// std::cout << Rob << std::endl << std::endl;
		// std::cout << Pres << std::endl << std::endl;
		// Max.signForm(NewForm);
		// KimchiBoy.signForm(Stbf);
		// Stbf.execute(Max);
		Tom.signForm(Pres);
		Abi.signForm(Stbf);
		Max.signForm(Rob);

		Putin.executeForm(Stbf);
		Putin.executeForm(Rob);
		Putin.executeForm(Pres);
		// Pres.execute(Tom);
	}
	catch (std::exception &e)
	{
		std::cerr << "General error occured: " << e.what() << std::endl;
	}
	return 0;
}
