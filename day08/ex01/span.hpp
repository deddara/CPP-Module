#ifndef SPAN_H
# define SPAN_H
# include <vector>
# include <string>
class Span{
private:
	unsigned int const _n;
	std::vector<int>(_numbers);
public:
	Span(unsigned int n) : _n(n) { };

	void addNumber(int num);
	void addNumber(std::vector<int>::iterator &it1, std::vector<int>::iterator &it2);
};

#endif