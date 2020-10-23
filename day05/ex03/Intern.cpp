# include "Intern.hpp"
# include <string>
# include <iostream>

Intern::Intern() { return ;}

Intern::~Intern() { return ; }

Intern::Intern(const Intern &cp) { *this = cp}

Intern & Intern::operator=(const Intern &sec_arg) {
	return (*this);
}

PresidentialPardonForm * Intern::new_president(std::string target) {
	return (new PresidentialPardonForm(target));
}

ShrubberyCreationForm * Intern::new_shr(std::string target) {
	return (new ShrubberyCreationForm(target));
}

RobotomyRequestForm * Intern::new_robo(std::string target) {
	return (new RobotomyRequestForm(target));
}


Form * Intern::makeForm(std::string name, std::string target) {
	typedef Form* (Intern:: *internForms)(std::string target);
	internForms interns[3] = { &Intern::new_president, &Intern::new_robo, &Intern::new_shr};
	std::string forms[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	int i = 0;
	while (i < 3)
	{
		if (name == forms[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return(this->*(interns[i]))(target));
		}
		i++;
	}
	std::cout << "Name is invalid!" <<std::endl;
}