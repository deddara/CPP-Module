#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "Intern.hpp"

void ex02test()
{
	Intern someRandomIntern;
	Bureaucrat bur("Bur", 10);
	Bureaucrat bur3("Bur", 1);
	Bureaucrat	bur1("Bur1", 130);
	Form 	*pres = someRandomIntern.makeForm("presidential pardon", "Bender");
	Form	*rob = someRandomIntern.makeForm("robotomy request", "Robo");
	Form	*tree = someRandomIntern.makeForm("shrubbery creation", "Tree");

	std::cout << *pres << *rob << *tree;
	std::cout << "-------------" << std::endl;
	bur.executeForm(*rob);
	bur.signForm(*rob);
	std::cout << *rob;
	bur.executeForm(*rob);
	std::cout << "-------------" << std::endl;
	bur1.signForm(*pres);
	bur.signForm(*pres);
	bur.executeForm(*pres);
	bur3.executeForm(*pres);
	std::cout << "-------------" << std::endl;
	bur.signForm(*tree);
	bur.executeForm(*tree);
	std::cout << "-------------" << std::endl;

	Form *fail = someRandomIntern.makeForm("fail","fail");
	std::cout << fail << std::endl;
	delete pres;
	delete rob;
	delete tree;
}

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
	std::cout << "-------------" << std::endl;
	Intern someRandomIntern;
}

int main()
{
//	ex01test();
	ex02test();
}