// TernaryOperator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int host, guest;
    cout << "Ternary Operator\n########################"<<endl;
    cout << "Enter Host ID :: " << endl;
    cin >> host;
    system("cls");
    cout << "Enter Guest ID :: " << endl;
    cin >> guest;

    //Syntax
    //(Value1 == Value2)?true block : false block;
    (host == guest) ? cout << "Access Granted" : cout << "Access Denied";
    system("pause>0");
    
}
