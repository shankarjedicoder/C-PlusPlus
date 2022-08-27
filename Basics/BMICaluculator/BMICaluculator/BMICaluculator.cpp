// BMICaluculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float weight, height,bmiIndex;
    
    std::cout << "BMI Calculator\n##############################"<<endl;
    cout << "Enter your height and weight :: " << endl;
    cin >> weight >> height;
    bmiIndex = weight / (height * height);
    cout<<endl<< "Your BMI Score is :: " << bmiIndex << endl;
    if (bmiIndex < 18.5) { cout << "You are Underweight" << endl; }
    else if (bmiIndex > 25) { cout << "You are Overweight" << endl; }
    else{ cout << "You are Ideal" << endl; 
    system("pause>0");

}
