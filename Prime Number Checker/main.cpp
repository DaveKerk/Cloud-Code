#include <iostream>

using namespace std;

void primeChecker(int prime) {
    for (int i = 2; i <= prime; i++) {
        if (prime % i == 0) {
            cout << "Your number is a prime!";
            break;
        }
    }
}

int main() {
    cout << "This is a program to check if a number is a prime number." << endl;
    cout << "Are you familiar with what a prime number is?" << endl << "Y/N?" << endl;
    bool responseBool = true;
    string response;
    cin >> response;
    if (response != "y" || response != "Y") {
        responseBool=false;
    }
    if (responseBool == true) {
        cout << "Excellent! We shall continue then!" << endl;
    } else {
        cout << "A prime number is a number that is only divisible by itself and the number one." << endl;
    }
    cout << "Now, enter the number that you are curious if it's a prime or not." << endl;
    int prime;
    cin >> prime;
    primeChecker(prime);
    return 0;
}