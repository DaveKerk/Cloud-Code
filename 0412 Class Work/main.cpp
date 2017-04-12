// 00000011111111112222222222333333333344444444445555555555666666666677777777778
// 45678901234567890123456789012345678901234567890123456789012345678901234567890
//
// File Name  : search.cpp
// File Type  : Source code
// Purpose    : Main program (Working with functions and arrays).
//
// Date       : 2017-04-12
// Version    : 1.0.0
// Copyrights : FRCC
//
// Author     : Mohammad Huwaidi
// E-Mail     : Mohammad.Huwaidi@frontrange.edu
// Style      : http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml
// Document   : http://www.stack.nl/~dimitri/doxygen/index.html
//
// 00000011111111112222222222333333333344444444445555555555666666666677777777778
// 45678901234567890123456789012345678901234567890123456789012345678901234567890
//
//

// Define the PAUSE depending on the operating system:
// Do not worry about this code until where HERE is written
#if defined(_WIN32) || defined(WIN32) // Windows machine:

#include <windows.h>                  // Include required Windows header.

#define PAUSE "pause"                 // The pause command for DOS window.
#else                                 // Unix-based machines
// Following is the pause command for the BASH script that runs on UNIX:
#define PAUSE "read -p 'Press [Enter] key to continue ...'"
#endif
// HERE

// C++ include files:
#include <iostream> // I/O manipulation; e.g., cout.

using namespace std;

// You need to define the following functions whose explanation is found below
// the main function body. You need to write the remaining code. The first
// function is already done for you.
//
// Prototype the functions to be used by the main program:
//
// Function: isIn
// value = the value to search for.
// array = the array to search for the value in.
// size  = the size of the array.
// Return true when the value is in the array; otherwise, false.
bool isIn(const float value, const float array[], const int size);

// Function: firstLocation
// value = the value to search for.
// array = the array to search for the value in.
// size  = the size of the array.
// Return the first location where the value is in [0, size). If not found,
// return -1.
int firstLocation(const float value, const float array[], const int size);

// Function: allLocations
// value = the value to search for.
// array = the array to search for the value in.
// size  = the size of the array.
// Print all the location where the value match in the array. If nothing found,
// print "No Match Found"
// Return the number of matching values [0, size].
int allLocations(const float value, const float array[], const int size);

// 0000001111111111222222222233333333334444444444555555555566666666667777777777
// 4567890123456789012345678901234567890123456789012345678901234567890123456789
//
// The main function that is invoked by the operating system.
//
// This program will search for a value within an array.
//
//
int main(int argc, char *argv[]) {
    // The total number of elements in the array. The const keyword is used to
    // indicate that this is a constant number that will not be changed throughout
    // the program. It is advisable to use const when you do not intend to change
    // the value of the variable:
    const int size = 10;

    // Define an array that will hold 10 elements. The array size is not defined
    // because it is taken emplicitly from the static declaration of the array
    // values after the = sign:
    float scores[] = {70, 85, 90, 100, 95, 85, 75, 70, 78, 58};

    for (bool go = true; go;) {
        float value = 0;
        cout << "Enter a number to search for (0 to quit): ";
        cin >> value;
        if (value == 0) {
            go = false;
        } else {
            cout << "Is the value in the list " << boolalpha
                 << isIn(value, scores, size) << endl;
            cout << "The first location of the value is in "
                 << firstLocation(value, scores, size) << endl;
            cout << "All locations of the value: "
                 << allLocations(value, scores, size) << endl;

        }
    }

    // Thank the user about using the program:
    cout << "Thanks for using the program. Bye!" << endl;

    system(PAUSE); // Pause for the user so the window doesn't disappear.
    return 0;      // Since nothing went wrong, go back to the OS normally.
}

bool isIn(const float value, const float list[], const int size) {
    bool is_in = false;
    for (int i = 0; !is_in && i < size; ++i) {
        if (value == list[i]) is_in = true;
    }

    return is_in;
}

int firstLocation(const float value, const float array[], const int size) {
    int firstLocation = -1;
    while () {
        if (value == array[i]) {
            firstLocation = i;
        }
    }
    return firstLocation;
}

int allLocations(const float value, const float array[], const int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (value == array[i]) {
            cout << "Found in location:" << i << endl;
            sum++;
        }
    }
    return sum;
}