// SwitchCase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Switch Case Demo\n########################"<<endl;
    cout << "Enter two numbers" << endl << "-----------------"<<endl;
    int num1, num2,choice;
    cin >> num1 >> num2;
    cout << "---------------------";
    cout << "1. Addition" << endl
        << "2. Subtraction" << endl
        << "3. Multiplication" << endl
        << "4. Division" << endl
        << "5. Modulo Division" << endl
        << "--------------------------" << endl
        << "Enter your choice (1 - 5) :: " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << "Selected : Addition" << endl;
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    }
    case 2:
    {
        cout << "Selected : Subtraction" << endl;
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    }
    case 3:
    {
        cout << "Selected : Multiplication" << endl;
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    }
    case 4:
    {
        cout << "Selected : Division" << endl;
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        break;
    }
    case 5:
    {
        cout << "Selected : Modulo Division" << endl;
        cout << num1 << "  %" << num2 << " = " << num1 % num2 << endl;
        break;
    }
    default:
    {
        cout << "Invalid Selection" << endl;
        break;
    }
    }


    
}
