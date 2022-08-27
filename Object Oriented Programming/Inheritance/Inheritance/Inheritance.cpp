// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class DeliveryAddress {
private:
    string name;
    string address;
    string city;
    string country;
    string number;

public:
    void LogName(string input) { name = input; }
    void LogAddress(string input) { address = input; }
    void LogCity(string input) { city = input; }
    void LogCountry(string input) { country = input; }
    void LogNumber(string input) { number = input; }

    string GetName() { return name; }
    string GetAddress() { return address; }
    string GetCity() { return city; }
    string GetCountry() { return country; }
    string GetNumber() { return number; }

    void Display()
    {
        system("cls");
        cout << "Your Name :: " << name<<endl;
        cout << "Your Address :: " << address << endl;
        cout << "Your City :: " << city << endl;
        cout << "Your Country :: " << country << endl;
        cout << "Your Number :: " << number << endl;
    }
#pragma region Function Overloading

    DeliveryAddress(string uName, string uAddress, string uCity, string uCountry, string uNumber)
    {
        LogName(uName);
        LogAddress(uAddress);
        LogCity(uCity);
        LogCountry(uCountry);
        LogNumber(uNumber);
    }

    DeliveryAddress(string name)
    {
        LogName(name);
    }

    DeliveryAddress(string uName, string uNumber)
    {
        LogName(uName);
        LogNumber(uNumber);
    }

    DeliveryAddress()
    {
       /* system("cls");
        cout << "Your Name :: " << name << endl;
        cout << "Your Address :: " << address << endl;
        cout << "Your City :: " << city << endl;
        cout << "Your Country :: " << country << endl;
        cout << "Your Number :: " << number << endl;*/
    }
#pragma endregion

};

#pragma region Inheritance

class ResidentialAddress :public DeliveryAddress {
public:

    ResidentialAddress(string rName, string rNumber) :DeliveryAddress(rName, rNumber)
    {

    }

    ResidentialAddress(string inAdd,string inCity,string inCountry)
    {
        LogAddress(inAdd);
        LogCity(inCity);
        LogCountry(inCountry);
    }

    void Display()
    {
        system("cls");
        cout << "Your Name :: " << GetName() << endl;
        cout << "Your Address :: " << GetAddress() << endl;
        cout << "Your City :: " << GetCity() << endl;
        cout << "Your Country :: " << GetCountry() << endl;
        cout << "Your Number :: " << GetNumber() << endl;
    }
};

#pragma endregion

int main()
{
    std::cout << "INHERITANCE\n----------------------------------"<<endl;
    DeliveryAddress DeliverAddress("Shankar", "98765433210");
    ResidentialAddress ResidentialAddress("Mountain View","California","USA");
    ResidentialAddress.Display();
    system("pause>0");

    
}