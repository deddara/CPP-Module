#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

void ex01test()
{
	Bureaucrat bur("Bur", 10);
	Bureaucrat bur3("Bur", 1);
	Bureaucrat	bur1("Bur1", 130);
	PresidentialPardonForm pres("Putin");
	RobotomyRequestForm		rob("Robo");
	ShrubberyCreationForm	tree("Tree");

	std::cout << pres << rob << tree;
	std::cout << "-------------" << std::endl;
	bur.executeForm(rob);
	bur.signForm(rob);
	std::cout << rob;
	bur.executeForm(rob);
	std::cout << "-------------" << std::endl;
	bur1.signForm(pres);
	bur.signForm(pres);
	bur.executeForm(pres);
	bur3.executeForm(pres);
	std::cout << "-------------" << std::endl;
	bur.signForm(tree);
	bur.executeForm(tree);
}

int main()
{
	ex01test();
}