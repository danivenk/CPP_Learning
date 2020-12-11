#include <iostream>
#include <fstream>

int main() {

    std::ifstream file ("test.txt");

    if (!file.is_open()) {
        return 1;
    }

    return 0;
}