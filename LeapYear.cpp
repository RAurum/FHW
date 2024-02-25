#include <iostream>
//EAP YEAR

int main()
{
    int year;
    std::cout << "Input year: " << std::endl;
    std::cin >> year;

    if (( year % 400 == 0 || year % 100 != 0) && year % 4 == 0 )
    {
        std::cout << "Year is leap year " << std::endl;
    }
    else
    {
        std::cout << "Year is leap year " << std::endl;
    }

    return 0;
}
