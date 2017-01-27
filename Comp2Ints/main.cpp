#include <iostream>

int main() {
    std::cout << "Please give a value." << std::endl;
    int var1;
    std::cin >> var1;
    std::cout << "And another." << std::endl;
    int var2;
    std::cin >> var2;
    if (var1 == var2) {
        std::cout << "Your numbers are equal!";
    } else if (var1 > var2) {
        std::cout << "Your first number is greater!";
    } else if (var1 < var2) {
        std::cout << "Your second number is greater!";
    }
    return 0;
}