#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A;
	int sum = 0;

	std::cout << "¬ведите целое число от 1 до 500: ";
	std::cin >> A;


	while (A <= 500)
	{
		sum += A;
		A++;
	}

	std::cout << "—умма чисел = " << sum << std::endl;
	return 0;
}