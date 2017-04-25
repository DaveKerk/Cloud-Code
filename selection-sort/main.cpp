#include <iostream>
#include <ctime>
#include <functional>
#include <algorithm>


using namespace std;

#define SIZE_A 100;
#define SIZE_B 1000;
#define SIZE_C 10000;

void fillArray ( int array [], int array_size ){
    for ( int i=0; i<array_size; ++i )
    {
        array[i] = i;
    }
}

void shuffle ( int array [], int array_size )
{
    random_shuffle ( array, array + array_size );
}

int selectionSort ( int array [], int array_size )
{
    clock_t start = clock(); // Get a current reading of time


    clock_t end = clock(); // Get a current reading of time
    int time=end-start;
    return time; // Return the difference in time
}

int main ()
{
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