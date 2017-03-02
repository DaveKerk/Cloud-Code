#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    for (int i = 0; i <= 14; i++) {
        if (i == 1 || i == 14) {
            cout << setw(56) << setfill('*') << '*';
        }
        if (i == 7) {
            cout << setw(2) << "* 13   ";
            cout << setw(42) << setfill('*') << '*';
            cout << setw(2) << "    6 *";
        }
        if (i == 3) {
            cout << setw(56) << setfill("**1*2*3*4*5**") << '*';
        }
        cout << endl;
    }


    return 0;
}