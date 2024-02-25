#include <iostream>

int main()
{
	int result = 0;

	for (int i = 1; i <= 1000; i++)
	{
		// std::cout << result << " + " << i << std::endl; // Для проверки логики 
		result = result + i;
	}

	result = result / 1000;
	std::cout << result << std::endl;
	return 0;
}