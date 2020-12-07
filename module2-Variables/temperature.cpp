#include <iostream>

double F_to_C(double F)
{
    return (F - 32) / 1.8;
}

int main() {

    double tempf;

    std::cout << "What temperature is it? ";
    std::cin >> tempf;
    
    std::cout << "This corresponds to " << F_to_C(tempf) << "C\n";

    return 0;
}