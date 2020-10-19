#include "Fixed.class.hpp"

fNum	&fNum::operator=(const fNum &sec_arg) {
	this->f_val = sec_arg.getRawBits();
	return *this;
}

void fNum::setRawBits(const int raw) {
	this->f_val = raw;
}

int fNum::getRawBits() const {
	return (this->f_val);
}

fNum::fNum(fNum const & cpy) {
	*this = cpy;
}

fNum::fNum( void ) : f_val(0) { return ;}

fNum::~fNum( void ) { return ;}