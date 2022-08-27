// WhileLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "While Loop (Iteration)\n-----------------------------"<<endl;
    //Check and print all the numbers divisible by 4 and 5 between 100 and 500
    int mivVal = 100, maxVal = 500;
    while (mivVal <= maxVal)
    {
        if (mivVal % 4 == 0 && mivVal % 5 == 0)
        {
            cout << mivVal << " is divisible by both 4 and 5" << endl;
        }
        mivVal++;
    }

    cout<<endl << "---------------------------" << endl;
    cout << "Enter a min value :: ";
    int min;
    cin >> min;
    cout << "Enter a max value";
    int max;
    cin >> max;
    while (min <= max)
    {
        if (min % 4 == 0 && min % 5 == 0)
        {
            cout << min << " is divisible by both 4 and 5" << endl;
        }
        min++;
    }


    system("pause>0");
}