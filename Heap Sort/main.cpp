/*
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

void heapify(int i, int arrayCount, int mainArray[]) {
    int parent = i;
    int leftChild = (2 * i) + 1;
    int rightChild = (2 * i) + 2;

    if (leftChild < arrayCount && mainArray[leftChild] >= mainArray[parent]) {
        //parent = leftChild;
        swap(mainArray[parent],mainArray[leftChild]);
    }
    if (rightChild < arrayCount && mainArray[rightChild] >= mainArray[parent]) {
        //parent = rightChild;
        swap(mainArray[parent],mainArray[rightChild]);
    }
    if (parent != i) {
        swap(mainArray[i], mainArray[parent]);

        heapify(i, parent, mainArray);
    }
    //cout << "a" << i << endl;

}

void heapSort(int arrayCount, int mainArray[]) {
    for (int i = arrayCount/2; i >= 0; i--) {
        heapify(i, arrayCount, mainArray);
    }
    for (int i = arrayCount - 1; i >= 0; i--) {
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
    int arrayCount = 10;
//    cin >> arrayCount;
    int mainArray[10] = {1, 2, 3, 4, 5};
    for (int i = 0; i < arrayCount; i++) {
        mainArray[i] = ((rand() % arrayCount) + 1);
    }
    for (int i = 0; i < arrayCount; i++) {
        cout << mainArray[i] << setw(4) << i << endl;
    }
    system("PAUSE");
    heapSort(arrayCount, mainArray);
    for (int i = 0; i < arrayCount; i++) {
        cout << mainArray[i] << setw(4) << i << endl;
    }
    return 0;
}*/

// C++ program for implementation of Heap Sort
#include <iostream>
using namespace std;

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
    for (int i=0; i<n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

// Driver program
int main()
{
    int arr[39] = {12, 11, 13, 5, 6, 7,78,95,522,8,1,6,4,5,2,1,8,2,8,8,1,3,8,7,8,0,5,3,8,7,85,1,38,8,4,8,79,5,48};
    int n = 39;//sizeof(arr)/sizeof(arr[0]);

    heapSort(arr, n);

    cout << "Sorted array is \n";
    printArray(arr, n);
}
