#include <iostream>

template<typename T>
void swap(T &val1, T & val2)
{
	T temp;
	temp = val1;
	val1 = val2;
	val2 = temp;
}


int main(void)
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	return (0);
}
