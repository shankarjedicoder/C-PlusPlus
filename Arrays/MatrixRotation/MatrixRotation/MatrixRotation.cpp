#include <iostream>
#include<iomanip>
using namespace std;

//Input : 1 2 3
//        4 5 6
//        7 8 9

//Output :7 4 1
//        8 5 2
//        9 6 3

int main()
{
    std::cout << "Matrix Rotation\n";
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    system("cls");
    cout << "Your Entered matrix ::\n -----------------------------" << endl;    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout <<setw(4)<< a[i][j];
        }
        cout << endl;
    }

    cout << endl << endl;
    cout << "The Result revered matrix :: \n-------------------------------- " << endl;
    for (int j = 0; j < 3; j++)
    {
        for (int i = 2; i >= 0; i--)
        {
            cout <<setw(4) <<a[i][j];
        }
        cout << endl;
    }

    system("pause>0");
}