#include <iostream>

using namespace std;

int average(int size) {
    int scores[size];
    int sum = 0;
    for (int i = 0; i < size; i++) {
        cout << "Enter the score for exam number: " << i + 1 << endl;
        cin >> scores[i];
        sum += scores[i];
    }
    return sum / size;
}

int main() {
    cout << "Hello!" << endl << "Enter the amount of scores you wish to average." << endl;
    int size;
    cin >> size;
    cout << endl;
    cout << average(size);
    return 0;
}