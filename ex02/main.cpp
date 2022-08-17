#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;

	// ---- My tests ----
	// copy constructor & operator= tests
	Array<float>	a(5);
	for (size_t i = 0; i < 5; i++)
		a[i] = 4.2f;
	Array<float>	b;
	b = a;
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << b[i] << " ";
	}
	std::cout << std::endl;
	Array<float>	c(a);
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << c[i] << " ";
	}
	std::cout << std::endl;

	// an empty array
	Array<double>	empty;
	std::cout << "empty.size(): " << empty.size() << std::endl;

	return 0;
}
