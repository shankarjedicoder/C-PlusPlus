#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int currentMax = 0, a[5],num;
    std::cout << "Hello World!\n----------------------------------------"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << i + 1 << " value :: ";
        cin >> num;
        a[i] = num;
    }
    system("cls");
    for (auto x : a)
    {
        if (x >= currentMax)
        {
            currentMax = x;
        }
    }
    system("cls");
    cout << "Your entered series of values :: " << endl;
    for (auto x : a)
    {
        cout << setw(4) << x;
    }
    cout << endl;
    cout << "The highest value :: " << currentMax<<endl;
    system("pause>0");
}
