#include <iostream>
using namespace std;

template<typename T> //T -> Generic datatype
void Swapper(T& a, T& b)
{
    T temp = b;
    b = a;
    a = temp;
}

int main()
{
    int num1, num2;
    cout << "Swap values using generics\n----------------------------"<<endl;
    cout << "Enter number 1 :: ";
    cin >> num1;
    cout << "Enter number 2 :: ";
    cin >> num2;
    cout << "Your Inputs :: Num 1 - " << num1 << " :: Num 2 - " << num2 << endl;
    Swapper<int>(num1, num2);   //While using a generic function :: Function name <type>(parameters)
    cout << "Swapped Outputs :: Num 1 - " << num1 << " :: Num 2 - " << num2 << endl<<"---------------------------------------"<<endl;

    char char1, char2;
    cout << "Swap values using generics\n----------------------------" << endl;
    cout << "Enter character 1 :: ";
    cin >> char1;
    cout << "Enter character 2 :: ";
    cin >> char2;
    cout << "Your Inputs :: Character 1 - " << char1 << " :: Character 2 - " << char2 << endl;
    Swapper<char>(char1, char2);   //While using a generic function :: Function name <type>(parameters)
    cout << "Swapped Outputs :: Character 1 - " << char1 << " :: Character 2 - " << char2 << endl << "---------------------------------------" << endl;

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
