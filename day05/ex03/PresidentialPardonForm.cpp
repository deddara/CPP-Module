# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <sstream>
# include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm ", 25, 5, target) { return ; }

PresidentialPardonForm::~PresidentialPardonForm() {return ;}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cp) : Form("PresidentialPardonForm ", 25, 5, cp.getTarget()) {
	*this = cp;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &sec_arg) {
	Form::operator=(sec_arg);
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > this->getSignExec())
		throw Form::GradeTooLowException();
	else if ((this->getSigned()) == 0)
		throw Form::NotSignedException();
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}