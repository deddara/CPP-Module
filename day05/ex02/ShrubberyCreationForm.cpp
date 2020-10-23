#include "ShrubberyCreationForm.hpp"
# include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(name, 145, 137) { return ; }

ShrubberyCreationForm::~ShrubberyCreationForm() {return ;}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cp) : Form() {
}