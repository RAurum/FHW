#include <iostream>

int main()
{
	int n = 20;
	int* p = &n;

	std::cout << n << std::endl;
	std::cout << p << std::endl;

	*p = 100;
	std::cout << n << std::endl;
	return 0;
}