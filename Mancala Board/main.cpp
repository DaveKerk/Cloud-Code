#include <iostream>
#include <iomanip>

using namespace std;

//The array.
int rocks[14];

//MESS WITH SCORE FOR LOOPS
//Sets the initial count of rocks in each hold.
int initialRocks() {
    //Define each value.
    // rocks[0] = 4;
    // rocks[1] = 4;
    // rocks[2] = 4;
    // rocks[3] = 4;
    // rocks[4] = 4;
    // rocks[5] = 4;
    // rocks[7] = 4;
    // rocks[8] = 4;
    // rocks[9] = 4;
    // rocks[10] = 4;
    // rocks[11] = 4;
    // rocks[12] = 4;
    rocks[0] = 0;
    rocks[1] = 1;
    rocks[2] = 2;
    rocks[3] = 3;
    rocks[4] = 4;
    rocks[5] = 5;
    rocks[6] = 6;
    rocks[7] = 7;
    rocks[8] = 8;
    rocks[9] = 9;
    rocks[10] = 10;
    rocks[11] = 11;
    rocks[12] = 12;
    rocks[13] = 13;
}

// Top and Bottom
int allStars() {
    for (int i = 0; i <= 57; i++)cout << '*';
}

// Straight Line of Stars on Middle Line
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
    for (int l = 13; l >= 6; l--) {
        if (l <= 12 && l >= 7) {
            cout << setw(4) << (l) << setw(3) << '*';
        } else if (l == 13) {
            cout << setw(7) << '*';
        } else { //only the first one
            cout << setw(8) << '*';
        }
    }
}

//This will display the amount of rocks in each hold. LINE 5
int scoreDisplayUp() {
    cout << '*' << " ";
    for (int k = 0; k <= 7; k++) {
        if (k <= 6 && k >= 1) {
            cout << setw(4) << rocks[k - 1] << setw(3) << '*';
        } else if (k == 7 || k == 8) {
            cout << setw(8) << '*';
        } else { //only the first one
            cout << setw(6) << '*';
        }
    }
}

//This will display the amount of rocks in each hold. LINE 11
int scoreDisplayDown() {
    cout << '*';
    for (int l = 13; l >= 6; l--) {
        if (l <= 12 && l >= 7) {
            cout << setw(4) << rocks[l] << setw(3) << '*';
        } else if (l == 13) {
            cout << setw(7) << '*';
        } else { //only the first one
            cout << setw(8) << '*';
        }
    }
}

//This will display the amount of rocks in each hold. LINE 8
int scoreDisplayMiddle() {
    cout << '*' << setw(4) << rocks[13] << setw(3) << '*';
    for (int e = 1; e <= 6; e++)cout << setw(7) << '*';
    cout << setw(4) << rocks[6] << setw(4) << '*';
}

int entireBoard() {
    for (int w = 0; w <= 13; w++) {
        if (w == 1 || w == 13) {
            allStars();
        } else if (w == 4) {
            upNum();
        } else if (w == 5) {
            scoreDisplayUp();
        } else if (w == 7) {
            middle();
        } else if (w == 8) {
            scoreDisplayMiddle();
        } else if (w == 10) {
            downNum();
        } else if (w == 11) {
            scoreDisplayDown();
        } else if (w >= 2 && w <= 12) {
            normStars();
        }
        cout << endl;
    }
}

int controls() {
    int holdNumber;
    cin >> holdNumber;
    switch (holdNumber) {
        case '1' : {
            rocks[7]--;
            break;
        }
    }
}

int main() {
    initialRocks();
    entireBoard();
    controls();
    entireBoard();
    return 0;
}