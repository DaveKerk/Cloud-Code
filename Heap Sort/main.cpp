#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

void heapify(){

}

int main() {
    srand(time(NULL));
    cout << "How many item would you like in your array?\n"
         << "100?\n"
         << "1000?\n"
         << "10000?\n";

    //The following code generates an array of *arrayCount* random numbers using
    //srand to randomize the numbers as they are generated and placed in the array.
    int arrayCount;
    cin >> arrayCount;
    int mainArray[arrayCount];
    for (int i = 0; i < arrayCount; i++)
        mainArray[i] = ((rand() % arrayCount) + 1);




    return 0;
}