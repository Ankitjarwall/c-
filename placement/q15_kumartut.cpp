#include <iostream>
#include<iomanip>
using namespace std;


int main()
{
    float current_money = 0.0;
    int withdraw_amount = 0;

    cout << "Initial Amount :";
    cin >> current_money;
    cout << "Enter the withdraw amount : ";
    cin >> withdraw_amount;

    if (withdraw_amount+0.50 <= current_money)
    {
        if (withdraw_amount % 5 == 0)
        {
            current_money = current_money - withdraw_amount;
            current_money = current_money - 0.50;
        }
        else
        {
            cout << "Buks are not available.";
        }
        cout << "\nWithdraw Amount : " << withdraw_amount;
    }
    else
    {
        cout << "Insufficent amount.";
    }
        cout<< "\nCurrent Balance : "<<fixed<<setprecision(2)<<current_money;

    return 0;
}