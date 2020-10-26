#include "span.hpp"

void Span::addNumber(int num) {
	if (_numbers.size() == _n)
		throw std::string("Array is already filled");
	else
		_numbers.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator &it1, std::vector<int>::iterator &it2) {
	while(it1 != it2)
	{
		if (_numbers.size() == _n)
			throw std::string("Array is already filled");
		_numbers.push_back(*it1);
		it1++;
	}
}