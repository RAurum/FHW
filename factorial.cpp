#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int F;
	std::cout << "Введите число:" << std::endl;
	std::cin >> F;

	int i = F - 1;
	int factorial = F;

	while (i >= 1)
	{
		factorial *= i;
		i--;
	}

	std::cout <<"Факториал числа  = " << factorial << std::endl;

	return 0;
}