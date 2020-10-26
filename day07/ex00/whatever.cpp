#include <iostream>

template<typename T>
void swap(T &val1, T & val2)
{
	T temp = val1;
	val1 = val2;
	val2 = temp;
}

template<typename T>
T const &max(T &val1, T &val2)
{
	return (val2 >= val1 ? val2 : val1);
}

template<typename T>
T const &min(T &val1, T &val2)
{
	return (val2 <= val1 ? val2 : val1);
}

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}