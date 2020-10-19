#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

class Fixed{

private:
	int 	f_val;
	static const int fr_bits;

public:
	Fixed();
	Fixed(Fixed const &cpy);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	Fixed & operator=(Fixed const & sec_arg);

};

#endif