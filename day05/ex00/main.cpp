#include "Bureaucrat.hpp"
#include <iostream>


int main()
{
	try {
		Bureaucrat anton("Anton", 10);
		std::cout << anton;
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	try {
		Bureaucrat anton("Anton", 0);
		std::cout << anton;
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	try {
		Bureaucrat anton("Anton", 151);
		std::cout << anton;
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	try {
		Bureaucrat anton("Anton", 1);
		std::cout << anton;
		anton.incGrade();
		std::cout << anton;
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	try {
		Bureaucrat anton("Anton", 150);
		std::cout << anton;
		anton.decGrade();
		std::cout << anton;
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
}