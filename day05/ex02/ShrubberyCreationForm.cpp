#include "ShrubberyCreationForm.hpp"
# include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137, target) { return ; }

ShrubberyCreationForm::~ShrubberyCreationForm() {return ;}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cp) : Form("ShrubberyCreationForm", 145, 137, cp.getTarget()) {
	*this = cp;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &sec_arg) {
	Form::operator=(sec_arg);
	return (*this);
}