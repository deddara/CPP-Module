#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw(GradeTooHighException);
	else if (grade > 150)
		throw(GradeTooLowException);
	else
		_grade = grade;
}

const char * GradeTooHighException::what() const throw()
{
	std::cout << "Grade is too high!" << std::endl;
}

const char * GradeTooLowException::what() const throw()
{
	std::cout << "Grade is too low!" << std::endl;
}