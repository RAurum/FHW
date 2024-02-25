#include <iostream>



int main()
{
	setlocale(LC_ALL, "Russian");
	int number;
	int sum = 0; 

	std::cout << "Введите первое число: " << std::endl;
	std::cin >> number;

	for (number; number <= 500; number++)
	{
		sum = number + sum;
	}

	std::cout << "Конец цикла: " << sum << std::endl;

	return 0;
}
