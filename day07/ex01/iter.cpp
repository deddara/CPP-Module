#include <iostream>

template <typename T>
void iter(T *arr, size_t len, void (func)(T const &))
{
	size_t i = 0;
	while (i < len)
	{
		(func)(arr[i]);
		i++;
	}
}

template <typename U>
void func(U const &c)
{
	std::cout << c << std::endl;
	return ;
}

int main(void)
{
	char *arr = new char[5];
	for(int i = 0; i < 5; i++)
		arr[i] = '1';
	iter(arr, 5, func);

}