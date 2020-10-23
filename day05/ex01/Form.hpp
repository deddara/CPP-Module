#ifndef FORM_H
# define FORM_H
# include <string>
# include <ostream>

class Form
{
private:
	std::string const	_name;
	bool 				_signed;
	int const			_sign_req;
	int const			_sign_exec;
	Form & operator=(Form const &);
	Form();

public:
	Form(std::string name, bool signed, int sign_req, int sign_exec);
	Form(Form const &);
	~Form();

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