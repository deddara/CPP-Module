#include <iostream>
#include <string>


int 	error(std::string str) {
	std::cout << str << std::endl;
	return (1);
}

int main (int argc, char **argv)
{
	if (argc != 4)
		return (error("Wrong num of arguments:("));
	return (0);
}