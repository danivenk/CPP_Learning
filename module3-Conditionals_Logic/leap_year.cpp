#include <iostream>

int main()
{

    int year;

    std::cout << "What year do you like to check? ";
    std::cin >> year;

    bool leap_year = year >= 1000 && year % 4 == 0 || !(year % 400 == 0 && year % 100 == 0) || year % 400 == 0;

    if (leap_year)
    {
        std::cout << year << " was a leap year\n";
    }
    else
    {
        std::cout << year << " was not a leap year\n";
    }
}