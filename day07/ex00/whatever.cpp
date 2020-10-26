#include <iostream>

template<typename T>
void swap(T &val1, T & val2)
{
	T temp = val1;
	val1 = val2;
	val2 = temp;
}


template<typename T>
T &max(T &val1, T &val2)
{
	return (val2 >= val1 ? val2 : val1);
}

template<typename T>
T &min(T &val1, T &val2)
{
	return (val2 <= val1 ? val2 : val1);
}

class
Awesome {
public:
	Awesome( int n ) : _n( n ) {}
	bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
	int _n;
	int 	getNum(void){return _n;}
};

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
	Awesome aw(10);
	Awesome aw1(0);
	::swap(aw, aw1);
	std::cout << aw._n << std::endl;
	std::cout << aw1._n << std::endl;
	Awesome aw3 = ::min( aw, aw1 );
	std::cout << aw3.getNum() << std::endl;
	aw3 = ::max( aw, aw1 );
	std::cout << aw3.getNum();



	return 0;
}