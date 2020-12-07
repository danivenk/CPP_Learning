#include <iostream>

int main() {
    double height, weight, bmi;

    std::cout << "Type in your height (m): ";
    std::cin >> height;

    std::cout << "Type in your weight (kg): ";
    std::cin >> weight;

    std::cout << "Your BMI is " << weight/(height*height) << "kg/m2\n";

    return 0;
}