#include <iostream>
#include <time.h>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    int high = 5; //Ghost.
    int low = 1; //Ghost.
    int end = 99; //Ghost.
    int end_all = 999; //Ghost.
    int score = 0;
    int lives = 5;
    int input;
    int var;
    srand(time(NULL));

    cout << "This is a guessing game, if you succeed then you will pass, if you fail then you will be DOOMED.\n";
    system("pause");
    cout << "Go ahead, and guess...\n";

    do
    {
        var = (rand() % (high - low + 1) + 1);
        while ((lives > 0) && (score < 5) && (end = 99))
        {
            end_all = 1000; //Breaks do-while loop.
            cin >> input;
            if (input == var)
            {
                var = (rand() % (high - low + 1) + 1);
                cout << "Good job!! You guessed my number! You have been spared today.\n";
                score++;
            }
            else
            {
                cout << "You have failed... You are DOOMED!\n";
                lives--;
            }
            if (score == 5)
            {
                end = 100;
                cout << endl;
                cout << "Well done!! You have successfully earned your freedom, now live everyday as if it were your last... because you never know, Octathorpe Industries is going to keep it's eye on you. \n";
                system("pause");
                cout << "Would you like to play again? y/n\n";
                string response;
                cin >> response;
                if (response == "y" || "Y");
                {
                    score = 0;
                    lives = 5;
                    end_all = 999; //Re-satisfies do-while loop.
                    end = 99;
                }
            }
            if (lives == 0)
            {
                end = 100;
                cout << endl;
                cout << "You have failed... you will forever be a test subject of Octathorpe Industries. Enjoy your new life as a test subject.\n";
                system("pause");
                cout << "Would you like to play again? y/n\n";
                string response;
                cin >> response;
                if (response == "y" || "Y");
                {
                    score = 0;
                    lives = 5;
                    end_all = 999; //Re-satisfies do-while loop.
                    end = 99;
                }
            }
            if (score != 5 && lives != 0)
            {
                cout << "Score:" << score << endl;
                cout << "Lives:" << lives << endl;
                cout << "Next round...\n";
                system("pause");
            }
        } //End of while loop.
    } while (end_all = 999);
    return 0;
}