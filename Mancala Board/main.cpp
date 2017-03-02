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

int normStars(){
    cout << '*';
    for (int e =0; e<=7;e++)cout << setw(7) << '*';
}

int main() {
    allStars();
    cout << endl;
    middle();
    cout << endl;
    allStars();
    cout << endl;
    normStars();

    return 0;
}