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
    // rocks[0] = 0;
    // rocks[1] = 1;
    // rocks[2] = 2;
    // rocks[3] = 3;
    // rocks[4] = 4;
    // rocks[5] = 5;
    // rocks[6] = 6;
    // rocks[7] = 7;
    // rocks[8] = 8;
    // rocks[9] = 9;
    // rocks[10] = 10;
    // rocks[11] = 11;
    // rocks[12] = 12;
    // rocks[13] = 13;
}

// Top and bottom.
int allStars() {
    for (int i = 0; i <= 57; i++)cout << '*';
}

// Straight line of stars on middle line.
int lessAllStars() {
    for (int j = 0; j <= 42; j++)cout << '*';
}

// The middle line.
int middle() {
    cout << "*  13  ";
    lessAllStars();
    cout << "   6   *";
}

// Normal line without numbers.
int normStars() {
    cout << '*';
    for (int e = 0; e <= 6; e++)cout << setw(7) << '*';
    cout << setw(8) << '*';
}

// Numbers 0 through 5.
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

// Numbers 7 through 12.
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
        } else if (k == 7) {
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

//Outputs the entire board.
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

//Controls attempt.
int controls() {
    char holdNumber;
    cin >> holdNumber;
    switch (holdNumber) {
        case '0' : {


            break;
    }
}

}

//Function to number the top holds.
int blockNumbererUp() {
    for (int i = 0; i <= 5; i++) {
        cout << "Enter the value of block " << i << ":";
        cin >> rocks[i];
        if (rocks[i] < 0) {
            rocks[i] *= -1;
        }
        if (rocks[i] > 100) {
            rocks[i] %= 100;
        }
    }
}

//Function to number the bottom holds.
int blockNumbererDown() {
    for (int i = 7; i <= 12; i++) {
        cout << "Enter the value of block " << i << ":";
        cin >> rocks[i];
        if (rocks[i] < 0) {
            rocks[i] *= -1;
        }
        if (rocks[i] > 100) {
            rocks[i] %= 100;
        }
    }
}

int blockNumbererAll() {
    blockNumbererUp();
    blockNumbererDown();
}

int main() {
    rocks[0] = 4;
    initialRocks();
    entireBoard();
    //blockNumbererAll();
    controls();
    entireBoard();
    return 0;
}