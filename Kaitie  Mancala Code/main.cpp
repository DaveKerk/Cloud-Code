//Mancala9.
//cpp
//        DETAILS
//ACTIVITY
//        Mancala9
//.
//cpp
//        Sharing
//Info
//
//        D
//General Info
//Type
//        Text
//Size
//6 KB (5,680 bytes)
//Storage used
//0
//bytesOwned by
//someone else
//Location
//        mancala
//Owner
//        Kaitie
//Wood
//        Modified
//Mar 13, 2017
//by Kaitie
//Wood
//        Opened
//6:30
//PM by
//me
//        Created
//Mar 13, 2017
//Description
//        Add
//a description
//Download permissions
//Viewers can
//download
//        All
//selections cleared
//All selections
//cleared All
//selections cleared

#include <iostream>
#include <iomanip>

using namespace std;

void dropBeads(int[], int, int &);

void makeSolidLine(int);

void makeDottedLine(void);

void showBoard(int[]);

void showTopRowNumbers(void);

void showBottomRowNumbers(void);

void startingArray(int[]);

void showTopBins(int[]);

void showBottomBins(int[]);

int gameOverCheck(int[]);

void printArray(int arg[]);

void getStartingBin(int[], int, int &);


void playGame(int[]);

int main() {
    int beadArray[14];
    startingArray(beadArray);
    playGame(beadArray);
}

void playGame(int binBeads[]) {
    int bin = 0;
    int player = 1;
    int winner = -1;
    while (winner == -1) {
        cout << "This is the board at the start of the turn for player " << player << " to go...\n\n";
        showBoard(binBeads);
        cout << endl;

        do {
            cout << endl;
            cout << "This is the beads array, before one turn of dropping beads by player " << player << " ...\n";
            printArray(binBeads);
            cout << endl;
            dropBeads(binBeads, player, bin);
            cout << endl;
            cout << "This is the beads array, after one turn of dropping beads by player " << player << " ...\n";
            printArray(binBeads);
            cout << endl;
            winner = gameOverCheck(binBeads);
        } while ((1 == player && 6 == bin) || (2 == player && 13 == bin));
        if (player = 1) {
            player = 2;
        } else {
            player = 1;
        }
    }
    cout << endl << endl;
    cout << "This is the board at the end of the game ...\n\n";
    showBoard(binBeads);
    cout << endl;
    if (winner != 3) {
        cout << "Player " << winner << " wins.";
    } else {
        cout << "Tie.";
    }
    cout << endl;
}

void getStartingBin(int binbeads[], int p, int &b) {
    cout << "Player " << p << " choose a bin ";
    cin >> b;
    if (p == 1) {
        while ((b < 0 || b > 5) || binbeads[b] == 0) {
            cout << "Not a valid bin. Choose again: ";
            cin >> b;
        }
    } else {
        while ((b < 7 || b > 12) || binbeads[b] == 0) {
            cout << "Not a valid bin. Choose again: ";
            cin >> b;
        }
    }
}

void dropBeads(int binBeads[], int p, int &b) {
    int hand, counter = 0;

    getStartingBin(binBeads, p, b);

    do {
        hand = binBeads[b];
        binBeads[b] = 0;

        while (hand) {
            b++;
            if ((p == 1 && b == 13) || (p == 2 && b == 6)) {
                b++;
            }

            if (b > 13) {
                b = 0;
            }

            binBeads[b]++;
            hand--;
        }
        cout << endl << "This is the board after the beads in hand " << ++counter << " are dropped ...\n\n";
        showBoard(binBeads);
    } while (binBeads[b] != 1 && b != 6 && b != 13);
}

void printArray(int arg[]) {
    for (int i = 0; i < sizeof(arg); i++)
        cout << arg[i] << ' ';
    cout << endl;
}

void showBoard(int binBeads[]) {
    int star;
    makeSolidLine(star = 57);
    cout << endl;
    for (int i = 1; i < 12; i++) {
        if (i == 6) {
            cout << setw(5);
            cout << "*  13  ";
            makeSolidLine(star = 43);
            cout << setw(7);
            cout << "   6  *\n";
        } else if (i == 2) {
            showTopRowNumbers();
            cout << endl;
        } else if (i == 4) {
            showTopBins(binBeads);
            cout << endl;
        } else if (i == 8) {
            showBottomRowNumbers();
            cout << endl;
        } else if (i == 10) {
            showBottomBins(binBeads);
            cout << endl;
        } else {
            makeDottedLine();
            cout << endl;
        }
    }
    makeSolidLine(star = 57);
    cout << endl;
}

void makeSolidLine(int star) {
    for (int i = 0; i < star; i++) {
        cout << "*";
    }
}

void showTopRowNumbers() {
    for (int i = 0; i < 9; i++) {
        if (i == 0 || i == 7) {
            cout << "*";
            cout << setw(6);
            cout << "      ";
            cout << setw(0);
        } else {
            cout << "*";

            if (i != 8) {
                cout << setw(4);
                cout << i - 1;
                cout << "  ";
                cout << setw(0);
            }
        }
    }
}

void showTopBins(int binBeads[]) {
    cout << "*      ";
    for (int i = 0; i < 6; i++) {
        cout << "*";
        cout << setw(4);
        cout << binBeads[i];
        cout << setw(2);
        cout << " ";
    }
    cout << "*      *";
}

void showBottomRowNumbers() {
    for (int i = 12; i > 3; i--) {
        if (i == 12 || i == 5) {
            cout << "*";
            cout << setw(6);
            cout << "      ";
            cout << setw(0);
        } else {
            cout << "*";
            if (i != 4) {
                cout << setw(4);
                cout << i + 1;
                cout << "  ";
                cout << setw(0);
            }
        }
    }
}

void showBottomBins(int binBeads[]) {
    for (int i = 13; i > 5; i--) {
        cout << "*";
        cout << setw(4);
        cout << binBeads[i];
        cout << setw(2);
        cout << " ";
    }
    cout << "*";
}

void makeDottedLine(void) {
    for (int i = 1; i < 10; i++) {
        cout << "*";
        for (int j = 1; j < 7; j++) {
            cout << " ";
        }

    }
}

void startingArray(int binBeads[]) {
    for (int i = 0; i < 14; i++) {
        binBeads[i] = 4;
    }
    binBeads[6] = 0;
    binBeads[13] = 0;
}

int gameOverCheck(int binBeads[]) {
    int winner = -1;
    int p1MidBins = 0;
    int p2MidBins = 0;
    for (int i = 0; i < 6; i++) {
        p1MidBins = p1MidBins + binBeads[i];
    }
    for (int i = 12; i < 6; i--) {
        p2MidBins = p2MidBins + binBeads[i];
    }
    if (p2MidBins) {
        binBeads[6] = binBeads[6] + p2MidBins;
    } else {
        binBeads[13] = binBeads[13] + p1MidBins;
    }
    if (binBeads[13] == binBeads[6]) {
        winner = 3;                            //draw
    }
        //else if (binBeads[0] + binBeads[1] + binBeads[2] + binBeads[3] + binBeads[4] + binBeads[5] != 0 && binBeads[7] + binBeads[8] + binBeads[9] + binBeads[10] + binBeads[11] + binBeads[12] != 0)
        //{
        //	winner = -1;						//game still playing
        //}
    else if (binBeads[13] > binBeads[6]) {
        winner = 2;                            //P2 wins
    } else {
        winner = 1;                            //P1 wins
    }
    return winner;
}