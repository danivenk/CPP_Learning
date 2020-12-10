#include <iostream>
#include <vector>

int main()
{

    std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};

    // Add more
    grocery.push_back("Chocopaste");
    std::cout << grocery.size() << "\n";
}