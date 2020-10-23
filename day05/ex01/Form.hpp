#ifndef FORM_H
# define FORM_H
# include <string>
# include <ostream>
# include "main.hpp"

class Form
{
private:
	std::string const	_name;
	bool 				_signed;
	int const			_sign_exec;
	int const			_sign_req;
	Form & operator=(Form const &);
	Form();

public:
	Form(std::string name, int sign_req, int sign_exec);
	Form(Form const &);
	~Form();

	std::string			getName() const;
	bool 				getSigned() const;
	int 				getSignReq() const;
	int 				getSignExec() const;

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

};

std::ostream & operator<<(std::ostream & o, Form const &);

#endif