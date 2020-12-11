#include <iostream>

int triple(int &i);

int main()
{

    int num = 1;

    std::cout << triple(num) << "\n";
    std::cout << triple(num) << "\n";
}

int triple(int &i)
{

    i = i * 3;

    return i;
}