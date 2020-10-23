#include "Form.hpp"

Form::Form(std::string name, int sign_req, int sign_exec) : _name(name), _signed(0), \
_sign_req(sign_req) , _sign_exec (sign_exec){ return ;}

Form::Form(const Form &cp) :  _name(cp.name), _signed(cp._signed), _sign_exec(cp._sign_exec), \
_sign_req(cp._sign_req){return ; }

Form::~Form() {return ;}

Form & Form::operator=(const Form &sec) { (void)sec; return (*this) ;}

