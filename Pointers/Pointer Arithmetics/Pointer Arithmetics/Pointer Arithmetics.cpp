#include <iostream>
using namespace std;


int main()
{
    int a[5], * p,inp,search;
    bool isPresent = false;
    std::cout << "Pointer Arithmetic\n----------------------------"<<endl;
    cout << "Enter the array of elements :: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Value " << i + 1 << " :: ";
        cin >> inp;
        a[i] = inp;
    }
    system("cls");
    for (auto x : a)
    {
        cout << x << endl;
    }
    p = &a[0];
    cout << p<<endl<<endl;
    cout << "enter the value to search :: ";
    cin >> search;
    do {
        if (search == *p)
        {
            isPresent = true;
            cout << search << "is present in address :: " << p<<endl;
        }
        else
        {
            p++;
        }

    } while (isPresent == false);
    system("pause");


}
