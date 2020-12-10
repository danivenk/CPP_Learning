#include <iostream>
#include <vector>

int sum(std::vector<int> number_list);
int product(std::vector<int> number_list);

int main()
{

    std::vector<int> numbers = {2, 4, 3, 6, 1, 9};
    std::vector<int> odd;
    std::vector<int> even;

    for (int number : numbers)
    {
        if (number % 2 == 0)
        {
            even.push_back(number);
        }
        else
        {
            odd.push_back(number);
        }
    }

    std::cout << "Sum of even numbers is " << sum(even) << "\n";
    std::cout << "Product of odd numbers is " << product(odd) << "\n";
}

int sum(std::vector<int> number_list)
{
    int sum = 0;
    for (int number : number_list)
    {
        sum += number;
    }

    return sum;
}

int product(std::vector<int> number_list)
{
    int product = 1;
    for (int number : number_list)
    {
        product *= number;
    }

    return product;
}