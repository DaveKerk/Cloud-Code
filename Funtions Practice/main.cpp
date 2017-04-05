#include <iostream>

using namespace std;

void checkHigher(int x, int y) {
    if (x > y) {
        cout << "Your first number is higher!" << endl;
    } else {
        cout << "Your second number is higher!" << endl;
    }
}

int main() {
    int a;
    int b;
    cout << "Enter your first number please." << endl;
    cin >> a;
    cout << endl << "Enter your second number please." << endl;
    cin >> b;
    checkHigher(a, b);
    return 0;
}