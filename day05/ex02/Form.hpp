#ifndef FORM_H
# define FORM_H
# include <string>
# include <ostream>
# include "main.hpp"
# include <iostream>

class Form
{
private:
	std::string const	_name;
	bool 				_signed;
	int const			_sign_exec;
	int const			_sign_req;
	std::string 	_target;

	Form();

public:
	Form(std::string name, int sign_req, int sign_exec, std::string target);
	Form(Form const &);
	virtual ~Form();

	Form & operator=(Form const &);
	std::string			getName() const;
	bool 				getSigned() const;
	int 				getSignReq() const;
	int 				getSignExec() const;
	std::string 		getTarget() const;

	virtual void 		execute(Bureaucrat const & executor) const = 0;
	void 				beSigned(Bureaucrat &);

class GradeTooHighException : public std::exception{
public:
	virtual const char * what() const throw();
};

class GradeTooLowException : public std::exception
{
public:
	virtual const char * what() const throw();
};

class NotSignedException : public std::exception
{
public:
	virtual const char * what() const throw();
};

};

std::ostream & operator<<(std::ostream & o, Form const &);

#endif