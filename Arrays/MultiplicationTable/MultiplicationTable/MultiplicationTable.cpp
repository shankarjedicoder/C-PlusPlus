// MultiplicationTable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    std::cout << "MULTIPLICATION TABLE\n-------------------------------"<<endl;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++) {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << "---------------------------------------------------" << endl;
    }
    system("pause>0");
}