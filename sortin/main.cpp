#include <iostream>
#include <ctime>
#include <algorithm>
#include <iomanip>

#define SIZE_A 100
#define SIZE_B 1000
#define SIZE_C 10000

using namespace std;

/* return true if the array is sorted; otherwise, false
   checks to see if array is sorted */
bool isSorted(int array[], int array_size) {
    bool is_sorted = true;
    for (int i = 1; is_sorted && i < array_size; ++i) {
        if (array[i - 1] > array[i]) {
            is_sorted = false;
        }
    }
    return is_sorted;
}

// fill array in ascending order from 0 to array_size
void fillArray(int array[], int array_size) {
    for (int i = 0; i < array_size; ++i) {
        array[i] = i;
    }
}

// shuffling function for arrays
void shuffle(int array[], int array_size) {
    random_shuffle(array, array + array_size);
}

int selectionSort(int array[], int array_size, int &operations) {
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
            operations++;
            temp = array[i];
            array[i] = array[pos_min];
            array[pos_min] = temp;
        }
    }

    clock_t end = clock(); // Get a current reading of time
    int time = end - start;
    return time; // Return the difference in time
}

int bubbleSort(int array[], int array_size, int &operations) {
    clock_t start = clock(); // Get a current reading of time

    bool swapped = true;
    int j = 0;
    int tmp;
    while (swapped) {
        swapped = false;
        j++;
        for (int i = 0; i < array_size - j; i++) {
            if (array[i] > array[i + 1]) {
                operations++;
                tmp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = tmp;
                swapped = true;
            }
        }
    }

    clock_t end = clock(); // Get a current reading of time
    int time = end - start;
    return time; // Return the difference in time
}

