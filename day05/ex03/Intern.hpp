#ifndef INTERN_H
# define INTERN_H
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include <string>

class Intern{

public:
	Intern();
	Intern(Intern const &);
	~Intern();
	Intern & operator=(Intern const &);

	Form * makeForm(std::string name, std::string target);
	Form* new_robo(std::string target);
	Form * new_shr(std::string target);
	Form * new_president(std::string target);

};

#endif