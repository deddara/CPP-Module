#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int 	error(std::string str) {
	std::cout << str << std::endl;
	return (1);
}

int main (int argc, char **argv)
{
	if (argc != 4)
		return (error("Wrong num of arguments:("));
	std::string file_data;
	std::stringstream buffer;

	std::ifstream ifs(argv[1]);
	if (!ifs.is_open())
		return (error("Wrong file"));
	buffer << ifs.rdbuf();
	file_data = buffer.str();
	std::cout << file_data << std::endl;
	return (0);
}