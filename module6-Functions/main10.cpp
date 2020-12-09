#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num);

int main()
{

    for (int element : first_three_multiples(8))
    {
        std::cout << element << "\n";
    }
}

std::vector<int> first_three_multiples(int num)
{
    std::vector<int> result;
    for (int i = 1; i <= 3; i++)
    {
        result.push_back(i * num);
    }

    return result;
}