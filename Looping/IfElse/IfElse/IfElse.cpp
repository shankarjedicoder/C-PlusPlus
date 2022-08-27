// IfElse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int num;
    std::cout << "IF ELSE STATEMENTS!\n#####################"<<endl;
    cout << "Enter a number :: " << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Even Number";
    }
    else
    {
        cout << "Odd number";
    }
}

