#include <iostream>

using namespace std;

void primeChecker(unsigned long prime) {
    unsigned long i = prime - 1;
    bool primeBool = true;
    while (i >= 2) {
        if (prime % i == 0) {
            primeBool = false;
            i=2;
        }
        i--;
    }
    if (primeBool == true) {
        cout << "Your number is a prime!!!" << endl;
    } else {
        cout << "Your number is not a prime!" << endl;
    }
}

int main() {
    cout << "This is a program to check if a number is a prime number." << endl;
    cout << "Are you familiar with what a prime number is?" << endl << "Y/N?" << endl;
    char response;
    cin >> response;
    if (response == 'y' || response == 'Y') {
        cout << "Excellent! We shall continue then!" << endl;
    } else {
        cout << "A prime number is a number that is only divisible by itself and the number one." << endl;
    }
    cout << "Now, enter the number that you are curious if it's a prime or not." << endl;
    long double prime;
    cin >> prime;
    primeChecker(prime);
    return 0;
}