#include <iostream>
#include <iomanip>

using namespace std;

//The array.
int rocks[14];

//Sets the initial count of rocks in each hold.
int initialRocks() {
    //Define each value.
    rocks[0] = 4;
    rocks[1] = 4;
    rocks[2] = 4;
    rocks[3] = 4;
    rocks[4] = 4;
    rocks[5] = 4;
    rocks[6] = 0; //Player one hold.
    rocks[7] = 4;
    rocks[8] = 4;
    rocks[9] = 4;
    rocks[10] = 4;
    rocks[11] = 4;
    rocks[12] = 4;
    rocks[13] = 0; //Player two hold.
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

int takeAllZero() {
    if (rocks[0] % 14 == 0) {
        if (rocks[rocks[0]] == 0) {
            rocks[6] += rocks[12];
            rocks[12] = 0;
        }
    } else if (rocks[0] % 5 == 0) {
        if (rocks[rocks[0]] == 0) {
            rocks[6] += rocks[7];
            rocks[7] = 0;
        }
    } else if (rocks[0] % 4 == 0) {
        if (rocks[rocks[0]] == 0) {
            rocks[6] += rocks[8];
            rocks[8] = 0;
        }
    } else if (rocks[0] % 3 == 0) {
        if (rocks[rocks[0]] == 0) {
            rocks[6] += rocks[9];
            rocks[9] = 0;
        }
    } else if (rocks[0] % 2 == 0) {
        if (rocks[rocks[0]] == 0) {
            rocks[6] += rocks[10];
            rocks[10] = 0;
        }
    } else if (rocks[0] % 1 == 0) {
        if (rocks[rocks[0]] == 0) {
            rocks[6] += rocks[11];
            rocks[11] = 0;
        }
    }
}

int takeAllOne() {
    if (rocks[1] % 14 == 0) {
        if (rocks[rocks[1] + 1] == 0) {
            rocks[6] += rocks[11];
            rocks[11] = 0;
        }
    } else if (rocks[1] % 13 == 0) {
        if (rocks[rocks[1] + 1] == 0) {
            rocks[6] += rocks[12];
            rocks[12] = 0;
        }
    } else if (rocks[1] % 4 == 0) {
        if (rocks[rocks[1] + 1] == 0) {
            rocks[6] += rocks[7];
            rocks[7] = 0;
        }
    } else if (rocks[1] % 3 == 0) {
        if (rocks[rocks[1] + 1] == 0) {
            rocks[6] += rocks[8];
            rocks[8] = 0;
        }
    } else if (rocks[1] % 2 == 0) {
        if (rocks[rocks[1] + 1] == 0) {
            rocks[6] += rocks[9];
            rocks[9] = 0;
        }
    } else if (rocks[1] % 1 == 0) {
        if (rocks[rocks[1] + 1] == 0) {
            rocks[6] += rocks[10];
            rocks[10] = 0;
        }
    }
}

int takeAllTwo() {
    if (rocks[2] % 14 == 0) {
        if (rocks[rocks[2] + 2] == 0) {
            rocks[6] += rocks[11];
            rocks[11] = 0;
        }
    } else if (rocks[2] % 13 == 0) {
        if (rocks[rocks[2] + 2] == 0) {
            rocks[6] += rocks[10];
            rocks[10] = 0;
        }

    } else if (rocks[2] % 12 == 0) {
        if (rocks[rocks[2] + 2] == 0) {
            rocks[6] += rocks[9];
            rocks[9] = 0;
        }

    } else if (rocks[2] % 3 == 0) {
        if (rocks[rocks[2] + 2] == 0) {
            rocks[6] += rocks[8];
            rocks[8] = 0;
        }
    } else if (rocks[2] % 2 == 0) {
        if (rocks[rocks[2] + 2] == 0) {
            rocks[6] += rocks[9];
            rocks[9] = 0;
        }
    } else if (rocks[2] % 1 == 0) {
        if (rocks[rocks[2] + 2] == 0) {
            rocks[6] += rocks[10];
            rocks[10] = 0;
        }
    }
}

//Controls function.
int controls() {
    //const char *12="A";
    //const char *B="11";
    //const char *C="12";

    char holdNumber;
    cin >> holdNumber;
    switch (holdNumber) {
        case '0' : {
            takeAllZero();
            while (rocks[0] > 0) {

                rocks[rocks[0]] += 1;
                rocks[0] -= 1;
            }
            //takeAllZero();
            break;
        }
        case '1' : {
            takeAllOne();
            while (rocks[1] > 0) {
                rocks[rocks[1] + 1] += 1;
                rocks[1] -= 1;
            }
            //takeAllOne();
            break;
        }
        case '2' : {
            //takeAllTwo();
            while (rocks[2] > 0) {
                rocks[rocks[2] + 2] += 1;
                rocks[2] -= 1;
            }
            takeAllTwo();
            break;
        }
        case '3' : {
            while (rocks[3] > 0) {
                rocks[rocks[3] + 3] += 1;
                rocks[3] -= 1;
            }
            break;
        }
        case '4' : {
            while (rocks[4] > 0) {
                rocks[rocks[4] + 4] += 1;
                rocks[4] -= 1;
            }
            break;
        }
        case '5' : {
            while (rocks[5] > 0) {
                rocks[rocks[5] + 5] += 1;
                rocks[5] -= 1;
            }
            break;
        }
        case '7' : {
            while (rocks[7] > 0) {
                rocks[rocks[7] + 7] += 1;
                rocks[7] -= 1;
            }
            break;
        }
        case '8' : {
            while (rocks[8] > 0) {
                rocks[rocks[8] + 8] += 1;
                rocks[8] -= 1;
            }
            break;
        }
        case '9' : {
            while (rocks[9] > 0) {
                rocks[rocks[9] + 9] += 1;
                rocks[9] -= 1;
            }
            break;
        }
        case 'A': {
            while (rocks[10] > 0) {
                rocks[rocks[10] + 10] += 1;
                rocks[10] -= 1;
            }
            break;
        }
        case 'B': {
            while (rocks[11] > 0) {
                rocks[rocks[11] + 11] += 1;
                rocks[11] -= 1;
            }
            break;
        }
        case 'C': {
            while (rocks[12] > 0) {
                rocks[rocks[12] + 12] += 1;
                rocks[12] -= 1;
            }
            break;
        }
        default: {
            cout << "Unrecognized input, please try again.";
        }
    }
}

int gameContinue() {
    while (
            rocks[0] > 0 || rocks[1] > 0 || rocks[2] > 0 || rocks[3] > 0 || rocks[4] > 0 || rocks[5] > 0 ||
            rocks[7] > 0 || rocks[8] > 0 || rocks[9] > 0 || rocks[10] > 0 || rocks[11] > 0 || rocks[12] > 0) {
        controls();
        entireBoard();
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

//Function to number all holds.
int blockNumbererAll() {
    blockNumbererUp();
    blockNumbererDown();
}

int main() {
    initialRocks();
    entireBoard();
    //blockNumbererAll();
    //controls();
    //entireBoard();
    gameContinue();
    return 0;
}