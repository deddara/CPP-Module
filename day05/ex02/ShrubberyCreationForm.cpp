#include "ShrubberyCreationForm.hpp"
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <sstream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137, target) { return ; }

ShrubberyCreationForm::~ShrubberyCreationForm() {return ;}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cp) : Form("ShrubberyCreationForm", 145, 137, cp.getTarget()) {
	*this = cp;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &sec_arg) {
	Form::operator=(sec_arg);
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > 137)
		throw Form::GradeTooLowException();
	else if ((this->getSigned()) == 0)
		throw Form::NotSignedException();

	std::string file;
	file = this->getTarget();
	file += "_shrubbery";
	std::string file_data = "         v\n"
							"        >X<\n"
							"         A\n"
							"        d$b\n"
							"      .d\\$$b.\n"
							"    .d$i$$\\$$b.\n"
							"       d$$@b\n"
							"      d\\$$$ib\n"
							"    .d$$$\\$$$b\n"
							"  .d$$@$$$$\\$$ib.\n"
							"      d$$i$$b\n"
							"     d\\$$$$@$b\n"
							"  .d$@$$\\$$$$$@b.\n"
							".d$$$$i$$$\\$$$$$$b.\n"
							"        ###\n"
							"        ###\n"
							"        ### \n";
	std::ofstream 		ofs(file, std::ios_base::out | std::ios_base::trunc);
	ofs << file_data;
}