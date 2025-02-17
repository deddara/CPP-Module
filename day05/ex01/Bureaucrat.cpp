#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cp) : _name(cp._name) , _grade(cp._grade) { return ; }

Bureaucrat::~Bureaucrat() { return ; }

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

void 		Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception &ex) {
		std::cout << _name << " cannot sign " << form.getName() << " because " << ex.what() << std::endl;
	}
}

std::ostream & operator<<(std::ostream &o, Bureaucrat const & bur)
{
	o << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl;
	return (o);
}