#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double N;
	double M;
	std::cout << "¬ведите первое число:" << std::endl;
	std::cin >> N;


	do
	{
		std::cout << "¬ведите второе число:" << std::endl;
		std::cin >> M;
	} while (N * N != M);

	return 0;
}