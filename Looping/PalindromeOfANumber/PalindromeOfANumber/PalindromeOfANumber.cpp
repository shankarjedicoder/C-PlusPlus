#include <iostream>
using namespace std;

int main()
{
    
    std::cout << "Palindrome Check!\n-----------------------------"<<endl;
    cout << "Enter a number :: ";
    int num,rev=0,r=0;
    cin >> num;
    while (num != 0)
    {
        r = num % 10;
        num /= 10;
        rev = rev * 10 + r;
    }
    cout << rev;
    (num == rev)? cout<<num << " is palindrome!": cout << num << " is not a palindrome!";
    system("pause>0");
}