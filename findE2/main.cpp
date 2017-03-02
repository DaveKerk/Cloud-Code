// 00000011111111112222222222333333333344444444445555555555666666666677777777778
// 45678901234567890123456789012345678901234567890123456789012345678901234567890
//
// File Name  : findE.cpp
// File Type  : Source code
// Purpose    : Main program (Finding the natural number e).
//
// Date       : 2017-02-16
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
// See        : https://en.wikipedia.org/wiki/E_(mathematical_constant)
//

// C include files (always put them first); they usually start with a 'c'.
#include <cstdio>   // The C standard I/O basics.
#include <cassert>  // The C assertion header.
#include <cstdlib>  // The C standard library.
#include <cmath>    // The C mathematical library.
#include <cstdint>  // Integer constants and operations.
#include <cfloat>   // Floating point constants and operations.

// C++ include files (always put them after C include files).
#include <string>
#include <iostream>

// Define typeless constants
#define MAX_FACTORIAL 20
#define E             2.71828182845904523536028747135266249775724709369995
#define E_STR         "2.71828182845904523536028747135266249775724709369995"

// Define conditional typeless constants depending on the operating system
#if defined(_WIN32) || defined(WIN32) // Windows machine
#include <windows.h>
#include <Lmcons.h>
#define PAUSE "pause"                 // The pause command for DOS window.
#else                                 // Unix-based machines
#include <pwd.h>
// Following is the pause command for the BASH script that runs on UNIX:
#define PAUSE "read -p 'Press [Enter] key to continue ...'"
#endif

typedef double myType;

using namespace std;

// 0000001111111111222222222233333333334444444444555555555566666666667777777777
// 4567890123456789012345678901234567890123456789012345678901234567890123456789
//
// A template to see if two numbers are almost equal by considering some
// tolerance that is defaulted to FLT_EPSILON.
//
// Making this a template with type T means that it can take any allowed numeric
// type allowed by C++ (e.g. int, long int, float, double, etc.)
//
template <typename T>
inline const bool isAlmostEqual (const T value, const T base,
                                 const T tolerance=FLT_EPSILON)
{
    // Verify the reasonability of the tolerance.
    // assert is a good tool to prevent user faults that may cause bugs.
    assert (tolerance >= 0);

    // Return true if the difference is smaller than the tolerance; otherwise,
    // false.
    return (fabs(value - base) <= tolerance);
}

// 0000001111111111222222222233333333334444444444555555555566666666667777777777
// 4567890123456789012345678901234567890123456789012345678901234567890123456789
//
// A template to calculate the factorial of a number. Although the factorial is
// expected to be an integer value, other values (such myType) may be
// expected to allow wider values.
//
// Making this a template with type T means that it can take any allowed numeric
// type allowed by C++ (e.g. int, long int, float, double, etc.)
//
template <typename T>
inline const T factorial (const T n, const T max_factorial=MAX_FACTORIAL)
{
    // Verify that n is not bigger than the max factorial the computer can handle
    assert (max_factorial >= n);

    // Verify that the user is sending a reasonable value (i.e. can't be negative)
    assert (n > 1);

    T fact = 1; // Initialize the multiplier to 1.

    // Calculate the factorial through a loop.
    for (T i=round(n); i > 1; --i) fact *= n;

    return fact; // Return the value of the factorial.
}

// 0000001111111111222222222233333333334444444444555555555566666666667777777777
// 4567890123456789012345678901234567890123456789012345678901234567890123456789
//
// A function to get the user name depending on the operating system.
//
const string userName()
{
    string user_name("Unnamed");

#if defined(_WIN32) || defined(WIN32) // Windows machine
    TCHAR name [ UNLEN + 1 ];
  DWORD size = UNLEN + 1;

  if (GetUserName( (TCHAR*)name, &size )) user_name = name;
#else                                // Non-Windows machine (e.g. Unix)
    uid_t uid = geteuid();
    struct passwd *pw = getpwuid(uid);
    if (pw) user_name = pw->pw_name;
#endif
    return user_name;
}

