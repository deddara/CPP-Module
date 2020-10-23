#ifndef  Bureaucrat_h
# define Bureaucrat_h
# include <string>

class Bureaucrat{

private:
	std::string const	_name;
	int 				_grade;
	Bureaucrat & operator=(Bureaucrat const &);
	Bureaucrat();

public:

	Bureaucrat(std::string _name, int _grade);
	Bureaucrat(Bureaucrat const &);

	std::string const & getName() const;
	int 				getGrade() const;

	void 				incGrade();
	void 				decGrade();

class GradeTooHighException : public std::exception{
public:
	virtual const char * what() const throw();
};

class GradeTooLowException : public std::exception{
	public:
		virtual const char * what() const throw();
};


};


#endif