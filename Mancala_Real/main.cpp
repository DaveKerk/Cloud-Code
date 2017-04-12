//
//
//  File Name: Mancala_Real
//  File Type: Source Code
//
//  Date: April 10th, 2017
//  Version: 1.0
//
//  Author: David Kerkhoff
//  E-Mail: davekerk7@gmail.com
//
//

#include <iostream>
#include <iomanip>

using namespace std;

int beads[14];

//  Function Name: beadsArray
//  Function: Initializes the beads array and assigns values to the respective pots.
void startingArray() {
    for (int i = 0; i <= 13; i++) {
        beads[i] = 4;
    }
    beads[6] = 0;
    beads[13] = 0;
}

//  Function Name: makeSolidLine
//  Function: Outputs a solid line of stars.
void makeSolidLine(int numOfStars) {
    for (int i = 0; i <= numOfStars; i++)cout << '*';
}

//  Function Name:
//  Function:
void middle() {
    cout << "*  13  ";
    makeSolidLine(42);
    cout << "   6   *";
}


//  Function Name: makeDottedLine
//  Function: Makes the dotted line without number labels.
void makeDottedLine() {
    cout << '*';
    for (int e = 0; e <= 6; e++)cout << setw(7) << '*';
    cout << setw(8) << '*';
}

//  Function Name: upNumDisplay
//  Function: Displays the number labels for numbers 1 through 5.
void upNumDisplay() {
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

//  Function Name: downNumDisplay
//  Function: Displays the number labels for numbers 7 through 12.
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

//This will display the amount of beads in each hold. LINE 5
void scoreDisplayUp() {
    cout << '*' << " ";
    for (int k = 0; k <= 7; k++) {
        if (k <= 6 && k >= 1) {
            cout << setw(4) << beads[k - 1] << setw(3) << '*';
        } else if (k == 7) {
            cout << setw(8) << '*';
        } else { //only the first one
            cout << setw(6) << '*';
        }
    }
}

//This will display the amount of beads in each hold. LINE 11
void scoreDisplayDown() {
    cout << '*';
    for (int l = 13; l >= 6; l--) {
        if (l <= 12 && l >= 7) {
            cout << setw(4) << beads[l] << setw(3) << '*';
        } else if (l == 13) {
            cout << setw(7) << '*';
        } else { //only the first one
            cout << setw(8) << '*';
        }
    }
}

//This will display the amount of beads in each hold. LINE 8
void scoreDisplayMiddle() {
    cout << '*' << setw(4) << beads[13] << setw(3) << '*';
    for (int e = 1; e <= 6; e++)cout << setw(7) << '*';
    cout << setw(4) << beads[6] << setw(4) << '*';
}

//Outputs the entire board.
void showBoard() {
    for (int w = 0; w <= 13; w++) {
        if (w == 1 || w == 13) {
            makeSolidLine(57);
        } else if (w == 4) {
            upNumDisplay();
        } else if (w == 5) {
            scoreDisplayUp();
        } else if (w == 7) {
            cout << "*  13  ";
            makeSolidLine(42);
            cout << "   6   *";
        } else if (w == 8) {
            scoreDisplayMiddle();
        } else if (w == 10) {
            downNum();
        } else if (w == 11) {
            scoreDisplayDown();
        } else if (w >= 2 && w <= 12) {
            makeDottedLine();
        }
        cout << endl;
    }
}

void gameOverCheck() {
    if (beads[0] == 0 && beads[1] == 0 && beads[2] == 0 && beads[3] == 0 && beads[4] == 0 && beads[5] == 0) {
        beads[6] += beads[7];
        beads[7] = 0;
        beads[6] += beads[8];
        beads[8] = 0;
        beads[6] += beads[9];
        beads[9] = 0;
        beads[6] += beads[10];
        beads[10] = 0;
        beads[6] += beads[11];
        beads[11] = 0;
        beads[6] += beads[12];
        beads[12] = 0;
    }
    if (beads[7] == 0 && beads[8] == 0 && beads[9] == 0 && beads[10] == 0 && beads[11] == 0 && beads[12] == 0) {
        beads[13] += beads[0];
        beads[0] = 0;
        beads[13] += beads[1];
        beads[1] = 0;
        beads[13] += beads[2];
        beads[2] = 0;
        beads[13] += beads[3];
        beads[3] = 0;
        beads[13] += beads[4];
        beads[4] = 0;
        beads[13] += beads[5];
        beads[5] = 0;
    }
}

void gameContinue() {
    while (
            beads[0] > 0 || beads[1] > 0 || beads[2] > 0 || beads[3] > 0 || beads[4] > 0 || beads[5] > 0 ||
            beads[7] > 0 || beads[8] > 0 || beads[9] > 0 || beads[10] > 0 || beads[11] > 0 || beads[12] > 0) {
        //controls();
        // PUT CONTROLS FUNCTION HERE!
        showBoard();
        gameOverCheck();
    }
    showBoard();
    cout << "GAME FINISHED" << endl;
    cout << "PLAYER ONE SCORE: " << beads[6] << endl;
    cout << "PLAYER TWO SCORE: " << beads[13] << endl;
    if (beads[6] > beads[13]) {
        cout << "PLAYER ONE WINS!!";
    } else if (beads[13] > beads[6]) {
        cout << "PLAYER TWO WINS!!";
    } else if (beads[6] == beads[13]) {
        cout << "YOU TIED!" << endl << endl << "...how?";
    }
}

int main() {
    startingArray();
    showBoard();
    gameContinue();
    return 0;
}