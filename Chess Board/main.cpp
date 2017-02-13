#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    for (int j=0; j < 4; j++)
    {
        for (int x = 0;x<3 ;x++) //(x==1||x==3||x==5||x==7))
        {
            for (int m = 0; m < 4; m++)
            {
                cout << setw(10) << "#####";
            }
            cout << endl;
        }
        for (int l=0; l < 3; l++)
        {
            cout << "#####";
            for(int n=0;n<3 ;n++) //(n==2||n==4||n==6||n==8))
            {
                cout << setw(10) << "#####";
            }
            cout << endl;
        }
    }
    return 0;
}