// 00000011111111112222222222333333333344444444445555555555666666666677777777778
// 45678901234567890123456789012345678901234567890123456789012345678901234567890
//
// File Name  : addStrings.cpp
// File Type  : Source code
// Purpose    : Main program (Adding two strings).
//
// Date       : 2017-02-23
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
#if defined(_WIN32) || defined(WIN32) // Windows machine
#include <windows.h>
#define PAUSE "pause"                 // The pause command for DOS window.
#else                                 // Unix-based machines
// Following is the pause command for the BASH script that runs on UNIX:
#define PAUSE "read -p 'Press [Enter] key to continue ...'"
#endif
// HERE

// C++ include files:
#include <iostream> // I/O manipulation; e.g., cout.
#include <string>   // String types and operations.

using namespace std;

// 0000001111111111222222222233333333334444444444555555555566666666667777777777
// 4567890123456789012345678901234567890123456789012345678901234567890123456789
//
// The main function that is invoked by the operating system.
//
int main(int argc, char * argv[])
{
    // Define some variables. It is a good idea to make them constants if they
    // will not be modified later in the program.
    string fname;
    string lname;
    cout << "What is your first name?" << endl;
    cin >> fname;
    cout << "Now your last name." << endl;
    cin >> lname;
    const string first_name = fname;  // Define and initialize the 1st name.
    const string last_name  = lname;   // Define and initialize the last name.
    const string full_name  = first_name + string(" ") + last_name; // Combine the two names

    cout << "Your name is " << first_name + last_name << endl;
    cout << "Full name is " << full_name << endl;

    //system(PAUSE); // Pause for the user so the window doesn't disappear.
    return 0;      // Since nothing went wrong, go back to the OS normally.
}
