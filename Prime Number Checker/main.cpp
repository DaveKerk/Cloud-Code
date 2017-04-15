#include <iostream>

using namespace std;

bool primeChecker(unsigned long long prime) {
    unsigned long long i = (prime/2) - 1;
    bool primeBool = true;
    while (i >= 2) {
        if (prime % i == 0) {
            primeBool = false;
            break;
        }
        i--;
    }
    return !primeBool;
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
    unsigned long long prime;
    cin >> prime;

    if (primeChecker(prime)) {
        cout << "Your number is a prime!!!" << endl;
    } else {
        cout << "Your number is not a prime!" << endl;
    }
    return 0;
}