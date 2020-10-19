#include "Fixed.class.hpp"
#include <iostream>

const int Fixed::fr_bits = 0;

Fixed	&Fixed::operator=(const Fixed &sec_arg) {
	std::cout << "Assignation operator called" << std::endl;
	this->f_val = sec_arg.getRawBits();
	return *this;
}

void Fixed::setRawBits(const int raw) {
	this->f_val = raw;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->f_val);
}

Fixed::Fixed(Fixed const & cpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::Fixed( void ) : f_val(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}