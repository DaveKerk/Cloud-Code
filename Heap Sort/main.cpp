#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

void heapify(int i, int arrayCount, int mainArray[]) {
    int parent = i;
    int leftChild = (2 * i) + 1;
    int rightChild = (2 * i) + 2;

    if (leftChild < arrayCount && mainArray[leftChild] > mainArray[parent]) {
        parent = leftChild;
    }
    if (rightChild < arrayCount && mainArray[rightChild] > mainArray[parent]) {
        parent = rightChild;
    }
    if (parent != i) {
        swap(mainArray[i], mainArray[parent]);

        heapify(i, arrayCount, mainArray);
    }
}

void heapSort(int arrayCount, int mainArray[]) {
    for (int i = (arrayCount); i >= 0; i--)
        heapify(i, arrayCount, mainArray);
    for (int i = arrayCount; i >= 0; i--) {
        swap(mainArray[0], mainArray[i]);

        heapify(i, arrayCount, mainArray);
    }
}

int main() {
    srand(time(NULL));
    cout << "How many item would you like in your array?\n"
         << "100?\n"
         << "1000?\n"
         << "10000?\n";

    //The following code generates an array of *arrayCount* random numbers using
    //srand to randomize the numbers as they are generated and placed in the array.
    int arrayCount = 5;
//    cin >> arrayCount;
    int mainArray[5] = {1, 2, 3, 4, 5};
//    for (int i = 0; i < arrayCount; i++)
//        mainArray[i] = ((rand() % arrayCount) + 1);
    for (int i = 0; i < arrayCount; i++) {
        cout << mainArray[i] << setw(4) << i << endl;
    }
    system("PAUSE");
    heapSort(arrayCount, mainArray);
    for (int i = 0; i < arrayCount; i++) {
        cout << mainArray[i] << setw(4) << i << endl;
    }
    return 0;
}