// 0000001111111111222222222233333333334444444444555555555566666666667777777777
// 4567890123456789012345678901234567890123456789012345678901234567890123456789
//
// A function to calculate Euler's number (e) as the best we can using long
// double.
//
const myType calcE()
{
    const myType ld1 = 1.0;           // Force 1.0 to be a myType type.
    const size_t max_fact = MAX_FACTORIAL; // Define the max factorial
    myType e = 2;                     // Initialize e to be 2.

    // Add the fractions to the initial value of e through the following loop.
    // size_t = size type; it is equivalent to "unsigned int" in a 32-bit OS,
    // and it is "unsigned long int" in a 64-bit OS. It is a good idea to use
    // size_t for iteration variables.
    for (size_t i=2; i<= max_fact; ++i)
    {
        // Add to e 1 divided by the factorial number of i. Also, forcing the type
        // of factorial to be myType to increase the precision.
        e += ld1 / (myType) factorial((myType) i,
                                            (myType) max_fact);
        std::cout << e << std::endl;
    }

    return e; // Return the calculated value of the calculated e.
}

// 0000001111111111222222222233333333334444444444555555555566666666667777777777
// 4567890123456789012345678901234567890123456789012345678901234567890123456789
//
// A function to calculate Euler's number (e) as the best we can using long
// double. This function will calculate from small to large; i.e., the opposite
// of the above function in hope to save the small numbers.
//
const myType calcER()
{
    const myType ld1 = 1.0;           // Force 1.0 to be a myType type.
    const size_t max_fact = MAX_FACTORIAL; // Define the max factorial
    myType e = 0;                     // Initialize e to be 0.

    // Add the fractions to the initial value of e through the following loop.
    // size_t = size type; it is equivalent to "unsigned int" in a 32-bit OS,
    // and it is "unsigned long int" in a 64-bit OS. It is a good idea to use
    // size_t for iteration variables.
    for (size_t i=max_fact; i>1; --i)
    {
        // Add to e 1 divided by the factorial number of i. Also, forcing the type
        // of factorial to be myType to increase the precision.
        e += ld1 / ((myType) factorial((myType) i,
                                            (myType) max_fact));
    }

    e += 2;

    return e; // Return the calculated value of the calculated e.
}
// 0000001111111111222222222233333333334444444444555555555566666666667777777777
// 4567890123456789012345678901234567890123456789012345678901234567890123456789
//
// The main function that is invoked by the operating system.
//
int main(int argc, char * argv[])
{
    // Define some variables. It is a good idea to make them constants if they
    // will not be modified later in the program.
    const myType e     = calcE();     // Invoke a function to calculate e.
    const myType er    = calcER();    // Calculate e in reverse order.
    const myType kE    = E;           // Since E is typeless, make it typed.
    const myType diff  = kE - e;      // Calculate the difference.
    const myType diffr = kE - er;     // Get the difference from er
    const myType ldfe  = FLT_EPSILON; // Make a type for FLT_EPSILON

    // Check if the pre-computed and calculated values of e are almost equal.
    const bool is_almost_equal = isAlmostEqual(e, kE);

    // Print user name. Then print the natural (string), computed (myType),
    // and calculated values of e. Then, print the difference between the computed
    // and calculated. Also, print FLT_EPSILON just to see its value.
    printf("Hello %s.\n", userName().c_str());
    printf("Natural    e = %s\n"    , E_STR);
    printf("Computed   e = %.50Lf\n", kE);
    printf("Calculated e = %.50Lf\n", e);
    printf("Difference   = %.50Lf\n", diff);
    printf("Reversed   e = %.50Lf\n", er);
    printf("Difference R = %.50Lf\n", diffr);
    printf("FLT_EPSILON  = %.50Lf\n", ldfe);
    cout << e << endl;
    // Check if the computed and calculated values are almost equal. If they are,
    // it will be a feat.
    if (is_almost_equal)
        printf("Our calculation to finding e was pretty close!\n");
    else
        printf("Calculation to finding e was off by %.29Lf\n", diff);

   // system(PAUSE);       // Pause for the user so the window doesn't disappear.

    return EXIT_SUCCESS; // Since nothing went wrong, go back to the OS normally.
}
