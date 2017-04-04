#include <iostream>

using namespace std;

int main() {
    cout << "Please enter a number between 2 and 10." << endl;
    int input;
    int sum = 0;
    cin >> input;
    if (input <= 10 && input >= 2) {
        while (input > 0) {
            if (input % 2 != 0) {
                sum += input;
                input--;
            } else {
                input--;
            }
        }
    }
    cout << sum;
    return 0;
}