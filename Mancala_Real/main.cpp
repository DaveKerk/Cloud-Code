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

int beadArray[14];

//  Function Name: beadArrayArray
//  Function: Initializes the beadArray array and assigns values to the respective pots.
void startingArray() {
    for (int i = 0; i <= 13; i++) {
        beadArray[i] = 4;
    }
    beadArray[6] = 0;
    beadArray[13] = 0;
}

//  Function Name: makeSolidLine
//  Function: Outputs a solid line of stars based on an input parameter.
//  Parameter: numOfStars: referenced in the showBoard function to output the correct number of stars for the
//             appropriate line.
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
    for (int i = 0; i < 8; i++) {
        cout << '*';
        for (int j = 0; j < 6; j++) {
            cout << ' ';
        }
    }
    cout << " *";
}

//  Function Name: showTopRowNumbers
//  Function: Displays the number labels for numbers 1 through 5.
void showTopRowNumbers() {
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

//  Function Name: showBottomRowNumbers
//  Function: Displays the number labels for numbers 7 through 12.
void showBottomRowNumbers() {
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

//This will display the amount of beadArray in each hold. LINE 5
void showTopBins() {
    cout << '*' << " ";
    for (int k = 0; k <= 7; k++) {
        if (k <= 6 && k >= 1) {
            cout << setw(4) << beadArray[k - 1] << setw(3) << '*';
        } else if (k == 7) {
            cout << setw(8) << '*';
        } else { //only the first one
            cout << setw(6) << '*';
        }
    }
}

//This will display the amount of beadArray in each hold. LINE 11
void showBottomBins() {
    cout << '*';
    for (int l = 13; l >= 6; l--) {
        if (l <= 12 && l >= 7) {
            cout << setw(4) << beadArray[l] << setw(3) << '*';
        } else if (l == 13) {
            cout << setw(7) << '*';
        } else { //only the first one
            cout << setw(8) << '*';
        }
    }
}

//This will display the amount of beadArray in each hold. LINE 8
void showMiddleBins() {
    cout << '*' << setw(4) << beadArray[13] << setw(3) << '*';
    for (int e = 1; e <= 6; e++)cout << setw(7) << '*';
    cout << setw(4) << beadArray[6] << setw(4) << '*';
}

//Outputs the entire board.
void showBoard() {
    for (int w = 0; w <= 13; w++) {
        if (w == 1 || w == 13) {
            makeSolidLine(57);
        } else if (w == 3) {
            showTopRowNumbers();
        } else if (w == 5) {
            showTopBins();
        } else if (w == 7) {
            cout << "*  13  ";
            makeSolidLine(42);
            cout << "   6   *";
        } else if (w == 8) {
            showMiddleBins();
        } else if (w == 9) {
            showBottomRowNumbers();
        } else if (w == 11) {
            showBottomBins();
        } else if (w >= 2 && w <= 12) {
            makeDottedLine();
        }
        cout << endl;
    }
}

int getStartingBin(int playerTurn);

//Checks if a player's bins are empty then ends game if so.
bool gameOverCheck() {
    bool gameOver = false;
    if (beadArray[0] == 0 && beadArray[1] == 0 && beadArray[2] == 0 && beadArray[3] == 0 && beadArray[4] == 0 &&
        beadArray[5] == 0) {
        beadArray[6] += beadArray[7];
        beadArray[7] = 0;
        beadArray[6] += beadArray[8];
        beadArray[8] = 0;
        beadArray[6] += beadArray[9];
        beadArray[9] = 0;
        beadArray[6] += beadArray[10];
        beadArray[10] = 0;
        beadArray[6] += beadArray[11];
        beadArray[11] = 0;
        beadArray[6] += beadArray[12];
        beadArray[12] = 0;
        gameOver = true;
    }
    if (beadArray[7] == 0 && beadArray[8] == 0 && beadArray[9] == 0 && beadArray[10] == 0 && beadArray[11] == 0 &&
        beadArray[12] == 0) {
        beadArray[13] += beadArray[0];
        beadArray[0] = 0;
        beadArray[13] += beadArray[1];
        beadArray[1] = 0;
        beadArray[13] += beadArray[2];
        beadArray[2] = 0;
        beadArray[13] += beadArray[3];
        beadArray[3] = 0;
        beadArray[13] += beadArray[4];
        beadArray[4] = 0;
        beadArray[13] += beadArray[5];
        beadArray[5] = 0;
        gameOver = true;
    }
    return gameOver;
}

void dropBeads(int input, int playerTurn) {
    {
        int skipBin;
        bool loop;
        int binFinish = -1;
        if (playerTurn % 2 == 0) {
            skipBin = 6;
        } else {
            skipBin = 13;
        }
        if (beadArray[input] > (13 - input) - input) {
            int j;
            j = beadArray[input] - (13 - input);
            if (beadArray[beadArray[j] + j] > 0) {
                binFinish = beadArray[j] + j;
            }
            while (j > 0) {
                beadArray[j - 1] += 1;
                j -= 1;
                if (beadArray[j] + j == skipBin) {
                    beadArray[skipBin] -= 1;
                }
            }

            loop = true;
        }
        while (beadArray[input] > 0) {
            if (beadArray[beadArray[input] + input] > 0 && !loop) {
                binFinish = beadArray[input] + input;
            }
            beadArray[beadArray[input] + input] += 1;
            beadArray[input] -= 1;
            if (beadArray[input] + input == skipBin) {
                beadArray[skipBin] -= 1;
            }
        }
        if (binFinish != -1) {
            dropBeads(binFinish, playerTurn);
        }
    }
}

int getStartingBin(int playerTurn) {
    if (playerTurn % 2 == 0) {
        cout << "It is PLAYER TWO'S turn." << endl;
    } else {
        cout << "It is PLAYER ONE'S turn." << endl;
    }

    cout << "What bin would you like to start in?" << endl;
    int holdNumber;
    cin >> holdNumber;

    if (holdNumber >= 6 && (playerTurn % 2) != 0) {
        cout << "Invalid input!" << endl << "Please try again." << endl;
    } else if (holdNumber < 7 && holdNumber == 13 && playerTurn == 2) {
        cout << "Invalid input!" << endl << "Please try again." << endl;
    } else {
        dropBeads(holdNumber, playerTurn);
        ++playerTurn;
        return playerTurn;
    }
}

void gameContinue() {
    int playerTurn = 1;
    while (!gameOverCheck()) {
        getStartingBin(playerTurn);
        gameOverCheck();
        showBoard();
        cout << "Player: " << playerTurn << "'s turn.";
    }
    showBoard();
    cout << "GAME FINISHED" << endl;
    cout << "PLAYER ONE SCORE: " << beadArray[6] << endl;
    cout << "PLAYER TWO SCORE: " << beadArray[13] << endl;
    if (beadArray[6] > beadArray[13]) {
        cout << "PLAYER ONE WINS!!";
    } else if (beadArray[13] > beadArray[6]) {
        cout << "PLAYER TWO WINS!!";
    } else if (beadArray[6] == beadArray[13]) {
        cout << "YOU TIED!" << endl << endl << "...how?";
    }
}

int main() {
    startingArray();
    showBoard();
    gameContinue();
    return 0;
}