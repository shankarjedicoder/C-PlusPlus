#include <iostream>
using namespace std;



int main()
{
    int num, *p;
    std::cout << "Pointers\n-----------------------------------------"<<endl;
    cout << "Enter a number :: ";
    cin >> num;
    p = &num;
    cout << "x = " << num<<endl;
    cout << "&X = " << &num<<endl;
    cout << "Pointer P = " << p<<endl;
    cout << "Address of pointer = " << &p<<endl;
    cout << "Value = " << *p<<endl;
    system("pause>0");

}
