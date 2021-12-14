#include <iostream>
#include <fstream>

int main() {
    std::ifstream fte;
    fte.open("Source/test.txt", std::ios::in);
    std::cout << "Opened?" << std::endl;
    std::cout << fte.is_open() << std::endl;
    if (fte.is_open()) {
        std::cout << "It works!" << std::endl;
    }
    return 0;
}