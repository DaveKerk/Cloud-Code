#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter test score for test number " << j + 1 << endl;
            int exam;
            cin >> exam;
            sum += exam;
        }
        int average = sum / 3;
        cout << "Student Number " << i + 1 << "'s average test score was: " << average << endl;
    }

    return 0;
}