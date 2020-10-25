#include <iostream>
#include <string>

struct Data { std::string s1; int n; std::string s2; };

Data * deserialize(void * raw){
	struct Data *data = new struct Data;
	char *raw_c = static_cast<char *>(raw);

	data->s1.assign(static_cast<char*>(raw_c), 8);
	data->n = *reinterpret_cast<int*>(&raw_c[8]);
	data->s2.assign(static_cast<char*>(&raw_c[12]), 8);
	return (data);
}

void * serialize(void)
{
	std::srand(time(0));
	char *raw_arr = new char(20);
	int i = 0;
	while (i < 8)
	{
		raw_arr[i] = std::rand() % 94 + 33;
		i++;
	}
	*reinterpret_cast<int *>(&raw_arr[8]) = std::rand();
	i = 12;
	while (i < 20)
	{
		raw_arr[i] = std::rand() % 94 + 33;
		i++;
	}
	return (raw_arr);
}

int main()
{
	void *p;
	p = serialize();
	Data *data = deserialize(p);
	std::cout << data->s1 << std::endl << data->s2 << std::endl << data->n << std::endl;
	delete data;
}
