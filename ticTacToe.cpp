#include <iostream>

int main()
{
	int x, y;
	char boaurdGame[3][3] = { {'.', '.', '.'}, {'.', '.', '.'}, {'.', '.', '.'}};

	/*
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << boaurdGame[i][j] << " | ";
		}
		std::cout << "\n";
	}

	boaurdGame[0][3] = 'X';
	std::cout << std::endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << boaurdGame[i][j] << " | ";
		}
		std::cout << "\n";
	}
	*/

	while (true)
	{
		system("cls");

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				std::cout << boaurdGame[i][j] << " | ";
			}
			std::cout << "\n";
		}

		std::cout << "Input first number: ";
		std::cin >> x;
		std::cout << "Input second number: ";
		std::cin >> y;

		if (boaurdGame[x][y] == '.')
		{
			boaurdGame[x][y] = 'X';
		}

		x, y = rand() % 3;

		if (boaurdGame[x][y] == '.')
		{
			boaurdGame[x][y] = 'O';
		}


	}

	return 0;
}