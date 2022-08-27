// FunctionOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sum(int num1, int num2)
{
    cout << "Two Input" << endl;
    int num3 = num1 + num2;
    return num3;
}

int sum(int num1)
{
    cout << "One Input" << endl;
    int num3 = num1;
    return num3;
}

int sum(int num1, int num2, int num3)
{
    cout << "Three Input" << endl;
    int num4 = num1 + num2 + num3;
    return num4;
}
int main()
{
    int c;
    do {
        int a, b, answer;
        system("cls");
        std::cout << "Addition using Function Overloading\n------------------" << endl;
        cout << "Enter number 1 :: ";
        cin >> a;
        cout << "Enter number 2 :: ";
        cin >> b;
        cout << "Enter number 3 :: ";
        cin >> c;
        if (b == 0 && c == 0)
        {
            answer = sum(a);
        }
        else if (b == 0 && c != 0)
        {
            answer = sum(a, c);
        }
        else if (b != 0 && c == 0)
        {
            answer = sum(a, b);
        }
        else
        {
            answer = sum(a, b, c);
        }
        cout << "The answer :: " << answer;
        system("pause>0");
    } while (c != 9);

}
