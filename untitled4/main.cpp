// 00000011111111112222222222333333333344444444445555555555666666666677777777778
// 45678901234567890123456789012345678901234567890123456789012345678901234567890
//
// File Name  : nestedLoops.cpp
// File Type  : Source code
// Purpose    : Main program (Working with nested loops).
//
// Date       : 2017-03-21
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
#include <string>   // String types and operations.

using namespace std;

/* *** PLEASE, READ CAREFULLY ***

   DO NOT DECLARE VARIABLES OUTSIDE OF FUNCTIONS INCLUDING main().

   Such variable use is almost prohibited and only used for extreme cases
   outside of the scope of this course.

   It is always a good idea to declare variables inside their minimal scope;
   that is, you do not declare a variable in the main function when you need to
   use only inside a for loop only.

*/

// 0000001111111111222222222233333333334444444444555555555566666666667777777777
// 4567890123456789012345678901234567890123456789012345678901234567890123456789
//
// The main function that is invoked by the operating system.
//
// This program will read the scores of exams of a number of students.
//
// We need to prompt the user for the number of students and the number of
// exams to use for 2 nested loops.
//
int main(int argc, char *argv[]) {
    int numOfStudents = 0; // The total number of students in the class.
    int numOfExams = 0; // The total number of exams taken by the students.
    for (int numOfTrials = 0; numOfTrials < 10; numOfTrials++) {
        // Prompt the user to enter the number of students:
        cout << "Enter the number of students: ";
        cin >> numOfStudents; // Read the value into the designated variable.
        if (numOfStudents < 1 || numOfStudents > 10) {
            cout << "Please enter a valid number of students between 1 and 10." << endl;
        } else {
            break;
        }
    }
    for (int numOfTrials = 0; numOfTrials < 10; numOfTrials++) {
        // Prompt the user to enter the number of exams:
        cout << "Enter the number of exams   : ";
        cin >> numOfExams; // Read the value into the designated variable.
        if (numOfExams < 1 || numOfExams > 3) {
            cout << "Please enter a valid number of exams between 1 and 3." << endl;
        } else {
            break;
        }
    }

    // The first loop goes through all the students starting from 0:
    for (int student = 0; student < numOfStudents; ++student) {

        int sumOfExams = 0; // Initialize the sum of the exams to 0.

        // Inform the user about the student whose information to be entered:
        cout << "Enter the exam scores for student " << student << endl;

        // The second loop goes through all the exams of the current student:
        for (int exam = 1; exam <= numOfExams; ++exam) {
            int score = 0; // Declare the current score and initialize it to 0.

            // Prompt the user to enter the score of the current exame:
            cout << "\t" << "Enter the score for exam " << exam << ": ";
            cin >> score;       // Read the score value.

            sumOfExams += score; // Add the score to the sum.
        }

        // Declare a new variable to save the average of the scores:
        double average = (double) sumOfExams / (double) numOfExams;

        // Output the average to the console:
        cout << "\t" << "The average score         : " << average << endl;
    }

    // Thank the user about using the program:
    cout << "Thanks for using the program. Bye!" << endl;

    return 0;      // Since nothing went wrong, go back to the OS normally.
}
