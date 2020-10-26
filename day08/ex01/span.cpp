#include "span.hpp"
# include <iostream>
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

int Span::longestSpan() {
	if (_n == 0 || _n == 1)
		throw std::string("Not enough numbers!");
	int max_num = *std::max_element(_numbers.begin(), _numbers.end());
	int min_num = *std::min_element(_numbers.begin(), _numbers.end());
	return max_num - min_num;
}

int Span::shortestSpan() {
	if (_n == 0 || _n == 1)
		throw std::string("Not enough numbers!");
	int min_num = *std::min_element(_numbers.begin(), _numbers.end());
	std::vector<int>::iterator begin = _numbers.begin();
	while (begin != _numbers.end()) {
		if (*begin > min_num)
			return (*begin - min_num);
		begin++;
	}
	return min_num;
}