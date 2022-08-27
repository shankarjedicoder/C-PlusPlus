// OperatorExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Operator Exercise\n";

    int a = 5, b = 4;
    cout << a + (b++)<<endl; //10
    cout << (--a) + b << endl<<endl; //8
    cout << !(true && false) << endl;   //true
    cout << (true && false || true) << endl; //true

    int x = 7;
    cout << (++x <= 9 && x + 2 >= 10) << endl; //true

    int y = 3;
    cout << (y == y++)<< endl; //false

    float z = 8;
    z += 2;
    cout << z << endl;  //10
    z /= 2;
    cout << z << endl; //5

    system("pause>0");



}

