#include <iostream>

int main()
{
	int k, result;

	std::cin >> k;

	for (int i = 1; i <= 10; i++)
	{
		result = k * i;
		std::cout << k << " * " << i << " = " << result << std::endl; 

	}

	return 0;
}