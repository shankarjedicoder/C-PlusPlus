// TransposeOfAMatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    std::cout << "TRANSPOSE OF A MATRIX\n--------------------------------------"<<endl;
    cout << "Enter your matrix :: " << endl;
    int mat[3][3],num;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> num;
            mat[i][j] = num;
        }
    }
    system("cls");
    cout << "Your Matrix \n ------------------------------- " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << endl;

    }
    cout << endl<<endl;

    cout << "Your Transposed Matrix \n ------------------------------- " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[j][i] << "\t";
        }
        cout << endl;
    }
    system("print>0");
}

