#include <iostream>
#include <ctime>
#include <functional>
#include <algorithm>
#include <stdio.h>

#define SIZE_A 100
#define SIZE_B 1000
#define SIZE_C 10000

using namespace std;

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

int selectionSort(int array[], int array_size, int &count) {
    clock_t start = clock(); // Get a current reading of time
    count = 0;
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
            count++;
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

    int count = 0;

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
    int sorting_sorted_a = selectionSort(a, SIZE_A, count);
    cout << sorting_sorted_a << endl;
    cout << count << endl;
    int sorting_sorted_b = selectionSort(b, SIZE_B, count);
    cout << sorting_sorted_b << endl;
    cout << count << endl;
    int sorting_sorted_c = selectionSort(c, SIZE_C, count);
    cout << sorting_sorted_c << endl;
    cout << count << endl;

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
    int sorting_unsorted_a = selectionSort(a, SIZE_A, count);
    cout << sorting_unsorted_a << endl;
    cout << count << endl;
    int sorting_unsorted_b = selectionSort(b, SIZE_B, count);
    cout << sorting_unsorted_b << endl;
    cout << count << endl;
    int sorting_unsorted_c = selectionSort(c, SIZE_C, count);
    cout << sorting_unsorted_c << endl;
    cout << count << endl;

    cout << "The following is representative of whether the array is sorted after it is shuffled and sorted.\n"
         << "1 = true\n"
         << "0 = false\n";
    cout << isSorted(a, SIZE_A) << endl;
    cout << isSorted(b, SIZE_B) << endl;
    cout << isSorted(c, SIZE_C) << endl;
    system("PAUSE");
}