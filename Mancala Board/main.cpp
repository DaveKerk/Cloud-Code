#include <iostream>
#include <iomanip>
using namespace std;

// Top and Bottom
int allStars() {
    for (int i = 0; i <= 57; i++)cout << '*';
}

// Straight Line on Middle Line
int lessAllStars() {
    for (int j = 0; j <= 42; j++)cout << '*';
}

// The Middle Line
int middle() {
    cout << "*  13  ";
    lessAllStars();
    cout << "   6   *";
}

// Normal Line Without Numbers
int normStars() {
    cout << '*';
    for (int e = 0; e <= 6; e++)cout << setw(7) << '*';
    cout << setw(8) << '*';
}

// Numbers 0 Through 5
int upNum() {
    cout << '*' << " ";
    for (int k = 0; k <= 7; k++) {
        if (k <= 6 && k >= 1) {
            cout << setw(4) << (k - 1) << setw(3) << '*';
        } else if (k == 7) {
            cout << setw(8) << '*';
        } else { //only the first one
            cout << setw(6) << '*';
        }
    }
}

// Numbers 7 Through 12
int downNum() {
    cout << '*';
    for (int l = 13; l >= 6; l--) {              // GO OTHER WAY WITH THIS ONE
        if (l <= 12 && l >= 7) {
            cout << setw(4) << (l) << setw(3) << '*';
        } else if (l == 13) {
            cout << setw(7) << '*';
        } else { //only the first one
            cout << setw(8) << '*';
        }
    }
}

int main() {
    for (int w = 0; w <= 13; w++) {
        if (w == 1 || w == 13) {
            allStars();
        }
        if (w == 2 || w == 3 || w == 5 || w == 6 || w == 8 || w == 9 || w == 11 || w == 12) {
            normStars();
        }
        if (w == 7) {
            middle();
        }
        if (w == 4) {
            upNum();
        }
        if (w == 10) {
            downNum();
        }
        cout << endl;
    }
    return 0;
}