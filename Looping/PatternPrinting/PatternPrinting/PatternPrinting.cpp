// PatternPrinting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int height;
    char symbol;
    std::cout << "Pattern Printing\n--------------------"<<endl;
    cout << "Enter the length :: ";
    cin >> height;
    cout << "Enter the pattern :: ";
    cin >> symbol;
    for (int i = -1; i < height; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout <<setw(4) << symbol;
        }
        cout << endl;
    }
    cout << "----------------------------------" << endl;
    for (int i = height; i >= 0; i--)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << setw(4) << symbol;
        }
        cout << endl;
    }
    system("pause>0");
}
