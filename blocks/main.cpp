#include <iostream>
//#include <bits/valarray_before.h>

int selector;

void octathorpeBlock() {
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 4; j++) {
            std::cout << '#';
        }
        std::cout << std::endl;
    }
}

void dashBlock() {
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 4; j++) {
            std::cout << '-';
        }
        std::cout << std::endl;
    }
}

void blockSelect() {
    if (selector == 1) {
        dashBlock();
    } else {
        octathorpeBlock();
    }
}
int main() {
    octathorpeBlock();
    dashBlock();
    octathorpeBlock();
    std::cin>>selector;
    blockSelect();
    return 0;
}