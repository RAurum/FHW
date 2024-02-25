#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double num;
	std::cout << "¬ведите число: ";
	std::cin >> num;

	int i = 0;

	while (i <= 9)
	{
		std::cout << num << " * " << i << " = " << num * i << std::endl;
		i++;
	}

	return 0;
}