#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array{
private:
	T *_arr;
	unsigned int _n;
public:
	Array() :  _arr(new T[0]), _n(0){ return ; }
	Array(unsigned int n) : _arr(new T(n)), _n(n) { return; }
	~Array<T>() {
		if (_arr)
			delete [] _arr;
	};

	Array(Array<T> const &cp){
		*this = cp;
	}

	Array & operator=(Array const &sec_arg){
		if (this == &sec_arg)
			return (*this);
		if (_arr)
			delete [] _arr;
		_arr = new T[sec_arg._n];
		unsigned int i = 0;
		while (i < sec_arg._n)
		{
			_arr[i] = sec_arg._arr[i];
			i++;
		}
		_n = sec_arg._n;
		return (*this);
	}

	T	&operator[](unsigned int const i)const
	{
		if (i < 0 || i >= this->size())
			throw std::out_of_range("Out of range");
		else
			return (this->_arr[i]);
	}

	unsigned int  	size(void)const{ return _n; }
};

#endif