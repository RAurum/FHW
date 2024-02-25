#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A;
	std::cout << "¬ведите число:" << std::endl;
	std::cin >> A;

	int i = 1;

	while (i <= A)
	{
		if (A % i == 0)
			std::cout << i << std::endl;
		i++;

	}

	return 0;
}