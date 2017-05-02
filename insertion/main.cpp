// 00000011111111112222222222333333333344444444445555555555666666666677777777778
// 45678901234567890123456789012345678901234567890123456789012345678901234567890
//
// Front Range Community College, Larimer Campus
// class: CSC 119-602 Intro to Programming
// professor: Mohammad Huwaidi
//
// author: Reyes Jaramillo (S02223286)
// team project - sorting comparisons
// file: insertionSort.cpp
// source file
//
// created by Reyes Jaramillo on 4/29/17.

#include <ctime>
#include <functional>
#include <algorithm>
#include <iostream>
#include <stdio.h>

#define SIZE_A 100
#define SIZE_B 1000
#define SIZE_C 10000

using namespace std;

/* return true if the array is sorted; otherwise, false
 * checks to see if array is sorted */
bool isSorted(int array[], int array_size)
{
    bool is_sorted = true;
    for (int i = 1; is_sorted && i < array_size; ++i)
    {
        if (array[i - 1] > array[i])
        {
            is_sorted = false;
        }
    }
    return is_sorted;
}

// fill array in ascending order from 0 to array_size
void fillArray(int array[], int array_size)
{
    for (int i = 0; i < array_size; ++i)
    {
        array[i] = i;
    }
}

// shuffling function for arrays
void shuffle(int array[], int array_size)
{
    random_shuffle(array, array + array_size);
}

// function to sort an array using insertion sort
int insertionSort(int arr[], int n)
{
    clock_t start = clock(); // get a current reading of time in ticks (start time)

    int i, key, j;
    for (i = 1; i < n; i++) // start with the left side, adding 1 element with each i iteration
    {
        key = arr[i]; // starts at current index
        j = i-1;

        /* move elements of arr[0..i-1], that are
         * greater than key, to one position ahead
         * of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
    clock_t end = clock(); // get a current reading of time in ticks (end time)

    return end - start;    // return the difference in start and end time
}

/* this is the main program that calculates the number of "ticks" (time) it takes
 * an insertion sorting algorithm to sort sorted and unsorted arrays of three sizes */
int main()
{
    int a[SIZE_A];
    int b[SIZE_B];
    int c[SIZE_C];
    int count = 0;
    fillArray(a, SIZE_A);
    fillArray(b, SIZE_B);
    fillArray(c, SIZE_C);
    cout << "This states whether or not the array is sorted BEFORE being shuffled" << endl;
    cout << "1 = true" << endl;
    cout << "0 = false" << endl;
    cout << isSorted(a, SIZE_A) << endl;
    cout << isSorted(b, SIZE_B) << endl;
    cout << isSorted(c, SIZE_C) << endl;

    // arrays are sorted with isSorted and are sorted before proceeding beyond this point
    cout << "The following is the time (in ticks) it takes for the function to sort the sorted arrays." << endl;
    int sorting_sorted_a = insertionSort(a, SIZE_A);
    cout << sorting_sorted_a << endl;
    int sorting_sorted_b = insertionSort(b, SIZE_B);
    cout << sorting_sorted_b << endl;
    int sorting_sorted_c = insertionSort(c, SIZE_C);
    cout << sorting_sorted_c << endl;

    // shuffles the array
    shuffle(a, SIZE_A);
    shuffle(b, SIZE_B);
    shuffle(c, SIZE_C);
    cout << "This states whether or not the array is sorted AFTER being shuffled" << endl;
    cout << "1 = true" << endl;
    cout << "0 = false" << endl;
    cout << isSorted(a, SIZE_A) << endl;
    cout << isSorted(b, SIZE_B) << endl;
    cout << isSorted(c, SIZE_C) << endl;

    /* arrays are checked to see if they are sorted using isSorted, then
     * makes sure that arrays are NOT sorted before passing this point */
    cout << "The following is the time (in ticks) it takes for the function to sort the shuffled arrays" << endl;
    int sorting_unsorted_a = insertionSort(a, SIZE_A);
    cout << sorting_unsorted_a << endl;
    int sorting_unsorted_b = insertionSort(b, SIZE_B);
    cout << sorting_unsorted_b << endl;
    int sorting_unsorted_c = insertionSort(c, SIZE_C);
    cout << sorting_unsorted_c << endl;

    cout << "This states whether or not the array is sorted AFTER being shuffled AND sorted" << endl;
    cout << "1 = true" << endl;
    cout << "0 = false" << endl;
    cout << isSorted(a, SIZE_A) << endl;
    cout << isSorted(b, SIZE_B) << endl;
    cout << isSorted(c, SIZE_C) << endl;
    system("PAUSE");
}