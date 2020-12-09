#include <iostream>

void conduct_IT_support();

int main()
{
    // Conduct IT support
    conduct_IT_support();

    // Check in with Jen
    std::cout << "Oh hi Jen!\n";

    // Conduct IT support again...
    conduct_IT_support();

    // Check in with Roy
    std::cout << "You stole the stress machine? But that's stealing!\n";

    // Conduct IT support yet again...zzzz...
    conduct_IT_support();
}

void conduct_IT_support()
{
    std::string on_off_attempt;

    std::cout << "Hello. IT.\n";
    std::cout << "Have you tried turning it off and on again? y/n\n";
    std::cin >> on_off_attempt;
}