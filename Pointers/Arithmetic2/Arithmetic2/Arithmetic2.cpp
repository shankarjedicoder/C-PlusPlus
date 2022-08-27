#include<iostream>
using namespace std;

void PointerArith()
{
    int A[] = { 2,4,6,8,10,12 };
    int* p = A, *q;

    cout <<"Intital Position :: "<< p << endl;
    cout << "Intital Value :: " << *p << endl;

    // move pointer to next location to print 4
    p = p + 3; // pointer will be pointing on 10

    cout << "Current Position :: " << p << endl;
    cout << "Current Value :: " << *p << endl;


    cout <<"Checking previosuly value without altering pointer position :: "<< p[-3]<<endl;   // complete this statement to print 2 without moving pointer
    cout << "Current Position :: " << p << endl;




    int num;
    cout << "Enter a number :: ";
    cin >> num;
    q = &num;
    cout << "Current Position :: " << q << endl;
    cout << "Current Value :: " << *q << endl;
}

int main()
{
    PointerArith();
    system("pause>0");
}