// ATMOperation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int MenuSelector() {
    int option;
    cout << "Please select any one from the option :: " << endl
        << "1. Balance Enquiry" << endl
        << "2. Deposit" << endl
        << "3. Withdrawl" << endl
        << "4. Pin Change" << endl
        << "5. Exit"<<endl;
    cin >> option;
    return option;
}

int BalanceEnquiry(int number)
{   
    return number;
}

int WithDrawl(int balance,int cashOut)
{
    balance -= cashOut;
    return balance;
}

int Deposit(int balance, int cashIn)
{
    balance+= cashIn;
    return balance;
}

int PasswordChange(int number)
{
    int balance = 0;
    return balance;
}

bool PasswordCheck(int number,int oldPassword)
{
    int counter = 0;
    do {
        if (number != oldPassword)
        {
            counter++;
            if (counter == 3)
            {
                return false;
            }
            cout << "INCORRECT! Enter your Password :: ";
            cin >> number;
            system("cls");

           
        }
        else if(number == oldPassword)
        {
            return true;
        }      
    } while (counter != 3);

}

bool ContinueTask()
{
    char cont;
    cout << "--------------------------" << endl
        << "Do you want to exit ? :: " << endl
        <<"y : Yes"<<endl
        <<"n : No"<<endl;
    cin >> cont;
    if (cont == 'y')
    {
        return true;    //continue task
    }
    else if (cont == 'n')
    {
        return false;   //exit task
    }
    else
    {
        cout << "Invalid Selected ::" << endl;
        ContinueTask();
    }


}

void Operation()
{

}

void main()
{
    int input, oldPin = 3121, pin, counter = 0, balance = 1000,cashIn;
    bool isSessionActive = false;
    cout << "Enter your Password :: ";
    cin >> pin;
    system("cls");
    bool isValid  = PasswordCheck(pin, oldPin);
    if (!isValid) {
        cout << "***Card Blocked! Contact your branch for further assistance!***" << endl;
    }
    else {
        do {
            cout << "**************WELCOME TO ATM SERVICE***************\n";
            cout << "-------------------------------------------------------" << endl;       
            input = MenuSelector();
            system("cls");
            switch (input)
            {
            case 1: //Balance Enquiry
                cout<<"Current Balance :: " << BalanceEnquiry(balance) << "$" << endl << endl;
                isSessionActive = ContinueTask();
                system("cls");
                break;

            case 2: //case: Cash Deposit
                cout << "Enter the cash to deposit :: ";
                cin >> cashIn;
                balance = Deposit(balance, cashIn);
                char cont;
                cout << "--------------------------" << endl
                    << "Do you want to check the balance ? :: " << endl
                    << "y : Yes" << endl
                    << "n : No" << endl;
                cin >> cont;
                if (cont == 'y')
                {
                    cout << "Your current balance :: " << balance << "$"<<endl;
                    isSessionActive = ContinueTask();
                    system("cls");
                }
                else if(cont == 'n')
                {
                    isSessionActive = ContinueTask();
                    system("cls");
                }
                else
                {
                    cout << "Invalid Selection";
                    isSessionActive = ContinueTask();
                    system("cls");
                }
                break;

            case 3:
                cout << "Enter the cash to withdraw :: ";
                cin >> cashIn;
                balance = WithDrawl(balance, cashIn);
                char co;
                cout << "--------------------------" << endl
                    << "Do you want to check the balance ? :: " << endl
                    << "y : Yes" << endl
                    << "n : No" << endl;
                cin >> co;
                if (co == 'y')
                {
                    cout << "Your current balance :: " << balance << "$" << endl;
                    isSessionActive = ContinueTask();
                    system("cls");
                }
                else if (co == 'n')
                {
                    isSessionActive = ContinueTask();
                    system("cls");
                }
                else
                {
                    cout << "Invalid Selection";
                    isSessionActive = ContinueTask();
                    system("cls");
                }
                break;

            case 4:
                cout << "Enter the current pin :: "<<endl;
                int currPin;
                cin >> currPin;
                if (currPin == oldPin)
                {
                    cout << "Enter your new pin :: ";
                    int newPin;
                    cin >> newPin;
                    if (newPin == oldPin)
                    {
                        system("cls");
                        cout << "Your new pin cannot be the same as your old pin!" << endl;
                        isSessionActive = ContinueTask();
                        system("cls");
                        break;

                    }
                    oldPin = newPin;
                    system("cls");
                    cout << "Your new pin :: " << oldPin << endl;
                    isSessionActive = ContinueTask();
                    system("cls");
                }
                else
                {
                    cout << "Invalid Old Password!";

                }
                break;
            }

        } while (isSessionActive != true);
        cout << "Thanks for using the ATM";
        system("pause>0");
    }
}
