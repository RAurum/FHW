#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	int x, y;

	std::cout << "" << std::endl;
	std::cin >> x;

	std::cout << "" << std::endl;
	std::cin >> y;

	int result = x;

	if ( y == 0)
	{
		std::cout << "1"<< std::endl;
	}

	if (y == 1)
	{
		std::cout << x << std::endl;
	}

	for (int i = 2; i <= y; i++)
	{
		result *= x;
		std::cout << result << std::endl; // для проверки 
	}

	std::cout << "test " << result << std::endl;

	return 0;
}