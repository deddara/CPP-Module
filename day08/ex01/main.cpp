#include "span.hpp"
#include <iostream>

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sp1 = Span(1);
	std::cout << "(1) ----------" << std::endl;
	try {
		sp1.addNumber(0);
		std::cout << sp1.shortestSpan();
	}
	catch (std::string &ex) {
		std::cout << ex << std::endl;
	}
	std::cout << "(2) ----------" << std::endl;
	try {
		sp1.addNumber(10);
	}
	catch (std::string &ex) {
		std::cout << ex << std::endl;
	}
	std::cout << "(3) ----------" << std::endl;


	std::vector<int> vec;
	Span sp2(11000);
	for (int i = 0; i < 11000; i++)
		vec.push_back(i);
	try {
		sp2.addNumber(vec.begin(), vec.end());
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (std::string &ex) {
		std::cout << ex << std::endl;
	}
	try {
		sp2.addNumber(1);
	}
	catch (std::string &ex) {
		std::cout << ex << std::endl;
	}
}