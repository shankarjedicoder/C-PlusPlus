// Swapping two numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Swapping two numbers\n#############################";
    cout << "Enter two numbers :: " << endl;
    cin >> a >> b;
    cout << "a = " << a << endl << "b = " << b << endl;
    c = a;
    a = b;
    b = c;
    cout << "Swapping involving one temporary valiable : " << endl << "a = " << a << endl << "b = " << b << endl<<endl;
    cout << "---------------------------------------------------------------------------" << endl;

    cout << "Enter two numbers again ::" << endl;
    cin >> a >> b;
    cout << "a = " << a << endl << "b = " << b << endl; //50 , 60
    a = a + b; //110
    b = a - b;  //60
    a = a - b;  //50
    cout << "Swapping involving no temporary valiable : " << endl << "a = " << a << endl << "b = " << b << endl;




}
