#include <iostream>
#include <string>
#include "Base.hpp"


Base * generate(void)
{
	int num = std::rand() % 3;
	if (num == 0)
		return (new A);
	else if (num == 1)
		return (new B);
	else if (num == 2)
		return (new C);
	return (0);
}

void identify_from_pointer(Base * p)
{
	A *a = dynamic_cast<A *>(p);
	if (a != NULL)
	{
		std::cout << "A" << std::endl;
	}
	B *b = dynamic_cast<B *>(p);
	if (b != NULL)
	{
		std::cout << "B" << std::endl;
	}
	C *c = dynamic_cast<C *>(p);
	if (c != NULL)
	{
		std::cout << "C" << std::endl;
	}
}

void identify_from_reference( Base & p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		static_cast<void>(a);
	}
	catch (std::bad_cast &bc) { }
	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		static_cast<void>(b);
	}
	catch (std::bad_cast &bc) { }
	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		static_cast<void>(c);
	}
	catch (std::bad_cast &bc) { }
}

int main()
{
	std::srand(time(0));
	Base *base;

	base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	delete base;
	return (0);
}