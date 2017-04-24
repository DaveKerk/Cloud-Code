// 00000011111111112222222222333333333344444444445555555555666666666677777777778
// 45678901234567890123456789012345678901234567890123456789012345678901234567890
//
// File Name  : readFile.cpp
// File Type  : Source code
// Purpose    : Main program (read integers from a file).
//
// Date       : 2017-04-22
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
#include <fstream>  // File stream
#include <iostream> // I/O manipulation; e.g., cout.

using namespace std;

// 0000001111111111222222222233333333334444444444555555555566666666667777777777
// 4567890123456789012345678901234567890123456789012345678901234567890123456789
//
// The main function that is invoked by the operating system.
//
// This program will open file and read from it.
//
//
int main(int argc, char * argv[])
{
    // The total number of elements in the array. The const keyword is used to
    // indicate that this is a constant number that will not be changed throughout
    // the program. It is advisable to use const when you do not intend to change
    // the value of the variable:
    const int size = 10;

    // Define an array that will hold 10 elements. The array size is not defined
    // because it is taken emplicitly from the static declaration of the array
    // values after the = sign:
    float scores[size];

    string file_name; // Store the file name to be written to

    cout << "Enter a file name to read from: "; // Prompt the user for input
    cin >> file_name;                           // Save the input into a variable

    // Create an ifstream (file for input) with the name of fin using the file name.
    ifstream fin(file_name, ios::in);

    // Read the data from the file
    for (int i = 0; i<size; ++i)
    {
        fin >> scores[i]; // Read from the file stream into an internal array
    }

    fin.close(); // Close the file (no longer needed)

    // Make sure that you've read the data properly
    for (int i = 0; i<size; ++i)
    {
        cout << scores[i] << endl; // Output value to the console
    }

    // Thank the user about using the program:
    cout << "Thanks for using the program. Bye!" << endl;

    system(PAUSE); // Pause for the user so the window doesn't disappear.
    return 0;      // Since nothing went wrong, go back to the OS normally.
}
