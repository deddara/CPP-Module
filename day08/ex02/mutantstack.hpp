#ifndef mutantstack_hpp
# define mutantstack_hpp
# include <vector>
# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>{

public:
	MutantStack() {}
	MutantStack(MutantStack const &cp) { *this = cp;}
	virtual ~MutantStack(){}
	MutantStack &operator=(MutantStack const &sec_arg) { (void)sec_arg; return *this;}

	class iterator {
	public:
		iterator(T *it) : _it(it) {return ;}
		iterator(iterator const &cp) { *this = cp; }
		iterator & operator=(iterator const &sec_arg) { _it = sec_arg._it; return *this;}
		virtual ~iterator() {}

		bool operator!=(iterator const &it){
			return(this->_it != it._it);
		}
		iterator & operator++(void){
			this->_it++;
			return (*this);
		}
		iterator & operator--(void){
			this->_it--;
			return (*this);
		}
		T & operator*(void){
			return (*_it);
		}
	private:
		iterator();
		T *_it;
	};

	iterator	begin(){return (iterator((&this->top() - this->size() + 1))); }

	iterator	end(){return (iterator((&this->top() + 1))); }

};

#endif