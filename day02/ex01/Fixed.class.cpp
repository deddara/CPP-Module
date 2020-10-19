#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

const int Fixed::fr_bits = 8;

int			Fixed::toInt() const {
	return (this->f_val >> this->fr_bits);
}

float		Fixed::toFloat() const {

	return ((float)this->f_val / (1 << this->fr_bits));
}

Fixed	&Fixed::operator=(const Fixed &sec_arg) {
	std::cout << "Assignation operator called" << std::endl;
	this->f_val = sec_arg.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const &fix)
{
	o << fix.toFloat();
	return (o);
}


void Fixed::setRawBits(const int raw) {
	this->f_val = raw;
}

int Fixed::getRawBits() const {
	return (this->f_val);
}

Fixed::Fixed(Fixed const & cpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::Fixed( int const  num) {
	std::cout << "Int constructor called" << std::endl;
	this->f_val = num << fr_bits;
}

Fixed::Fixed( float const  num) {
	std::cout << "Float constructor called" << std::endl;
	this->f_val = (int)roundf(num * (1 << this->fr_bits));
}

Fixed::Fixed( void ) : f_val(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}