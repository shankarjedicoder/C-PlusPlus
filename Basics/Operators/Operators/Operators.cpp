// Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Operators in C++\n#############################"<<endl;
    cout << "Enter two numbers :: " << endl;
    cin >> num1 >> num2;

    //ARITHMETIC OPERATORS - Priority 1 in execution
    cout << "Arithmetic Operator ( + , - , * , / , % )" << endl << "------------------------------" << endl;
    cout << "Addition :: " << num1 << " + "<<num2<<" = "<<num1 + num2 << endl;
    cout << "Subtraction :: " << num1 << " - " << num2 << " = "<< num1 - num2<<endl;
    cout << "Multiplication ::  " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << "Division :: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << "Modulo Division :: " << num1 << " % " << num2 << " = " << num1 % num2 << endl;
    cout << endl << endl;


    //UNARY OPERATORS
    cout << "Unary Operator ( ++ and -- )" << endl << "------------------------------" << endl;
    cout << "Initial Values of num1 = " << num1 << " num2 = " << num2 << endl;
    cout << "Pre-Increment of num1  :: " << "++"<< num1 <<" = " <<++num1<< endl;  
    cout << "Pre-Decrement of num2 :: " << "--" << num2 << " = " << --num2 <<endl;
    cout << "Post-Increment of num1 (iteration1) ::" << num1 << " ++ = " << num1++ << endl;
    cout << "Post-Increment of num1  (iteration2) ::" << num1 << " ++ = " << num1++ << endl;
    cout << "Post-Decrement of num2 (iteration1) ::" << num2 << " -- = " << num2-- << endl;
    cout << "Post-Decrement of num2 (iteration2) ::" << num2 << " -- = " << num2-- << endl;
    cout << endl << endl;


    //To clear a console screen
    //system("cls");

    //RELATIONAL OPERATORS - Priority 2 in execution
    cout << "Relational Opreator ( < , > , <=, >= , == , != )" << endl << "------------------------------" << endl;
    cout << "If ans = 0 -> False , and = 1 -> True" << endl;
    cout << num1 << " < " << num2 << " = " << (num1 < num2) << endl;
    cout << num1 << " > " << num2 << " = " << (num1 > num2) << endl;
    cout << num1 << " <= " << num2 << " = " << (num1 <= num2) << endl;
    cout << num1 << " >= " << num2 << " = " << (num1 >= num2) << endl;
    cout << num1 << " == " << num2 << " = " << (num1 == num2) << endl;
    cout << num1 << " != " << num2 << " = " << (num1 != num2) << endl<<endl;
    if (num1 < num2) { cout << num1 << " < " << num2 << endl; }
    if (num1 > num2) { cout << num1 << " > " << num2 << endl; }
    if (num1 <= num2) { cout << num1 << " <= " << num2 << endl; }
    if (num1 >= num2) { cout << num1 << " >= " << num2 << endl; }
    if (num1 == num2) { cout << num1 << " == " << num2 << endl; }
    if (num1 != num2) { cout << num1 << " != " << num2 << endl; }
    cout << endl << endl;


    //LOGICAL OPERATORS - Priority 3 in execution
    cout << "Logical Opreator ( && , || , ! )" << endl << "------------------------------" << endl;
    cout << "Combines two or more conditions to one" << endl;
    if (num1 == 5 && num2 == 6) { cout << num1 <<" && " << num2 <<" AND Operator :: Both the inputs are valid " <<endl; }
    if (num1 == 5 || num2 == 6) { cout << num1 << " || " << num2 << "OR Operator :: Any one of the input is valid" << endl; }
    if (num1 == 5) { cout << num1 <<" == 5 = " << (num1 == 5) << " But, negated value :: " << !(num1 == 5) << endl; }


    //ASSIGNMENT OPERATORS - Priority 3 in execution
    cout << "Assignment Opreator ( = , += , -= , *= , /= , %= )" << endl << "------------------------------" << endl;
    num2 = num1;
    cout << "num1 is assigned to num2" << num2 <<endl;

    num2 += 10;
    cout << num1 << " += 10 = " << num2 <<endl;
    num2 = num1;

    num2 -= 10;
    cout << num1 << " -= 10 = " << num2 <<endl;
    num2 = num1;

    num2 *= 10;
    cout << num1 << " *= 10 = " << num2 <<endl;
    num2 = num1;

    num2 /= 10;
    cout << num1 << " /= 10 = " << num2 << endl;
    num2 = num1;

    num2 %= 10;
    cout << num1 << " %= 10 = " << num2 <<endl;
    num2 = num1;

    system("pause>0");

}
