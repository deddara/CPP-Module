#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

class fNum{

private:
	int 	f_val;
	static const fr_bits;

public:
	fNum();
	fNum(fNum const &cpy);
	~fNum();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	fNum & operator=(fNum const & sec_arg);

};

#endif