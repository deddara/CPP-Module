#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cp) : _name(cp._name) , _grade(cp._grade) { return ; }

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &sec_arg) {
	(void)sec_arg;
	return *this;
}

int 		Bureaucrat::getGrade() const { return _grade; }

std::string const & Bureaucrat::getName() const { return _name; }

void 		Bureaucrat::decGrade() {
	_grade++;
	if (_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

void 		Bureaucrat::incGrade() {
	_grade--;
	if (_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

const char *  Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

const char *  Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}