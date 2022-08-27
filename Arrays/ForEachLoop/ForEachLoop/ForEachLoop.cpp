// ForEachLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a[5],count=0;
    std::cout << "For Each Loop\n-----------------------------------------"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the " << i + 1 << " value :: ";
        cin >> a[i];
    }
    system("cls");
    for (auto x : a)    //Syntax for(auto variableName : arrayName)
    {
        cout << setw(4) << x;
    }

    for (auto num : a)
    {
        count += num;
    }

    cout<<endl << "Thee sum is :: "<<count;
    system("pause>0");
}
