// 00000011111111112222222222333333333344444444445555555555666666666677777777778
// 45678901234567890123456789012345678901234567890123456789012345678901234567890
//
// File Name  : addOdds.cpp
// File Type  : Source code
// Purpose    : Add the odd numbers between 1 and a given maximum number.
//              The even numbers will not be summed. For example, if the max
//              number is 5, the sum of the odds will be 5 + 3 + 1, which will
//              eventually equals 9.
//
// Date       : 2017-02-05
// Version    : 1.0.0
// Copyrights : FRCC
//
// Author     : Mohammad Huwaidi
//
// 00000011111111112222222222333333333344444444445555555555666666666677777777778
// 45678901234567890123456789012345678901234567890123456789012345678901234567890
//

#include <iostream> // Include Input-Output Streams.
#include <cstdlib>  // system, NULL, EXIT_FAILURE.

int main() // The operating system calls this function. If it is missing, the
// program will not run.
{
    int sum = 0; // Define sum and initialize it to 0.
    int num = 5; // Define the number and initialize it to 5; you may change this
    // Number to different numbers to test more values.

    std::cout << "The sum of the odd numbers between 1 and " << num << " = ";

    while (num > 0)      // Loop as long as there are more numbers to process.
    {                    // The beginning of while block.
        if (num & 1)       // If the number is odd.
            sum = sum + num; // Add the odd number to the sum.

        num = num - 1;     // Decrement the number.
    }                    // The end of the while block.

    std::cout << sum << std::endl; // Output the result to the console

    system("pause"); // Leave the screen open until the user hits the space bar

    return EXIT_SUCCESS; // Return back to the OS; successfully (no issues).
}
