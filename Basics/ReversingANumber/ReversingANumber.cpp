// ReversingANumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Reversing a number\n-------------------------" << endl;
    cout << "Enter a number :: ";
    int num, revNumber = 0;;
    cin >> num;
    while (num != 0)
    {

        revNumber *= 10;
        revNumber += num % 10;
        num /= 10;
    }
    cout << "The Reversed Number :: " << revNumber;
    system("pause>0");    
}
