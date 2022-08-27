// FunctionWithReturnType.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool PrimeChecker(int number)
{
    for (int num = 2; num < number; num++)
    {
        if (number % num == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

void main()
{
    int number;
    do {
        system("cls");
        std::cout << "Prime number check using function\n-----------------------------" << endl;
        cout << "Enter a number to check for prime number :: ";
        cin >> number;
        bool check = PrimeChecker(number);
        (check == true) ? cout << number << " is prime" : cout << number << " is not a prime";
        system("pause>0");
    } while (number != 0);
}
