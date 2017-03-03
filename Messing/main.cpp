#include <iostream>
int selector;

int octathorpeBlock() {
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 4; j++) {
            std::cout << '#';
        }
        std::cout << std::endl;
    }
}

int dashBlock() {
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 4; j++) {
            std::cout << '-';
        }
        std::cout << std::endl;
    }
}

int blockSelect(){
    if(selector==1){
        dashBlock();
    } else {
        octathorpeBlock();
    }
}

int outBoard(){

}

int main() {
    octathorpeBlock();
    dashBlock();
    octathorpeBlock();
    std::cin>>selector;
    blockSelect();
    outBoard();
}