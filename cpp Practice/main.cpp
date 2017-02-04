#include <iostream>

int main() {
    long double sum = 0;
    int num;
    std::cout << "Enter a number!";
    std::cout << std::endl;
    std::cin >> num;
    while (num > 0) {
        sum = sum + num;
        num = num - 1;
    }
    std::cout << sum;
    std::cout << std::endl;
     //std::system("pause");
    return 0;
}