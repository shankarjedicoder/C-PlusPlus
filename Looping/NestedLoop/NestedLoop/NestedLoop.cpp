// NestedLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int totalStudents,total = 0,mark,counter=0;
    std::cout << "Nested Loops\n-----------------------"<<endl;
    cout << "Enter the total students :: ";
    cin >> totalStudents;
    for (int i = 0; i < totalStudents; i++)
    {
        system("cls");
        cout << "Student No :: " << i+1 << endl;
        counter = 0;
        do {
            for (int j = 0; j <= 3; j++)
            {
                cout << "Enter Mark "<<j+1<<" :: ";
                cin >> mark;
                total += mark;
                counter++;
            }
        } while (counter == 3);
    }   
    system("cls");
    cout <<"Class total :: " << total<<endl;
    cout << "Class Average :: " <<(float)(total / totalStudents);
    system("pause>0");
}
