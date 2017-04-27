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
        swap(mainArray[parent],mainArray[i]);
        heapify(parent, arrayCount, mainArray);
    }
}

void heapSort(int arrayCount, int mainArray[]) {
    for (int i = arrayCount/2-1; i >= 0; i--) {
        heapify(i, arrayCount, mainArray);
    }
    for (int i = arrayCount-1 ; i >= 0; i--) {
        swap(mainArray[0], mainArray[i]);

        heapify(i, arrayCount, mainArray);
    }
    for (int i = 0; i < arrayCount; i++) {
        cout << mainArray[i] << setw(4) << i << endl;
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
    int arrayCount = 7;
//    cin >> arrayCount;
    int mainArray[7] = {1, 2, 3, 4, 5, 6, 7};
    /*for (int i = 0; i < arrayCount; i++) {
        mainArray[i] = ((rand() % arrayCount) + 1);
    }*/
    for (int i = 0; i < arrayCount; i++) {
        cout << mainArray[i] << setw(4) << i << endl;
    }
    system("PAUSE");
    // int n = sizeof(mainArray)/sizeof(mainArray[0]); // Didn't work.
    // cout << n << endl;
    // system("PAUSE");
    heapSort(arrayCount, mainArray);
    for (int i = 0; i < arrayCount; i++) {
        cout << mainArray[i] << setw(4) << i << endl;
    }
    return 0;
}

