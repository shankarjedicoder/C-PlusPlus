#include <iostream>
using namespace std;

int main()
{
    std::cout << "ONE DIMENSIONAL ARRAY!\n----------------------------------"<<endl;
    int a[5], count = 0,num;

    for (int i = 0; i <= sizeof(a); i++)
    {
        cout << "Enter value " << i + 1 << " :: ";
        cin >> num;
        count += num;
    }
    cout << count;
    system("pause>0");

}