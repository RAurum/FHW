#include <iostream>

int main()
{
	const int x = 3;
	const int y = 3;
	
	int a[x][y];
	int b[9];

	// ���������� �������
	for (int i = 0; i < x; i++) 
	{
		for (int j = 0; j < y; j++)
		{
			a[i][j] = rand() % 25;
			std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}
	//

	std::cout << std::endl;

	// ������� �� 2-� ������� � ����������� ������
	int k = 0;
	for (int i = 0; i < x; i++)  
	{
		for (int j = 0; j < y; j++)
		{
			b[k] = a[i][j];
			k++;
		}
	}
	//


	// �������� �� ���������� �������� � ������� 
	for (int i = 0; i < 9; i++) 
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (b[i] == b[j])
			{
				std::cout << b[i] << " ";
			}
		}
	}
	//

	return 0;
}