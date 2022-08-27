// SwitchCase-DaysInAMonth.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int year, month;
    std::cout << "Days in a month\n----------------------------"<<endl;
    cout << "Enter the year :: " << endl;
    cin >> year;
    cout << "Enter the month :: " << endl;
    cin >> month;
    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << endl << "------------------"<<endl << "The month has 31 days" << endl;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            cout << endl << "------------------"<<endl << "The month has 30 days" << endl;
            break;

        case 2:
            (year % 4 == 0) ? cout << "29 days" : cout << "28 days";
        break;


    }

}
