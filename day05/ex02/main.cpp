#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
int main()
{
//	try {
//		Bureaucrat anton("Anton", 10);
//		std::cout << anton;
//	}
//	catch (std::exception &ex) {
//		std::cout << ex.what() << std::endl;
//	}
//	try {
//		Bureaucrat anton("Anton", 0);
//		std::cout << anton;
//	}
//	catch (std::exception &ex) {
//		std::cout << ex.what() << std::endl;
//	}
//	try {
//		Bureaucrat anton("Anton", 151);
//		std::cout << anton;
//	}
//	catch (std::exception &ex) {
//		std::cout << ex.what() << std::endl;
//	}
//	try {
//		Bureaucrat anton("Anton", 1);
//		std::cout << anton;
//		anton.incGrade();
//		std::cout << anton;
//	}
//	catch (std::exception &ex) {
//		std::cout << ex.what() << std::endl;
//	}
//	try {
//		Bureaucrat anton("Anton", 150);
//		std::cout << anton;
//		anton.decGrade();
//		std::cout << anton;
//	}
//	catch (std::exception &ex) {
//		std::cout << ex.what() << std::endl;
//	}
//	std::cout << "------------------------------" << std::endl;
//	try {
//		Bureaucrat Andrej("Andre", 15);
//		Form form("Form", 20, 30);
//		Andrej.signForm(form);
//	}
//	catch (std::exception &ex) {
//		std::cout << ex.what() << std::endl;
//	}
//	try {
//		Bureaucrat Andrej("Andre", 15);
//		Form form("Form", 151, 30);
//		Andrej.signForm(form);
//	}
//	catch (std::exception &ex) {
//		std::cout << ex.what() << std::endl;
//	}
//	try {
//		Bureaucrat Andrej("Andre", 15);
//		Form form("Form", 0, 30);
//		Andrej.signForm(form);
//	}
//	catch (std::exception &ex) {
//		std::cout << ex.what() << std::endl;
//	}
//	try {
//		Bureaucrat Andrej("Andre", 15);
//		Form form("Form", 14, 30);
//		Andrej.signForm(form);
//	}
//	catch (std::exception &ex) {
//		std::cout << ex.what() << std::endl;
//	}
try {
		Bureaucrat Andrej("Andre", 15);
		ShrubberyCreationForm form("les");
		Andrej.signForm(form);
		form.execute(Andrej);

}
catch (std::exception &ex) {
	std::cout << ex.what() << std::endl;
}
}