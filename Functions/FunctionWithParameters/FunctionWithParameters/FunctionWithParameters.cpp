// FunctionWithParameters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>
using namespace std;

void FactorialCalculator(int number)
{
    int fact = 1;
    for (int i = 1; i <= number; i++)
    {
        fact *= i;
    }
    cout << number << "! = " << fact;
}

void SquareCalculator(int number)
{
    int square = number * number;
    cout << number << " ^ 2 = " << square;
}

void SquareRootCalculator(int number)
{

    int root = sqrt(number);
    cout << "Sqrt(" << number << ") = " << root;
}

void main()
{
    int choice;
    do {
        system("cls");
        std::cout << "Factorial using function!\n----------------------" << endl;
        cout << "Enter the number to find the factorial :: ";
        int num;
        cin >> num;
        cout << "Enter the choice::" << endl
            << "1. Factorial" << endl
            << "2. Square" << endl
            << "3. Square Root" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            FactorialCalculator(num);
            break;
        case 2:
            SquareCalculator(num);
            break;
        case 3:
            SquareRootCalculator(num);
            break;
        }
        system("pause>0");
    }   while (choice <= 3);
}