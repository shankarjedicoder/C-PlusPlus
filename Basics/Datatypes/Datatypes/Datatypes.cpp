// Datatypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Datatypes in C++\n################"<<endl;
    int number = 7;
    char name[30] = "Hello";
    float nums = 33.33;
    bool isActive = true;
    char gender = 'f';

    cout << "Size of Integer " << sizeof(int) << endl;
    cout << "Size of Integer :: " << sizeof(float) << endl;
    cout << "Size of Integer :: " << sizeof(bool) << endl;
    cout << "Size of Integer :: " << sizeof(char) << endl;
    cout << "Size of Integer :: " << sizeof(double) << endl;

    cout << "Maximum int value :: " << INT_MAX<<endl;
    cout << "Minimum int value :: " << INT_MIN<<endl;
    cout << "Unsigned Minimum int value :: " << UINT_MAX<<endl;

    system("pause>0");
}

