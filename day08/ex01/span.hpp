#ifndef SPAN_H
# define SPAN_H
# include <vector>
# include <string>
class Span{
private:
	unsigned int _n;
	std::vector<int>(_numbers);
public:
	Span(unsigned int n) : _n(n) { };
	Span();
	Span(Span const&);
	~Span();

	Span & operator=(Span const &);

	void addNumber(int num);
	void addNumber(std::vector<int>::iterator it1, std::vector<int>::iterator it2);
	int shortestSpan(void);
	int longestSpan(void);
};

#endif