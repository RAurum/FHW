#include <iostream>

int main()
{
	unsigned int number;

	do 
		std::cin >> number; 
	while (number < 0);

	system("cls");

	for (int i = 0; i <= number; i++)
		std::cout << i << std::endl;


	return 0;
}