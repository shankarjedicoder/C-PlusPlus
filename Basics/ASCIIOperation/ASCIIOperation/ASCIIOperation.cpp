// ASCIIOperation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char a1,b1,c1,d1,e1;
	cout << "ASCII Operation\n###########################3" << endl;
	cout << "Enter 5 letters";
	cin >> a1 >> b1 >> c1 >> d1 >> e1;
	cout << "#######################"<<endl;
	cout << (int)a1<<" "<< (int)b1<<" " << (int)c1<<" " << (int)d1<<" " << (int)e1 << endl;
	cout << "Enter 5 number";
	int n1, n2, n3, n4, n5;
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	cout << (char)n1 << " " << (char)n2 << " " << (char)n3 << " " << (char)n4 << " " << (char)n5 << endl;
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
