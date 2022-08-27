// FunctionsIntroduction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void Addition()
{
    int num1, num2;
    cout << "Addition block from new function"<<endl;
    cout << "Enter number 1 :: ";
    cin >> num1;
    cout << "Enter number 2 :: ";
    cin >> num2;
    cout << endl << num1 << " + " << num2 << " = " << num1 + num2;



}
int main()
{
    std::cout << "Statement from Main Block!\n"<<endl;
    Addition();
    system("pause>0");
}

