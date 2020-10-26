#include "span.hpp"

void Span::addNumber(int num) {
	if (_numbers.size() == _n)
		throw std::string("Array is already filled");
	else
		_numbers.push_back(num);
}