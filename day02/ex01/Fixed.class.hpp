#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

# include <iostream>

class Fixed{

private:
	int 	f_val;
	static const int fr_bits;

public:
	Fixed();
	Fixed(Fixed const &cpy);
	Fixed(const int num);
	Fixed(const float num);
	~Fixed();

	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	Fixed & operator=(Fixed const & sec_arg);

};

std::ostream & operator<<( std::ostream & o, Fixed const & fix);


#endif