#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    if (num%2==0)
        cout << "Your number is even" << endl;
    else
        cout << "Your number is odd" << endl;
    return 0;
}