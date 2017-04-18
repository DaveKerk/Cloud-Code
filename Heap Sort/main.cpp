#include <iostream>
#include <ctime>
#include <cstdlib>
#include <time.h>

using namespace std;


int main() {
    srand(time(NULL));
    cout << (rand() % 100) + 1;

    return 0;
}