// IfElseExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "If,Else If, else\n##############"<<endl;
    float side1, side2, side3;
    cout << "Enter the three sides :: " << endl;
    cin >> side1 >> side2 >> side3;
    if (side1 == side2 == side3)
    {
        cout << "Equilateral triangle" << endl;
    }
    else if(side1 != side2 != side3)
    {
        cout << "Scalene triangle" << endl;

    }
    else
    {
        cout << "Isosceles triangle" << endl;
    }
}

