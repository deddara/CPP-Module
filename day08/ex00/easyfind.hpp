#ifndef EASYFIND_H
# define EASYFIND_H
# include <algorithm>
#include <string>
# include <iostream>
#include <vector>
#include <cctype>

template <typename T>
typename T::iterator easyfind(T t, int num)
{
	typename T::iterator it;
	it = find(t.begin(), t.end(), num);
	if (it == t.end())
		throw std::string("Not found");
	else
		return (it);
}

#endif