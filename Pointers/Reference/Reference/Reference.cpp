#include <iostream>
using namespace std;

int main()
{
    int x, &y=x;
    std::cout << "Reference Variable\n---------------------------------------------"<<endl;
    cout << "Enter a value :: ";
    cin >> x;
    cout <<"The value of X :: "<< x << " The alisa/reference  ::  " << y << endl;
    cout <<"The Address of X :: "<< &x << " The alisa/reference Address  ::  " << &y << endl;
    x += y;
    cout << "Operation performed :: X+=Y" << endl;
    cout << "The value of X :: " << x << " The alisa/reference  ::  " << y << endl;
    system("pause>0");

}