int insertionSort(int arr[], int n, int &operations) {
    clock_t start = clock(); // get a current reading of time in ticks (start time)

    int i, key, j;
    for (i = 1; i < n; i++) // start with the left side, adding 1 element with each i iteration
    {
        key = arr[i]; // starts at current index
        j = i - 1;

        /* move elements of arr[0..i-1], that are
         * greater than key, to one position ahead
         * of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
            operations++;
        }
        arr[j + 1] = key;
    }
    clock_t end = clock(); // get a current reading of time in ticks (end time)

    return end - start;    // return the difference in start and end time
}

int main() {
    int operations = 0;
    int a[SIZE_A];
    int b[SIZE_B];
    int c[SIZE_C];

    //The following variables are used to find the average time taken for each algorithm.
    int selectionSumTimeSorted_A = 0;
    int bubbleSumTimeSorted_A = 0;
    int insertionSumTimeSorted_A = 0;

    int selectionSumTimeUnsorted_A = 0;
    int bubbleSumTimeUnsorted_A = 0;
    int insertionSumTimeUnsorted_A = 0;

    int selectionSumTimeSorted_B = 0;
    int bubbleSumTimeSorted_B = 0;
    int insertionSumTimeSorted_B = 0;

    int selectionSumTimeUnsorted_B = 0;
    int bubbleSumTimeUnsorted_B = 0;
    int insertionSumTimeUnsorted_B = 0;

    int selectionSumTimeSorted_C = 0;
    int bubbleSumTimeSorted_C = 0;
    int insertionSumTimeSorted_C = 0;

    int selectionSumTimeUnsorted_C = 0;
    int bubbleSumTimeUnsorted_C = 0;
    int insertionSumTimeUnsorted_C = 0;

    int selectionSumOperationsSorted_A = 0;
    int bubbleSumOperationsSorted_A = 0;
    int insertionSumOperationsSorted_A = 0;

    int selectionSumOperationsUnsorted_A = 0;
    int bubbleSumOperationsUnsorted_A = 0;
    int insertionSumOperationsUnsorted_A = 0;

    int selectionSumOperationsSorted_B = 0;
    int bubbleSumOperationsSorted_B = 0;
    int insertionSumOperationsSorted_B = 0;

    int selectionSumOperationsUnsorted_B = 0;
    int bubbleSumOperationsUnsorted_B = 0;
    int insertionSumOperationsUnsorted_B = 0;

    int selectionSumOperationsSorted_C = 0;
    int bubbleSumOperationsSorted_C = 0;
    int insertionSumOperationsSorted_C = 0;

    int selectionSumOperationsUnsorted_C = 0;
    double bubbleSumOperationsUnsorted_C = 0;
    double insertionSumOperationsUnsorted_C = 0;

    cout << "Greetings!! \n"
         << "The following program is used to find the average time it takes\n"
         << "to sort a list of size: 100, 1,000, and 10,000 based on a user\n"
         << "input number of trials. \n"
         << "Let's begin! \n"
         << endl;

    // Asks the user how many trials they would like to run to find an average.
    int trialSize = 0;
    cout << "How many trials would you like to run?" << endl;
    cin >> trialSize;

    cout << endl;



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    for (int i = 0; i < trialSize; i++) {
        operations=0;
        fillArray(a, SIZE_A);       //
        fillArray(b, SIZE_B);       // Fills an array with the appropriate sizes.
        fillArray(c, SIZE_C);       //


        int sorting_sorted_a_selection = selectionSort(a, SIZE_A, operations);      //
        selectionSumTimeSorted_A += sorting_sorted_a_selection;                     // Runs the selection sorting algorithm
        selectionSumOperationsSorted_A += operations;
        operations = 0;
        int sorting_sorted_b_selection = selectionSort(b, SIZE_B, operations);      // with the already sorted arrays and
        selectionSumTimeSorted_B += sorting_sorted_b_selection;                     // then adds the time it takes to sort
        selectionSumOperationsSorted_B += operations;
        operations = 0;
        int sorting_sorted_c_selection = selectionSort(c, SIZE_C, operations);      // to the sum total time to be averaged
        selectionSumTimeSorted_C += sorting_sorted_c_selection;                     // later.
        selectionSumOperationsSorted_C += operations;
        operations = 0;

        shuffle(a, SIZE_A);     //
        shuffle(b, SIZE_B);     // Shuffles the filled array to randomize the order.
        shuffle(c, SIZE_C);     //

        if (isSorted(a, SIZE_A)) return -1;     //
        if (isSorted(b, SIZE_B)) return -1;     // Breaks out of the code of an array is sorted even after shuffling.
        if (isSorted(c, SIZE_C)) return -1;     //

        int sorting_unsorted_a_selection = selectionSort(a, SIZE_A, operations);    //
        selectionSumTimeUnsorted_A += sorting_unsorted_a_selection;                 // Runs the selection sorting algorithm
        selectionSumOperationsUnsorted_A += operations;
        operations = 0;
        int sorting_unsorted_b_selection = selectionSort(b, SIZE_B, operations);    // with the unsorted arrays and then adds
        selectionSumTimeUnsorted_B += sorting_unsorted_b_selection;                 // the time it takes to sort to the sum
        selectionSumOperationsUnsorted_B += operations;
        operations = 0;
        int sorting_unsorted_c_selection = selectionSort(c, SIZE_C, operations);    // total to be averaged later.
        selectionSumTimeUnsorted_C += sorting_unsorted_c_selection;                 //
        selectionSumOperationsUnsorted_C += operations;
        operations = 0;

        if (!isSorted(a, SIZE_A)) return -2;    //
        if (!isSorted(b, SIZE_B)) return -2;    // Breaks out of the code if an array is not in order after sorting.
        if (!isSorted(c, SIZE_C)) return -2;    //
    }

    int averageSelectionTimeSorted_A = selectionSumTimeSorted_A / trialSize;          //
    int averageSelectionTimeSorted_B = selectionSumTimeSorted_B / trialSize;          // Takes the sum total time for
    int averageSelectionTimeSorted_C = selectionSumTimeSorted_C / trialSize;          // each scenario and averages
    int averageSelectionTimeUnsorted_A = selectionSumTimeUnsorted_A / trialSize;      // it given the amount of
    int averageSelectionTimeUnsorted_B = selectionSumTimeUnsorted_B / trialSize;      // trials.
    int averageSelectionTimeUnsorted_C = selectionSumTimeUnsorted_C / trialSize;      //

    int averageSelectionOperationsSorted_A = selectionSumOperationsSorted_A / trialSize;          //
    int averageSelectionOperationsSorted_B = selectionSumOperationsSorted_B / trialSize;          // Takes the sum total Operations for
    int averageSelectionOperationsSorted_C = selectionSumOperationsSorted_C / trialSize;          // each scenario and averages
    int averageSelectionOperationsUnsorted_A = selectionSumOperationsUnsorted_A / trialSize;      // it given the amount of
    int averageSelectionOperationsUnsorted_B = selectionSumOperationsUnsorted_B / trialSize;      // trials.
    int averageSelectionOperationsUnsorted_C = selectionSumOperationsUnsorted_C / trialSize;      //

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    for (int i = 0; i < trialSize; i++) {
        operations=0;
        fillArray(a, SIZE_A);       //
        fillArray(b, SIZE_B);       // Fills an array with the appropriate sizes.
        fillArray(c, SIZE_C);       //

        int sorting_sorted_a_bubble = bubbleSort(a, SIZE_A, operations);      //
        bubbleSumTimeSorted_A += sorting_sorted_a_bubble;                     // Runs the bubble sorting algorithm
        bubbleSumOperationsSorted_A += operations;
        operations = 0;
        int sorting_sorted_b_bubble = bubbleSort(b, SIZE_B, operations);      // with the already sorted arrays and
        bubbleSumTimeSorted_B += sorting_sorted_b_bubble;                     // then adds the time it takes to sort
        bubbleSumOperationsSorted_B += operations;
        operations = 0;
        int sorting_sorted_c_bubble = bubbleSort(c, SIZE_C, operations);      // to the sum total time to be averaged
        bubbleSumTimeSorted_C += sorting_sorted_c_bubble;                     // later.
        bubbleSumOperationsSorted_C += operations;
        operations = 0;

        shuffle(a, SIZE_A);     //
        shuffle(b, SIZE_B);     // Shuffles the filled array to randomize the order.
        shuffle(c, SIZE_C);     //

        if (isSorted(a, SIZE_A)) return -1;     //
        if (isSorted(b, SIZE_B)) return -1;     // Breaks out of the code of an array is sorted even after shuffling.
        if (isSorted(c, SIZE_C)) return -1;     //

        int sorting_unsorted_a_bubble = bubbleSort(a, SIZE_A, operations);    //
        bubbleSumTimeUnsorted_A += sorting_unsorted_a_bubble;                 // Runs the bubble sorting algorithm
        bubbleSumOperationsUnsorted_A += operations;
        operations = 0;
        int sorting_unsorted_b_bubble = bubbleSort(b, SIZE_B, operations);    // with the unsorted arrays and then adds
        bubbleSumTimeUnsorted_B += sorting_unsorted_b_bubble;                 // the time it takes to sort to the sum
        bubbleSumOperationsUnsorted_B += operations;
        operations = 0;
        int sorting_unsorted_c_bubble = bubbleSort(c, SIZE_C, operations);    // total to be averaged later.
        bubbleSumTimeUnsorted_C += sorting_unsorted_c_bubble;                 //
        bubbleSumOperationsUnsorted_C += operations;
        operations = 0;

        if (!isSorted(a, SIZE_A)) return -2;    //
        if (!isSorted(b, SIZE_B)) return -2;    // Breaks out of the code if an array is not in order after sorting.
        if (!isSorted(c, SIZE_C)) return -2;    //
    }

    int averagebubbleTimeSorted_A = bubbleSumTimeSorted_A / trialSize;          //
    int averagebubbleTimeSorted_B = bubbleSumTimeSorted_B / trialSize;          // Takes the sum total time for
    int averagebubbleTimeSorted_C = bubbleSumTimeSorted_C / trialSize;          // each scenario and averages
    int averagebubbleTimeUnsorted_A = bubbleSumTimeUnsorted_A / trialSize;      // it given the amount of
    int averagebubbleTimeUnsorted_B = bubbleSumTimeUnsorted_B / trialSize;      // trials.
    int averagebubbleTimeUnsorted_C = bubbleSumTimeUnsorted_C / trialSize;      //

    int averagebubbleOperationsSorted_A = bubbleSumOperationsSorted_A / trialSize;          //
    int averagebubbleOperationsSorted_B = bubbleSumOperationsSorted_B / trialSize;          // Takes the sum total Operations for
    int averagebubbleOperationsSorted_C = bubbleSumOperationsSorted_C / trialSize;          // each scenario and averages
    int averagebubbleOperationsUnsorted_A = bubbleSumOperationsUnsorted_A / trialSize;      // it given the amount of
    int averagebubbleOperationsUnsorted_B = bubbleSumOperationsUnsorted_B / trialSize;      // trials.
    int averagebubbleOperationsUnsorted_C = bubbleSumOperationsUnsorted_C / trialSize;      //

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    for (int i = 0; i < trialSize; i++) {
        operations = 0;
        fillArray(a, SIZE_A);       //
        fillArray(b, SIZE_B);       // Fills an array with the appropriate sizes.
        fillArray(c, SIZE_C);       //

        int sorting_sorted_a_insertion = insertionSort(a, SIZE_A, operations);      //
        insertionSumTimeSorted_A += sorting_sorted_a_insertion;                     // Runs the insertion sorting algorithm
        insertionSumOperationsSorted_A += operations;
        operations = 0;
        int sorting_sorted_b_insertion = insertionSort(b, SIZE_B, operations);      // with the already sorted arrays and
        insertionSumTimeSorted_B += sorting_sorted_b_insertion;                     // then adds the time it takes to sort
        insertionSumOperationsSorted_B += operations;
        operations = 0;
        int sorting_sorted_c_insertion = insertionSort(c, SIZE_C, operations);      // to the sum total time to be averaged
        insertionSumTimeSorted_C += sorting_sorted_c_insertion;                     // later.
        insertionSumOperationsSorted_C += operations;
        operations = 0;

        shuffle(a, SIZE_A);     //
        shuffle(b, SIZE_B);     // Shuffles the filled array to randomize the order.
        shuffle(c, SIZE_C);     //

        if (isSorted(a, SIZE_A)) return -1;     //
        if (isSorted(b, SIZE_B)) return -1;     // Breaks out of the code of an array is sorted even after shuffling.
        if (isSorted(c, SIZE_C)) return -1;     //

        int sorting_unsorted_a_insertion = insertionSort(a, SIZE_A, operations);    //
        insertionSumTimeUnsorted_A += sorting_unsorted_a_insertion;                 // Runs the insertion sorting algorithm
        insertionSumOperationsUnsorted_A += operations;
        operations = 0;
        int sorting_unsorted_b_insertion = insertionSort(b, SIZE_B, operations);    // with the unsorted arrays and then adds
        insertionSumTimeUnsorted_B += sorting_unsorted_b_insertion;                 // the time it takes to sort to the sum
        insertionSumOperationsUnsorted_B += operations;
        operations = 0;
        int sorting_unsorted_c_insertion = insertionSort(c, SIZE_C, operations);    // total to be averaged later.
        insertionSumTimeUnsorted_C += sorting_unsorted_c_insertion;                 //
        insertionSumOperationsUnsorted_C += operations;
        operations = 0;

        if (!isSorted(a, SIZE_A)) return -2;    //
        if (!isSorted(b, SIZE_B)) return -2;    // Breaks out of the code if an array is not in order after sorting.
        if (!isSorted(c, SIZE_C)) return -2;    //
    }

    int averageinsertionTimeSorted_A = insertionSumTimeSorted_A / trialSize;          //
    int averageinsertionTimeSorted_B = insertionSumTimeSorted_B / trialSize;          // Takes the sum total time for
    int averageinsertionTimeSorted_C = insertionSumTimeSorted_C / trialSize;          // each scenario and averages
    int averageinsertionTimeUnsorted_A = insertionSumTimeUnsorted_A / trialSize;      // it given the amount of
    int averageinsertionTimeUnsorted_B = insertionSumTimeUnsorted_B / trialSize;      // trials.
    int averageinsertionTimeUnsorted_C = insertionSumTimeUnsorted_C / trialSize;      //

    int averageinsertionOperationsSorted_A = insertionSumOperationsSorted_A / trialSize;          //
    int averageinsertionOperationsSorted_B = insertionSumOperationsSorted_B / trialSize;          // Takes the sum total Operations for
    int averageinsertionOperationsSorted_C = insertionSumOperationsSorted_C / trialSize;          // each scenario and averages
    int averageinsertionOperationsUnsorted_A = insertionSumOperationsUnsorted_A / trialSize;      // it given the amount of
    int averageinsertionOperationsUnsorted_B = insertionSumOperationsUnsorted_B / trialSize;      // trials.
    int averageinsertionOperationsUnsorted_C = insertionSumOperationsUnsorted_C / trialSize;      //

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // Formats the top outputted line to prepare for easy reading.
    cout << "This chart is the average amount of time it takes each sorting algorithm to sort a list in\n"
         << "each given scenario. The average is calculated by the sum time divided by " << trialSize << "." << endl
         << endl;
    cout << setw(12) << "Sorted:" << setw(8) << SIZE_A << setw(8) << SIZE_B << setw(8) << SIZE_C
         << setw(12) << "Unsorted:" << setw(8) << SIZE_A << setw(8) << SIZE_B << setw(10) << SIZE_C << endl;
    cout << setw(12) << "Selection:" << setw(8) << averageSelectionTimeSorted_A << setw(8)
         << averageSelectionTimeSorted_B << setw(8) << averageSelectionTimeSorted_C
         << setw(20) << averageSelectionTimeUnsorted_A << setw(8) << averageSelectionTimeUnsorted_B << setw(10)
         << averageSelectionTimeUnsorted_C << endl;
    cout << setw(12) << "Bubble:" << setw(8) << averagebubbleTimeSorted_A << setw(8)
         << averagebubbleTimeSorted_B << setw(8) << averagebubbleTimeSorted_C
         << setw(20) << averagebubbleTimeUnsorted_A << setw(8) << averagebubbleTimeUnsorted_B << setw(10)
         << averagebubbleTimeUnsorted_C << endl;
    cout << setw(12) << "Insertion:" << setw(8) << averageinsertionTimeSorted_A << setw(8)
         << averageinsertionTimeSorted_B << setw(8) << averageinsertionTimeSorted_C
         << setw(20) << averageinsertionTimeUnsorted_A << setw(8) << averageinsertionTimeUnsorted_B << setw(10)
         << averageinsertionTimeUnsorted_C << endl << endl;


    // Formats the top outputted line to prepare for easy reading.
    cout << "This chart is the average amount of operations it takes each sorting algorithm to sort a list in\n"
         << "each given scenario. The average is calculated by the sum operations divided by " << trialSize << "." << endl
         << endl;
    cout << setw(12) << "Sorted:" << setw(8) << SIZE_A << setw(8) << SIZE_B << setw(8) << SIZE_C
         << setw(12) << "Unsorted:" << setw(8) << SIZE_A << setw(8) << SIZE_B << setw(10) << SIZE_C << endl;
    cout << setw(12) << "Selection:" << setw(8) << averageSelectionOperationsSorted_A << setw(8)
         << averageSelectionOperationsSorted_B << setw(8) << averageSelectionOperationsSorted_C
         << setw(20) << averageSelectionOperationsUnsorted_A << setw(8) << averageSelectionOperationsUnsorted_B << setw(10)
         << averageSelectionOperationsUnsorted_C << endl;
    cout << setw(12) << "Bubble:" << setw(8) << averagebubbleOperationsSorted_A << setw(8)
         << averagebubbleOperationsSorted_B << setw(8) << averagebubbleOperationsSorted_C
         << setw(20) << averagebubbleOperationsUnsorted_A << setw(8) << averagebubbleOperationsUnsorted_B << setw(10)
         << averagebubbleOperationsUnsorted_C << endl;
    cout << setw(12) << "Insertion:" << setw(8) << averageinsertionOperationsSorted_A << setw(8)
         << averageinsertionOperationsSorted_B << setw(8) << averageinsertionOperationsSorted_C
         << setw(20) << averageinsertionOperationsUnsorted_A << setw(8) << averageinsertionOperationsUnsorted_B << setw(10)
         << averageinsertionOperationsUnsorted_C << endl;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << endl << "Thanks for using the program." << endl << "BYE!!" << endl << endl;
    system("PAUSE");
    return 0;
}