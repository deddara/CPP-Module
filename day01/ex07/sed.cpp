#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int 	error(std::string str) {
	std::cout << str << std::endl;
	return (1);
}

std::string ReplaceAll(std::string str, const std::string& from, const std::string& to) {
	size_t start_pos = 0;
	while((start_pos = str.find(from, start_pos)) != std::string::npos) {
		str.replace(start_pos, from.length(), to);
		start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
	}
	return str;
}

int main (int argc, char **argv)
{
	if (argc != 4)
		return (error("Wrong num of arguments:("));

	std::string			file_data;
	std::stringstream	buffer;
	std::ifstream		ifs(argv[1]);

	if (!ifs.is_open())
		return (error("Wrong file"));
	buffer << ifs.rdbuf(); //reading whole file
	file_data = buffer.str();	//converting to string
	file_data = ReplaceAll(file_data, argv[2], argv[3]);
	std::cout << file_data << std::endl;
	return (0);
}