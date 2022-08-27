#include <iostream>
#include<iomanip>
using namespace std;

bool Checker(int number)
{
    if (number >= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int inpNumber,positive[10],negative[10],posCounter = 0,negCounter = 0;
    std::cout << "Count of positive and negative numbers\n----------------------------------------"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the number " << i+1 << " :: ";
        cin >> inpNumber;
        bool isPositive = Checker(inpNumber);
        if (isPositive)
        {         
            positive[posCounter] = inpNumber;
            posCounter++;
        }
        else
        {
            negative[negCounter] = inpNumber;
            negCounter++;
        }          
    }
    posCounter = 0;
    negCounter = 0;
    cout << "List of Positive Numbers\n---------------------------------------" << endl;

    for (auto x : positive)
    {
        cout << setw(4) << x;
        posCounter += x;

    }
    for (auto x : negative)
    {
        negCounter += x;
    }
    system("pause>0");



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
