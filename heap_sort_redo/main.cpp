#include <iostream>
#include <ctime>
#include <functional>
#include <algorithm>
#include <stdio.h>

#define SIZE_A 100
#define SIZE_B 1000
#define SIZE_C 10000

using namespace std;

void cheapSort(int arr[], int n);

void heapify(int arr[], int n, int i);

bool isSorted(int array[], int array_size) {
    bool is_sorted = true;
    for (int i = 1; is_sorted && i < array_size; ++i) {
        if (array[i - 1] > array[i]) {
            is_sorted = false;
        }
    }
    return is_sorted;
}

void fillArray(int array[], int array_size) {
    for (int i = 0; i < array_size; ++i) {
        array[i] = i;
    }
}

void shuffle(int array[], int array_size) {
    random_shuffle(array, array + array_size);
}

int heapSort(int array[], int array_size) {
    clock_t start = clock(); // Get a current reading of time

    cheapSort(array, array_size);

    clock_t end = clock(); // Get a current reading of time
    int time = end - start;
    return time; // Return the difference in time
}

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i) {
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void cheapSort(int arr[], int n) {
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

int main() {
    int a[SIZE_A];
    int b[SIZE_B];
    int c[SIZE_C];
    fillArray(a, SIZE_A);
    fillArray(b, SIZE_B);
    fillArray(c, SIZE_C);
    cout << "The following is representative of whether the array is sorted before it is shuffled.\n"
         << "1 = true\n"
         << "0 = false\n";
    cout << isSorted(a, SIZE_A) << endl;
    cout << isSorted(b, SIZE_B) << endl;
    cout << isSorted(c, SIZE_C) << endl;

    cout << "The following is the time it takes for the program to sort the sorted lists." << endl;
    int sorting_sorted_a = heapSort(a, SIZE_A);
    cout << sorting_sorted_a << endl;
    int sorting_sorted_b = heapSort(b, SIZE_B);
    cout << sorting_sorted_b << endl;
    int sorting_sorted_c = heapSort(c, SIZE_C);
    cout << sorting_sorted_c << endl;

    shuffle(a, SIZE_A);
    shuffle(b, SIZE_B);
    shuffle(c, SIZE_C);
    cout << "The following is representative of whether the array is sorted after it is shuffled.\n"
         << "1 = true\n"
         << "0 = false\n";
    cout << isSorted(a, SIZE_A) << endl;
    cout << isSorted(b, SIZE_B) << endl;
    cout << isSorted(c, SIZE_C) << endl;

    cout << "The following is the time it takes for the program to sort the shuffled lists" << endl;
    int sorting_unsorted_a = heapSort(a, SIZE_A);
    cout << sorting_unsorted_a << endl;
    int sorting_unsorted_b = heapSort(b, SIZE_B);
    cout << sorting_unsorted_b << endl;
    int sorting_unsorted_c = heapSort(c, SIZE_C);
    cout << sorting_unsorted_c << endl;

    cout << "The following is representative of whether the array is sorted after it is shuffled and sorted.\n"
         << "1 = true\n"
         << "0 = false\n";
    cout << isSorted(a, SIZE_A) << endl;
    cout << isSorted(b, SIZE_B) << endl;
    cout << isSorted(c, SIZE_C) << endl;
    system("PAUSE");
}