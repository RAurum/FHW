#include <iostream>

int main()
{
	unsigned int number;

	std::cin >> number;
	system("cls");

	for (int i = 0; i <= number; i++)
		std::cout << i << std::endl;


	return 0;
}