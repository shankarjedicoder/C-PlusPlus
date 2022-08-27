#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    std::cout << "For each with pointer\n";
    int a[5],num;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the " << i + 1 << " value :: ";
        cin >> num;
        a[i] = num;
    }
    system("cls");

    cout << "The Incrementing the value without reference\n---------------------------------------"<<endl;
    for (auto x : a)
    {
        cout <<setw(4)<< ++x;
    }

    cout << endl << endl;
    cout << "The current value in the memory\n---------------------------------------"<<endl;
    for (auto x : a)
    {
        cout << setw(4) << x;
    }

    cout << endl << endl;
    cout << "Incrementing the value with reference\n-------------------------------------"<<endl;
    for (auto &x : a)
    {
        cout <<setw(4)<< ++x;
    }

    cout << endl << endl;
    cout << "The updated value in the memory\n---------------------------------------"<<endl;
    for (auto x : a)
    {
        cout << setw(4) << x;
    }
    system("pause>0");
}
