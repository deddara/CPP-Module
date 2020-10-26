#include <iostream>

template <typename T>
void iter(T *arr, size_t len, void (func)(T &))
{
	size_t i = 0;
	while (i < len)
	{
		(func)(arr[i]);
		i++;
	}
}

template <typename U>
void func(U &c)
{
	std::cout << c << std::endl;
	return ;
}

int main(void)
{
	char *arr = new char[30];
	for(int i = 0; i < 30; i++)
		arr[i] = '1';
	iter(arr, 30, func);

}