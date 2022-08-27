// InputFromUser.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Average of class\n*******************\n";
    float score, total;
    cout << "Enter the score  ::";
    cin >> score;           //Gets the input from the user
    cout << "Enter the total  ::";
    cin >> total;
    float average = score / total;
    cout << "The Average is  ::" << average;
    system("pause>0");
}

