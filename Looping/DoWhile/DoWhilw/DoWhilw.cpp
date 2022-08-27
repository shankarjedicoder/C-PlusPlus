// DoWhilw.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Do While Loop\n--------------------------"<<endl;
    int newPin,inp, counter = 0;
    cout << "Enter your new Pin :: ";
    cin >> newPin;
    system("cls");
    do 
    {
        cout << "Enter your new pin again :: ";
        cin >> inp;
        system("cls");
        if (inp != newPin) { counter++; cout << "Incorrect! Attempt " << counter << " of 3" << endl;
        if (counter == 2) { cout << "FINAL ATTEMPT!" << endl; }}
    } while (counter < 3 && inp != newPin);

    (counter < 3) ? cout << "Loading..." : cout << "Blocked!!!";
    system("pause>0");
}