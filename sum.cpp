#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A;
	int sum = 0;

	std::cout << "������� ����� ����� �� 1 �� 500: ";
	std::cin >> A;


	while (A <= 500)
	{
		sum += A;
		A++;
	}

	std::cout << "����� ����� = " << sum << std::endl;
	return 0;
}