// MatrixAddition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int num;
    
    int a[3][3], b[3][3], c[3][3];
    std::cout << "Matrix Addition\n------------------------------"<<endl;
    cout << "Enter the first matrix \n-----------------------------"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter " << i << " , " << j << " value :: ";
            cin >> num;
            a[i][j] = num;
        }
        cout << endl;
    }
    system("cls");
    cout << "Enter the second matrix \n-----------------------------" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter " << i << " , " << j << " value :: ";
            cin >> num;
            b[i][j] = num;
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
        cout << endl;
    }
    system("cls");
    cout << "The result matrix is \n-----------------------------" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }
    system("pause>0");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
