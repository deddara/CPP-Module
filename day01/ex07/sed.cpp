#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int 	error(std::string str) {
	std::cout << str << std::endl;
	return (1);
}

std::string my_sed(std::string str, const std::string where, const std::string what) {

	int start_pos = 0;

	while((start_pos = str.find(where, start_pos)) != std::string::npos)
	{
		str.replace(start_pos, where.length(), what);
		start_pos += what.length();
	}
	return (str);
}

int main (int argc, char **argv)
{
	if (argc != 4)
		return (error("Wrong num of arguments:("));

	std::string			file_data;
	std::stringstream	buffer;
	std::ifstream		ifs(argv[1]);
	char		 		*valid = NULL;

	if (!ifs.is_open())
		return (error("Wrong file"));
	if (!(valid = strstr(argv[1], ".replace")) || strlen(valid) != 8)
		return (error("Not .replace format"));

	buffer << ifs.rdbuf(); //reading whole file
	file_data = buffer.str();	//converting to string
	file_data = my_sed(file_data, argv[2], argv[3]);

	std::ofstream 		ofs(argv[1], std::ios_base::out | std::ios_base::trunc);
	ofs << file_data;
	return (0);
}