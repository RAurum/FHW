#include <iostream>


int createRandomNumber(unsigned long int n);
void printArray(int array[]);


int main()
{
	const short int size = 10;
	int array[size];

	for (int i = 0; i < size; i++)
	{
		array[i] = createRandomNumber(10);
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

	int saveValue;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				saveValue = array[i];
				array[i] = array[j];
				array[j] = saveValue;
			}
		}

	}

	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}


	return 0;
}

int createRandomNumber(unsigned long int n)
{
	srand(time(nullptr));
	int a = rand() % n;
	return a;

}

void printArray(int array[])
{
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
}




