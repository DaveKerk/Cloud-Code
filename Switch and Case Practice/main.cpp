#include <iostream>

using namespace std;

int main() {
    char input;
    cout << "type a letter" << endl;
    cin >> input;
    int board[5][5]{
        20,30
    };
    switch (input) {
        case 'a':
            cout << "You pushed the A key";
            break;
        case 'w' :
            cout << "You pressed the W key";
            break;
    };
    return 0;
}