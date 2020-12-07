#include <iostream>

int main() {

    double weight;
    int planet_uid;

    std::cout << "What is your weight on Earth? in (kg) ";
    std::cin >> weight;

    std::cout << "1: Mercury, 2: Venus, 3: Mars, 4: Jupiter, 5: Saturn, 6: Uranus, 7: Neptune\n";
    std::cout << "What is the next planet you want to fight on? ";
    std::cin >> planet_uid;

    switch (planet_uid) {
    case 1:
        weight *= .38;
        break;
    case 2:
        weight *= .91;
        break;
    case 3:
        weight *= .38;
        break;
    case 4:
        weight *= 2.34;
        break;
    case 5:
        weight *= 1.06;
        break;
    case 6:
        weight *= .92;
        break;
    case 7:
        weight *= 1.19;
        break;
    }

    std::cout << "Your weight is " << weight << "kg\nGood Luck!\n";
}