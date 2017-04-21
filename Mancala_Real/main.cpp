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

//This will display the amount of beads in each hold. LINE 5
void showTopBins() {
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
void showBottomBins() {
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
void showMiddleBins() {
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
            showTopRowNumbers();
        } else if (w == 5) {
            showTopBins();
        } else if (w == 7) {
            cout << "*  13  ";
            makeSolidLine(42);
            cout << "   6   *";
        } else if (w == 8) {
            showMiddleBins();
        } else if (w == 10) {
            showBottomRowNumbers();
        } else if (w == 11) {
            showBottomBins();
        } else if (w >= 2 && w <= 12) {
            makeDottedLine();
        }
        cout << endl;
    }
}

//Checks if a player's bins are empty then ends game if so.
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

void playersTurn(int playerTurn) {
    cout << playerTurn;
    if (playerTurn % 2 == 0) {
        cout << "It is PLAYER TWO'S turn." << endl;
    } else {
        cout << "It is PLAYER ONE'S turn." << endl;
    }
}

void getStartingBin(int playerTurn) {
    cout << "What bin would you like to start in?" << endl;
    int input;
    cin >> input;
    if (input >= 6 && playerTurn == 1) {
        cout << "Invalid input!" << endl << "Please try again." << endl;
    } else if (input > 7 && input == 13 && playerTurn == 2) {
        cout << "Invalid input!" << endl << "Please try again." << endl;
    } else {
        int holdNumber;
        cin >> holdNumber;
        switch (holdNumber) {
            case '0' : {
                if (beads[0] > 13) {
                    int j;
                    j = beads[0] - 13;
                    while (j > 0) {
                        beads[j - 1] += 1;
                        j -= 1;
                    }
                }
                while (beads[0] > 0) {
                    beads[beads[0]] += 1;
                    beads[0] -= 1;
                }
                int v;
                v++;
                playersTurn(v);
                break;
            }
            case '1' : {
                if (beads[1] > 12) {
                    int j;
                    j = beads[1] - 12;
                    while (j > 0) {
                        beads[j - 1] += 1;
                        j -= 1;
                    }
                }
                while (beads[1] > 0) {
                    beads[beads[1] + 1] += 1;
                    beads[1] -= 1;
                }
                playersTurn(+1);
                break;
            }
            case '2' : {
                if (beads[2] > 11) {
                    int j;
                    j = beads[2] - 11;
                    while (j > 0) {
                        beads[j - 1] += 1;
                        j -= 1;
                    }
                }
                while (beads[2] > 0) {
                    beads[beads[2] + 2] += 1;
                    beads[2] -= 1;
                }
                playersTurn(+1);
                break;
            }
            case '3' : {
                if (beads[3] > 10) {
                    int j;
                    j = beads[3] - 10;
                    while (j > 0) {
                        beads[j - 1] += 1;
                        j -= 1;
                    }
                }
                while (beads[3] > 0) {
                    beads[beads[3] + 3] += 1;
                    beads[3] -= 1;
                }
                playersTurn(+1);
                break;
            }
            case '4' : {
                if (beads[4] > 9) {
                    int j;
                    j = beads[4] - 9;
                    while (j > 0) {
                        beads[j - 1] += 1;
                        j -= 1;
                    }
                }
                while (beads[4] > 0) {
                    beads[beads[4] + 4] += 1;
                    beads[4] -= 1;
                }
                playersTurn(+1);
                break;
            }
            case '5' : {
                if (beads[5] > 8) {
                    int j;
                    j = beads[5] - 8;
                    while (j > 0) {
                        beads[j - 1] += 1;
                        j -= 1;
                    }
                }
                while (beads[5] > 0) {
                    beads[beads[5] + 5] += 1;
                    beads[5] -= 1;
                }
                playersTurn(+1);
                break;
            }
            case '7' : {
                if (beads[7] > 6) {
                    int j;
                    j = beads[7] - 6;
                    while (j > 0) {
                        beads[j - 1] += 1;
                        j -= 1;
                    }
                }
                while (beads[7] > 0) {
                    beads[beads[7] + 7] += 1;
                    beads[7] -= 1;
                }
                playersTurn(+1);
                break;
            }
            case '8' : {
                if (beads[8] > 5) {
                    int j;
                    j = beads[8] - 5;
                    while (j > 0) {
                        beads[j - 1] += 1;
                        j -= 1;
                    }
                }
                while (beads[8] > 0) {
                    beads[beads[8] + 8] += 1;
                    beads[8] -= 1;
                }
                playersTurn(+1);
                break;
            }
            case '9' : {
                if (beads[9] > 4) {
                    int j;
                    j = beads[9] - 4;
                    while (j > 0) {
                        beads[j - 1] += 1;
                        j -= 1;
                    }
                }
                while (beads[9] > 0) {
                    beads[beads[9] + 9] += 1;
                    beads[9] -= 1;
                }
                playersTurn(+1);
                break;
            }
            case 'A': {
                if (beads[10] > 3) {
                    int j;
                    j = beads[10] - 3;
                    while (j > 0) {
                        beads[j - 1] += 1;
                        j -= 1;
                    }
                }
                while (beads[10] > 0) {
                    beads[beads[10] + 10] += 1;
                    beads[10] -= 1;
                }
                playersTurn(+1);
                break;
            }
            case 'B': {
                if (beads[11] > 2) {
                    int j;
                    j = beads[11] - 2;
                    while (j > 0) {
                        beads[j - 1] += 1;
                        j -= 1;
                    }
                }
                while (beads[11] > 0) {
                    beads[beads[11] + 11] += 1;
                    beads[11] -= 1;
                }
                playersTurn(+1);
                break;
            }
            case 'C': {
                if (beads[12] > 1) {
                    int j;
                    j = beads[12] - 1;
                    while (j > 0) {
                        beads[j - 1] += 1;
                        j -= 1;
                    }
                }
                while (beads[12] > 0) {
                    beads[beads[12] + 12] += 1;
                    beads[12] -= 1;
                }
                playersTurn(+1);
                break;
            }
            default: {
                cout << "Unrecognized input, please try again.";
            }
        }
    }
    
}

void turnContinue(){

}

void gameContinue() {
    int playerTurn = 1;
    while (
            beads[0] > 0 || beads[1] > 0 || beads[2] > 0 || beads[3] > 0 || beads[4] > 0 || beads[5] > 0 ||
            beads[7] > 0 || beads[8] > 0 || beads[9] > 0 || beads[10] > 0 || beads[11] > 0 || beads[12] > 0) {
        getStartingBin(playerTurn);
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