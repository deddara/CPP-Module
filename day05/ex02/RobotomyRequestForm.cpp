# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <sstream>
#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45, target) { return ; }

RobotomyRequestForm::~RobotomyRequestForm() {return ;}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cp) : Form("RobotomyRequestForm", 72, 45, cp.getTarget()) {
	*this = cp;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &sec_arg) {
	Form::operator=(sec_arg);
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > this->getSignExec())
		throw Form::GradeTooLowException();
	else if ((this->getSigned()) == 0)
		throw Form::NotSignedException();
	std::cout << this->getTarget() << " has been robotomized successfully 50% of the time" << std::endl;
}