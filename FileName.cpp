#include <iostream>

//bool simpleNumber(int n)
//{
//
//	if (n <= 1)
//	{
//		return false;
//	}
//	for (int i = 2; i * i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			std::cout << n << " - not simple number";
//			return false;
//		}
//	}
//	std::cout << n << " - simple number";
//	return true;
//}


/*void reverseArray(int arr[], int size)
{
	int arr2[10];
	int k = 0;
	for (int i = size - 1; i >= 0; i--)
	{
		arr2[k] = arr[i];
		std::cout << arr2[k] << " ";
		k++;
	}

}*/


int toTranslateNumber(unsigned int number, int numberSystem);

int main()
{
	/*srand(time(nullptr));
	const int size = 10;
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	reverseArray(arr, size);*/


	return 0;
}

int toTranslateNumber(unsigned int number, int numberSystem)
{
	if (numberSystem < 2 || numberSystem > 37)
	{
		return 0;
	}

	for()


}






