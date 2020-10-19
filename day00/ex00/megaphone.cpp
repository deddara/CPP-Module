#include <iostream>
#include <ctype.h>

int		main(int argc, char **argv){
	char	c;

	if (argc < 2){
		std::cout << "WHERE ARE MY ARGUMENTS LEBOWSKI???" << std::endl;
		return (0);
	}
	for (int i = 1; argv[i]; i++){
		for (int j = 0; argv[i][j]; j++){
			c = toupper(argv[i][j]);
			std::cout << c;
		}
	}
	std::cout << std::endl;
	return (0);
}