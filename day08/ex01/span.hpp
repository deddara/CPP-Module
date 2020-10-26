#ifndef SPAN_H
# define SPAN_H
# include <vector>

class Span{
private:
	unsigned int _n;
	std::vector<int>(_numbers);
public:
	Span(unsigned int n) : _n(n);

	void addNumber(int num);
};

#endif