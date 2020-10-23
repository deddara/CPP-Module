#ifndef  Bureaucrat_h
# define Bureaucrat_h
# include <string>
# include <ostream>
# include "main.hpp"

class Bureaucrat{

private:
	std::string const	_name;
	int 				_grade;
	Bureaucrat & operator=(Bureaucrat const &);
	Bureaucrat(){};

public:

	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &);
	~Bureaucrat();

	std::string const & getName() const;
	int 				getGrade() const;

	void 				incGrade();
	void 				decGrade();
	void 				signForm(Form &);
	void				executeForm(Form const & form);

	class GradeTooHighException : public std::exception{
	public:
		virtual const char * what() const throw();
};

class GradeTooLowException : public std::exception{
	public:
		virtual const char * what() const throw();
};

};

std::ostream & operator<<(std::ostream &o, Bureaucrat const &);


#endif