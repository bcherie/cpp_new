#pragma once

#include "Form.hpp"
#include <iostream>

const std::string shrubbery_str =
std::string("                    .o00o\n") + \
std::string("                   o000000oo\n") + \
std::string("                  00000000000o\n") + \
std::string("                 00000000000000\n") + \
std::string("              oooooo  00000000  o88o\n") + \
std::string("           ooOOOOOOOoo  ```''  888888\n") + \
std::string("         OOOOOOOOOOOO'.qQQQQq. `8888'\n") + \
std::string("        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n") + \
std::string("        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n") + \
std::string("         OOOOOOOOO QQQQQQQQQQ/ /QQ\n") + \
std::string("           OOOOOOOOO `QQQQQQ/ /QQ'\n") + \
std::string("             OO:F_P:O `QQQ/  /Q'\n") + \
std::string("                \\. \\ |  // |\n") + \
std::string("                d\\ \\\\|_////\n") + \
std::string("                qP| \\ _' `|Ob\n") + \
std::string("                   \\  / \\  \\Op\n") + \
std::string("                   |  | O| |\n") + \
std::string("           _       /\\. \\_/ /\n") + \
std::string("            `---__/|_\\   //|  __\n") + \
std::string("                  `-'  `-'`-'-'\n")
;


class ShrubberyCreationForm : public Form
{
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();

	void execute(Bureaucrat const & executor) const;
};

