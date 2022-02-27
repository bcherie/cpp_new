#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	// Bureaucrat One("Max", 10);
	// Bureaucrat Second("John", 60);

	try
	{
		Bureaucrat Max("Max", 250);
		Bureaucrat KimchiBoy("KimchiBoy", 70);
		Form NewForm("Forma", 70, 65);
		Form NewForm2("Forma2", 70, 65);


		std::cout << Max << std::endl << std::endl;
		std::cout << KimchiBoy << std::endl << std::endl;
		Max.signForm(NewForm);
		KimchiBoy.signForm(NewForm2);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
