#include "Array.hpp"

int main()
{
	std::cout << "EMPTY ARR TEST" << std::endl;
	Array<char> arr;
	Array<int> arr1;
	Array<Array<char> > arr2;
	std::cout << arr.size() << std::endl;
	std::cout << arr1.size() << std::endl;
	std::cout << arr2.size() << std::endl;
	try{
		arr1[0];
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	try{
		arr2[0];
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << "-----------------" << std::endl;
	Array<double> doub(10);
	std::cout << doub.size() << std::endl;
	try{
		doub[0] = 1.3;
		std::cout << doub[0] << std::endl;
		std::cout << doub[20] << std::endl;
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << "-----------------" << std::endl << "ASSIGNATION TEST" << std::endl;
	Array<int> int_arr(10);
	std::cout << "int_arr: ";
	try {
		for (int i = 0; i < 10; i++) {
			int_arr[i] = i;
			std::cout << int_arr[i] << " ";
		}
		std::cout << std::endl;
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << "int_arr1: ";
	Array<int> int_arr1(10);
	try {
		for (int i = 0; i < 10; i++) {
			int_arr[i] = i * 2;
			std::cout << int_arr[i] << " ";
		}
		std::cout << std::endl;
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << "int_arr1 = int_arr" << std::endl;
	int_arr1 = int_arr;
	std::cout << "int_arr1: ";
	for (int i = 0; i < 10; i++) {
		std::cout << int_arr1[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "int_arr: ";
	for (int i = 0; i < 10; i++) {
		std::cout << int_arr[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "int_arr[0] = 100" << std::endl;
	int_arr[0] = 100;
	std::cout << "int_arr1: ";
	for (int i = 0; i < 10; i++) {
		std::cout << int_arr1[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "int_arr: ";
	for (int i = 0; i < 10; i++) {
		std::cout << int_arr[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "COPY TEST\n";
	Array<int> int_arr3(int_arr);
	std::cout << "int_arr3: ";
	for (int i = 0; i < 10; i++) {
		std::cout << int_arr3[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "int_arr3[0] = 500: ";
	int_arr3[0] = 500;
	for (int i = 0; i < 10; i++) {
		std::cout << int_arr3[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "int_arr: ";
	for (int i = 0; i < 10; i++) {
		std::cout << int_arr[i] << " ";
	}
	std::cout << std::endl;
}
