#include <iostream>
#include <iomanip>

using namespace std;

//The array.
int rocks[14];

//Sets the initial count of rocks in each hold.
void initialRocks() {
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
void allStars() {
    for (int i = 0; i <= 57; i++)cout << '*';
}

// Straight line of stars on middle line.
void lessAllStars() {
    for (int j = 0; j <= 42; j++)cout << '*';
}

// The middle line.
void middle() {
    cout << "*  13  ";
    lessAllStars();
    cout << "   6   *";
}

// Normal line without numbers.
void normStars() {
    cout << '*';
    for (int e = 0; e <= 6; e++)cout << setw(7) << '*';
    cout << setw(8) << '*';
}

// Numbers 0 through 5.
void upNum() {
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
void downNum() {
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
void scoreDisplayUp() {
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
void scoreDisplayDown() {
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
void scoreDisplayMiddle() {
    cout << '*' << setw(4) << rocks[13] << setw(3) << '*';
    for (int e = 1; e <= 6; e++)cout << setw(7) << '*';
    cout << setw(4) << rocks[6] << setw(4) << '*';
}

//Outputs the entire board.
void entireBoard() {
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

/*
    Functions that implement the "Land in a zero hold take the other's rocks" rule.
*/

void takeAllZero() {
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
    } else if (rocks[0] % 3 == 0 && rocks[0] != 6) {
        if (rocks[rocks[0]] == 0) {
            rocks[6] += rocks[9];
            rocks[9] = 0;
        }
    } else if (rocks[0] % 2 == 0 && rocks[0] != 6) {
        if (rocks[rocks[0]] == 0) {
            rocks[6] += rocks[10];
            rocks[10] = 0;
        }
    } else if (rocks[0] % 1 == 0 && rocks[0] != 6) {
        if (rocks[rocks[0]] == 0) {
            rocks[6] += rocks[11];
            rocks[11] = 0;
        }
    }
}

void takeAllOne() {
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
    } else if (rocks[1] % 1 == 0 && rocks[1] != 5) {
        if (rocks[rocks[1] + 1] == 0) {
            rocks[6] += rocks[10];
            rocks[10] = 0;
        }
    }
}

void takeAllTwo() {
    if (rocks[2] % 14 == 0) {
        if (rocks[rocks[2] + 2] == 0) {
            rocks[6] += rocks[10];
            rocks[10] = 0;
        }
    } else if (rocks[2] % 13 == 0) {
        if (rocks[rocks[2] + 2] == 0) {
            rocks[6] += rocks[11];
            rocks[11] = 0;
        }

    } else if (rocks[2] % 12 == 0) {
        if (rocks[rocks[2] + 2] == 0) {
            rocks[6] += rocks[9];
            rocks[9] = 0;
        }

    } else if (rocks[2] % 3 == 0) {
        if (rocks[rocks[2] + 2] == 0) {
            rocks[6] += rocks[7];
            rocks[7] = 0;
        }
    } else if (rocks[2] % 2 == 0 && rocks[2] != 4) {
        if (rocks[rocks[2] + 2] == 0) {
            rocks[6] += rocks[8];
            rocks[8] = 0;
        }
    } else if (rocks[2] % 1 == 0 && rocks[2] != 4) {
        if (rocks[rocks[2] + 2] == 0) {
            rocks[6] += rocks[9];
            rocks[9] = 0;
        }
    }
}

void takeAllThree() {
    if (rocks[3] % 14 == 0) {
        if (rocks[rocks[3] + 3] == 0) {
            rocks[6] += rocks[9];
            rocks[9] = 0;
        }
    } else if (rocks[3] % 13 == 0) {
        if (rocks[rocks[3] + 3] == 0) {
            rocks[6] += rocks[10];
            rocks[10] = 0;
        }

    } else if (rocks[3] % 12 == 0) {
        if (rocks[rocks[3] + 3] == 0) {
            rocks[6] += rocks[11];
            rocks[11] = 0;
        }

    } else if (rocks[3] % 11 == 0 && rocks[3] != 3) {
        if (rocks[rocks[3] + 3] == 0) {
            rocks[6] += rocks[12];
            rocks[12] = 0;
        }
    } else if (rocks[3] % 2 == 0) {
        if (rocks[rocks[3] + 3] == 0) {
            rocks[6] += rocks[7];
            rocks[7] = 0;
        }
    } else if (rocks[3] % 1 == 0 && rocks[3] != 3) {
        if (rocks[rocks[3] + 3] == 0) {
            rocks[6] += rocks[8];
            rocks[8] = 0;
        }
    }
}

void takeAllFour() {
    if (rocks[4] % 14 == 0) {
        if (rocks[rocks[4] + 4] == 0) {
            rocks[6] += rocks[8];
            rocks[8] = 0;
        }
    } else if (rocks[4] % 13 == 0) {
        if (rocks[rocks[4] + 4] == 0) {
            rocks[6] += rocks[9];
            rocks[9] = 0;
        }

    } else if (rocks[4] % 12 == 0) {
        if (rocks[rocks[4] + 4] == 0) {
            rocks[6] += rocks[10];
            rocks[10] = 0;
        }

    } else if (rocks[4] % 11 == 0) {
        if (rocks[rocks[4] + 4] == 0) {
            rocks[6] += rocks[11];
            rocks[11] = 0;
        }
    } else if (rocks[4] % 10 == 0) {
        if (rocks[rocks[4] + 4] == 0) {
            rocks[6] += rocks[12];
            rocks[12] = 0;
        }
    } else if (rocks[4] % 1 == 0 && rocks[4] != 2) {
        if (rocks[rocks[4] + 4] == 0) {
            rocks[6] += rocks[7];
            rocks[7] = 0;
        }
    }
}

void takeAllFive() {
    if (rocks[5] % 14 == 0) {
        if (rocks[rocks[5] + 5] == 0) {
            rocks[6] += rocks[7];
            rocks[7] = 0;
        }
    } else if (rocks[5] % 13 == 0) {
        if (rocks[rocks[5] + 5] == 0) {
            rocks[6] += rocks[8];
            rocks[8] = 0;
        }

    } else if (rocks[5] % 12 == 0) {
        if (rocks[rocks[5] + 5] == 0) {
            rocks[6] += rocks[9];
            rocks[9] = 0;
        }

    } else if (rocks[5] % 11 == 0) {
        if (rocks[rocks[5] + 5] == 0) {
            rocks[6] += rocks[10];
            rocks[10] = 0;
        }
    } else if (rocks[5] % 10 == 0) {
        if (rocks[rocks[5] + 5] == 0) {
            rocks[6] += rocks[11];
            rocks[11] = 0;
        }
    } else if (rocks[5] % 9 == 0) {
        if (rocks[rocks[5] + 5] == 0) {
            rocks[6] += rocks[12];
            rocks[12] = 0;
        }
    }
}

void takeAllSeven() {
    if (rocks[7] % 14 == 0) {
        if (rocks[rocks[7] + 7] == 0) {
            rocks[13] += rocks[5];
            rocks[5] = 0;
        }
    } else if (rocks[7] % 5 == 0) {
        if (rocks[rocks[7] + 7] == 0) {
            rocks[13] += rocks[0];
            rocks[0] = 0;
        }
    } else if (rocks[7] % 4 == 0) {
        if (rocks[rocks[7] + 7] == 0) {
            rocks[13] += rocks[1];
            rocks[1] = 0;
        }
    } else if (rocks[7] % 3 == 0 && rocks[7] != 6) {
        if (rocks[rocks[7] + 7] == 0) {
            rocks[13] += rocks[2];
            rocks[2] = 0;
        }
    } else if (rocks[7] % 2 == 0 && rocks[7] != 6) {
        if (rocks[rocks[7] + 7] == 0) {
            rocks[13] += rocks[3];
            rocks[3] = 0;
        }
    } else if (rocks[7] % 1 == 0 && rocks[7] != 6) {
        if (rocks[rocks[7] + 7] == 0) {
            rocks[13] += rocks[4];
            rocks[4] = 0;
        }
    }
}

void takeAllEight() {
    if (rocks[8] % 14 == 0) {
        if (rocks[rocks[8] + 8] == 0) {
            rocks[13] += rocks[4];
            rocks[4] = 0;
        }
    } else if (rocks[8] % 13 == 0) {
        if (rocks[rocks[8] + 8] == 0) {
            rocks[13] += rocks[5];
            rocks[5] = 0;
        }
    } else if (rocks[8] % 4 == 0) {
        if (rocks[rocks[8] + 8] == 0) {
            rocks[13] += rocks[0];
            rocks[0] = 0;
        }
    } else if (rocks[8] % 3 == 0) {
        if (rocks[rocks[8] + 8] == 0) {
            rocks[13] += rocks[1];
            rocks[1] = 0;
        }
    } else if (rocks[8] % 2 == 0) {
        if (rocks[rocks[8] + 8] == 0) {
            rocks[13] += rocks[2];
            rocks[2] = 0;
        }
    } else if (rocks[8] % 1 == 0 && rocks[8] != 5) {
        if (rocks[rocks[8] + 8] == 0) {
            rocks[13] += rocks[3];
            rocks[3] = 0;
        }
    }
}

void takeAllNine() {
    if (rocks[9] % 14 == 0) {
        if (rocks[rocks[9] + 9] == 0) {
            rocks[13] += rocks[3];
            rocks[3] = 0;
        }
    } else if (rocks[9] % 13 == 0) {
        if (rocks[rocks[9] + 9] == 0) {
            rocks[13] += rocks[4];
            rocks[4] = 0;
        }
    } else if (rocks[9] % 12 == 0) {
        if (rocks[rocks[9] + 9] == 0) {
            rocks[13] += rocks[5];
            rocks[5] = 0;
        }
    } else if (rocks[9] % 3 == 0) {
        if (rocks[rocks[9] + 9] == 0) {
            rocks[13] += rocks[0];
            rocks[0] = 0;
        }
    } else if (rocks[9] % 2 == 0 && rocks[9] != 4) {
        if (rocks[rocks[9] + 9] == 0) {
            rocks[13] += rocks[1];
            rocks[1] = 0;
        }
    } else if (rocks[9] % 1 == 0 && rocks[9] != 4) {
        if (rocks[rocks[9] + 9] == 0) {
            rocks[13] += rocks[2];
            rocks[2] = 0;
        }
    }
}

void takeAllTen() {
    if (rocks[10] % 14 == 0) {
        if (rocks[rocks[10] + 10] == 0) {
            rocks[13] += rocks[2];
            rocks[2] = 0;
        }
    } else if (rocks[10] % 13 == 0) {
        if (rocks[rocks[10] + 10] == 0) {
            rocks[13] += rocks[3];
            rocks[3] = 0;
        }
    } else if (rocks[10] % 12 == 0) {
        if (rocks[rocks[10] + 10] == 0) {
            rocks[13] += rocks[4];
            rocks[4] = 0;
        }
    } else if (rocks[10] % 11 == 0) {
        if (rocks[rocks[10] + 10] == 0) {
            rocks[13] += rocks[3];
            rocks[3] = 0;
        }
    } else if (rocks[10] % 2 == 0) {
        if (rocks[rocks[10] + 10] == 0) {
            rocks[13] += rocks[0];
            rocks[0] = 0;
        }
    } else if (rocks[10] % 1 == 0) {
        if (rocks[rocks[10] + 10] == 0 && rocks[10] != 3) {
            rocks[13] += rocks[1];
            rocks[1] = 0;
        }
    }
}

void takeAllEleven() {
    int l = rocks[11];
    l -= 2;
    if (rocks[11] % 14 == 0) {
        if (rocks[11] == 0) {
            rocks[13] += rocks[1];
            rocks[1] = 0;
        }
    } else if (rocks[11] % 13 == 0) {
        if (rocks[10] == 0) {
            rocks[13] += rocks[2];
            rocks[2] = 0;
        }
    } else if (rocks[11] % 12 == 0) {
        if (rocks[9] == 0) {
            rocks[13] += rocks[3];
            rocks[3] = 0;
        }
    } else if (rocks[11] % 11 == 0) {
        if (rocks[8] == 0) {
            rocks[13] += rocks[4];
            rocks[4] = 0;
        }
    } else if (rocks[11] % 10 == 0) {
        if (rocks[7] == 0) {
            rocks[13] += rocks[5];
            rocks[5] = 0;
        }
    } else if (rocks[11] % 1 == 0) {
        if (rocks[12] == 0 && rocks[11] != 2) {
            rocks[13] += rocks[0];
            rocks[0] = 0;
        }
    }
}

void takeAllTwelve() {
    if (rocks[12] % 14 == 0) {
        if (rocks[12] == 0) {
            rocks[13] += rocks[0];
            rocks[0] = 0;
        }
    } else if (rocks[12] % 13 == 0) {
        if (rocks[11] == 0) {
            rocks[13] += rocks[1];
            rocks[1] = 0;
        }
    } else if (rocks[12] % 12 == 0) {
        if (rocks[10] == 0) {
            rocks[13] += rocks[2];
            rocks[2] = 0;
        }
    } else if (rocks[12] % 12 == 0) {
        if (rocks[9] == 0) {
            rocks[13] += rocks[3];
            rocks[3] = 0;
        }
    } else if (rocks[12] % 10 == 0) {
        if (rocks[8] == 0) {
            rocks[13] += rocks[4];
            rocks[4] = 0;
        }
    } else if (rocks[12] % 9 == 0) {
        if (rocks[7] == 0) {
            rocks[13] += rocks[5];
            rocks[5] = 0;
        }
    }
}

//gameOverCheck function on the instruction sheet.
void gameOverCheck() {
    if (rocks[0] == 0 && rocks[1] == 0 && rocks[2] == 0 && rocks[3] == 0 && rocks[4] == 0 && rocks[5] == 0) {
        rocks[6] += rocks[7];
        rocks[7] = 0;
        rocks[6] += rocks[8];
        rocks[8] = 0;
        rocks[6] += rocks[9];
        rocks[9] = 0;
        rocks[6] += rocks[10];
        rocks[10] = 0;
        rocks[6] += rocks[11];
        rocks[11] = 0;
        rocks[6] += rocks[12];
        rocks[12] = 0;
    }
    if (rocks[7] == 0 && rocks[8] == 0 && rocks[9] == 0 && rocks[10] == 0 && rocks[11] == 0 && rocks[12] == 0) {
        rocks[13] += rocks[0];
        rocks[0] = 0;
        rocks[13] += rocks[1];
        rocks[1] = 0;
        rocks[13] += rocks[2];
        rocks[2] = 0;
        rocks[13] += rocks[3];
        rocks[3] = 0;
        rocks[13] += rocks[4];
        rocks[4] = 0;
        rocks[13] += rocks[5];
        rocks[5] = 0;
    }
}

//Players turn.
void playersTurn(int playerTurn) {
    cout << playerTurn;
    if (playerTurn % 2 == 0) {
        cout << "It is PLAYER TWO'S turn." << endl;
    } else {
        cout << "It is PLAYER ONE'S turn." << endl;
    }
}

//Controls function.
void controls() {
    char holdNumber;
    cin >> holdNumber;
    switch (holdNumber) {
        case '0' : {
        //   takeAllZero();
            if (rocks[0] > 13) {
                int j;
                j = rocks[0] - 13;
                while (j > 0) {
                    rocks[j - 1] += 1;
                    j -= 1;
                }
            }
            while (rocks[0] > 0) {
                rocks[rocks[0]] += 1;
                rocks[0] -= 1;
            }
            int v;
            v++;
            playersTurn(v);
            break;
        }
        case '1' : {
         //   takeAllOne();
            if (rocks[1] > 12) {
                int j;
                j = rocks[1] - 12;
                while (j > 0) {
                    rocks[j - 1] += 1;
                    j -= 1;
                }
            }
            while (rocks[1] > 0) {
                rocks[rocks[1] + 1] += 1;
                rocks[1] -= 1;
            }
            playersTurn(+1);
            break;
        }
        case '2' : {
          //  takeAllTwo();
            if (rocks[2] > 11) {
                int j;
                j = rocks[2] - 11;
                while (j > 0) {
                    rocks[j - 1] += 1;
                    j -= 1;
                }
            }
            while (rocks[2] > 0) {
                rocks[rocks[2] + 2] += 1;
                rocks[2] -= 1;
            }
            playersTurn(+1);
            break;
        }
        case '3' : {
          //  takeAllThree();
            if (rocks[3] > 10) {
                int j;
                j = rocks[3] - 10;
                while (j > 0) {
                    rocks[j - 1] += 1;
                    j -= 1;
                }
            }
            while (rocks[3] > 0) {
                rocks[rocks[3] + 3] += 1;
                rocks[3] -= 1;
            }
            playersTurn(+1);
            break;
        }
        case '4' : {
           // takeAllFour();
            if (rocks[4] > 9) {
                int j;
                j = rocks[4] - 9;
                while (j > 0) {
                    rocks[j - 1] += 1;
                    j -= 1;
                }
            }
            while (rocks[4] > 0) {
                rocks[rocks[4] + 4] += 1;
                rocks[4] -= 1;
            }
            playersTurn(+1);
            break;
        }
        case '5' : {
           // takeAllFive();
            if (rocks[5] > 8) {
                int j;
                j = rocks[5] - 8;
                while (j > 0) {
                    rocks[j - 1] += 1;
                    j -= 1;
                }
            }
            while (rocks[5] > 0) {
                rocks[rocks[5] + 5] += 1;
                rocks[5] -= 1;
            }
            playersTurn(+1);
            break;
        }
        case '7' : {
        //    takeAllSeven();
            if (rocks[7] > 6) {
                int j;
                j = rocks[7] - 6;
                while (j > 0) {
                    rocks[j - 1] += 1;
                    j -= 1;
                }
            }
            while (rocks[7] > 0) {
                rocks[rocks[7] + 7] += 1;
                rocks[7] -= 1;
            }
            playersTurn(+1);
            break;
        }
        case '8' : {
         //   takeAllEight();
            if (rocks[8] > 5) {
                int j;
                j = rocks[8] - 5;
                while (j > 0) {
                    rocks[j - 1] += 1;
                    j -= 1;
                }
            }
            while (rocks[8] > 0) {
                rocks[rocks[8] + 8] += 1;
                rocks[8] -= 1;
            }
            playersTurn(+1);
            break;
        }
        case '9' : {
         //   takeAllNine();
            if (rocks[9] > 4) {
                int j;
                j = rocks[9] - 4;
                while (j > 0) {
                    rocks[j - 1] += 1;
                    j -= 1;
                }
            }
            while (rocks[9] > 0) {
                rocks[rocks[9] + 9] += 1;
                rocks[9] -= 1;
            }
            playersTurn(+1);
            break;
        }
        case 'A': {
         //   takeAllTen();
            if (rocks[10] > 3) {
                int j;
                j = rocks[10] - 3;
                while (j > 0) {
                    rocks[j - 1] += 1;
                    j -= 1;
                }
            }
            while (rocks[10] > 0) {
                rocks[rocks[10] + 10] += 1;
                rocks[10] -= 1;
            }
            playersTurn(+1);
            break;
        }
        case 'B': {
          //  takeAllEleven();
            if (rocks[11] > 2) {
                int j;
                j = rocks[11] - 2;
                while (j > 0) {
                    rocks[j - 1] += 1;
                    j -= 1;
                }
            }
            while (rocks[11] > 0) {
                rocks[rocks[11] + 11] += 1;
                rocks[11] -= 1;
            }
            playersTurn(+1);
            break;
        }
        case 'C': {
         //   takeAllTwelve();
            if (rocks[12] > 1) {
                int j;
                j = rocks[12] - 1;
                while (j > 0) {
                    rocks[j - 1] += 1;
                    j -= 1;
                }
            }
            while (rocks[12] > 0) {
                rocks[rocks[12] + 12] += 1;
                rocks[12] -= 1;
            }
            playersTurn(+1);
            break;
        }
        default: {
            cout << "Unrecognized input, please try again.";
        }
    }
}

//Lets the game continue and declares winner at end.
void gameContinue() {
    while (
            rocks[0] > 0 || rocks[1] > 0 || rocks[2] > 0 || rocks[3] > 0 || rocks[4] > 0 || rocks[5] > 0 ||
            rocks[7] > 0 || rocks[8] > 0 || rocks[9] > 0 || rocks[10] > 0 || rocks[11] > 0 || rocks[12] > 0) {
        controls();
        entireBoard();
        gameOverCheck();
    }
    entireBoard();
    cout << "GAME FINISHED" << endl;
    cout << "PLAYER ONE SCORE: " << rocks[6] << endl;
    cout << "PLAYER TWO SCORE: " << rocks[13] << endl;
    if (rocks[6] > rocks[13]) {
        cout << "PLAYER ONE WINS!!";
    } else if (rocks[13] > rocks[6]) {
        cout << "PLAYER TWO WINS!!";
    } else if (rocks[6] == rocks[13]) {
        cout << "YOU TIED!" << endl << endl << "...how?";
    }
}

//Function to number the top holds.
void blockNumbererUp() {
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
void blockNumbererDown() {
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
void blockNumbererAll() {
    blockNumbererDown();
}

int main() {
    initialRocks();
    //blockNumbererUp();
    //blockNumbererAll();
    //blockNumbererDown();
    entireBoard();
    gameContinue();
    return 0;
}