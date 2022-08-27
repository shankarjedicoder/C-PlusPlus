#include <iostream>
using namespace std;

int main()
{
    std::cout << "Pointer Arithmetic\n---------------------------"<<endl;
    int a[5] = { 1,2,3,4,5 };
    int* p;
    p = a;
    for (int i=0;i<5;i++)
    {
        cout << p[i]<<endl;
        cout << &a[i]<<endl;
        cout << *p<<endl;


    }
    system("pause>0");
}