#include <iostream>
#include <iomanip>

using namespace std;

int allStars() {
    for (int i = 0; i <= 57; i++)cout << '*';
}

int lessAllStars() {
    for (int j = 0; j <= 43; j++)cout << '*';
}

int middle() {
    cout << "* 13   ";
    lessAllStars();
    cout << "    6 *";
}

int normStars() {
    cout << '*';
    for (int e = 0; e <= 6; e++)cout << setw(7) << '*';
    cout << setw(8) << '*';
}

int main() {
    for (int w = 0; w <= 14; w++) {
        if (w == 1 || w == 14) {
            allStars();
        }
        if (w == 2 || w == 4 || w == 5 || w == 6 || w == 8 || w == 9 || w == 11 || w == 12 || w == 13) {
            normStars();
        }
        if (w==7){
            middle();
        }
            cout << endl;
    }
    return 0;
}