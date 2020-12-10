#include <iostream>
#include <cmath>

// Define tenth_power() here:
int tenth_power(int num);

int main()
{

    std::cout << tenth_power(0) << "\n";
    std::cout << tenth_power(1) << "\n";
    std::cout << tenth_power(2) << "\n";
}

int tenth_power(int num)
{
    int result = num;

    for (int i = 1; i < 10; i++)
    {
        result *= num;
    }
}