#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int sign_req, int sign_exec) : _name(name), _signed(0), _sign_exec (sign_exec), _sign_req(sign_req) {
	if (sign_req > 150 || sign_exec > 150)
		throw (Form::GradeTooLowException());
	else if (sign_req < 1 || sign_exec < 1)
		throw (Form::GradeTooHighException());
}

Form::Form(const Form &cp) :  _name(cp._name), _signed(cp._signed), _sign_exec(cp._sign_exec), \
_sign_req(cp._sign_req){return ; }

Form::~Form() {return ;}

Form & Form::operator=(const Form &sec) { (void)sec; return (*this) ;}

std::string Form::getName() const { return _name; }

bool 		Form::getSigned() const { return _signed; }

int 		Form::getSignExec() const { return _sign_exec; }

int 		Form::getSignReq() const { return _sign_req; }

void 		Form::beSigned(Bureaucrat &bur) {
	if (bur.getGrade() > _sign_req)
		throw(Form::GradeTooLowException());
	else
		_signed = 1;
}

std::ostream &operator<<(std::ostream &o, Form const &form)
{
	o << form.getName() << " requires: " << form.getSignExec() << " for execution. " \
	<< form.getSignReq() << " for signing. Status: ";
	if (form.getSigned() == 0)
		o << "not signed" << std::endl;
	else
		o << "is signed" << std::endl;
	return (o);
}

const char * Form::GradeTooHighException::what() const throw() {
		return "Grade is too high!";
}

const char * Form::GradeTooLowException::what() const throw() {
	return "Grade is too low!";
}