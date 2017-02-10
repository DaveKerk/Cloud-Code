#include <iostream>
#include <iomanip>
#include <cstdlib>

int main() {
    int num1;
    int num2;
    int num3;
    int num4;
    num2 = num1;
    num3 = 0;
    std::cout << "Enter what you want to test be a Mersenne Number." << std::endl;
    std::cin >> num1;
    do {
        num2 - 1;
        num4 = num2 * num3;
        if (num4 == num1) {
            num2 = 1;
            std::cout<<"Work?";
        }


    } while (num2 > 1);


    if (num2 != 1) {
        std::cout << "Try again!";
    } else {
        std::cout << "You found a Mersenne Prime!";
        system("pause");
    }
    return 0;
}