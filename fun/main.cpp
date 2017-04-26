
}#include <iostream>
#include <ctime>
#include <functional>
#include <algorithm>


using namespace std;

#define SIZE_A 100;
#define SIZE_B 1000;
#define SIZE_C 10000;

void fillArray(int array[], int array_size) {
    for (int i = 0; i < array_size; ++i) {
        array[i] = i;
    }
}

void shuffle(int array[], int array_size) {
    random_shuffle(array, array + array_size);
}

int selectionSort(int array[], int array_size) {
    clock_t start = clock(); // Get a current reading of time

    //pos_min is short for position of min
    int pos_min, temp;

    for (int i = 0; i < array_size - 1; i++) {
        pos_min = i;//set pos_min to the current index of array

        for (int j = i + 1; j < array_size; j++) {

            if (array[j] < array[pos_min])
                pos_min = j;
            //pos_min will keep track of the index that min is in, this is needed when a swap happens
        }

        //if pos_min no longer equals i than a smaller value must have been found, so a swap must occur
        if (pos_min != i) {
            temp = array[i];
            array[i] = array[pos_min];
            array[pos_min] = temp;
        }
    }

    clock_t end = clock(); // Get a current reading of time
    int time = end - start;
    return time; // Return the difference in time
}

int main() {
    int a[SIZE_A];
    int b[SIZE_B];
    int c[SIZE_C];
    fillArray(a, SIZE_A);
    fillArray(b, SIZE_B);
    fillArray(c, SIZE_C);
    // TO DO:
    // Check if the arrays are sorted using the function isSorted.
    // Make sure that the arrays are sorted before passing this point.
    // Note that you may have insertionSort or selectionSort instead.
    int sorting_sorted_a = selectionSort(a, SIZE_A);
    int sorting_sorted_b = selectionSort(b, SIZE_B);
    int sorting_sorted_c = selectionSort(c, SIZE_C);
    // TO DO:
    // Check if the arrays are sorted using the function isSorted.
    // Make sure that the arrays are sorted before passing this point.
    // Shuffle the array
    shuffle(a, SIZE_A);
    shuffle(b, SIZE_B);
    shuffle(c, SIZE_C);
    // TO DO:
    // Check if the arrays are sorted using the function isSorted.
    // Make sure that the arrays are NOT sorted before passing this point.
    // Now, resort your arrays.
    int sorting_unsorted_a = selectionSort(a, SIZE_A);
    int sorting_unsorted_b = selectionSort(b, SIZE_B);
    int sorting_unsorted_c = selectionSort(c, SIZE_C);
    // TO DO:
    // Check if the arrays are sorted using the function isSorted.
    // Make sure that the arrays are sorted before passing this point.
}