#include <iostream>

using namespace std;
class PMFund
{
protected:  
    int amt = 1000;
};
class BankAcc : public PMFund
{
protected:
    int accno = 12101718, BankBalance = 234500;
    int CurrBalance;
    void getBalance()
    {
        CurrBalance = BankBalance + amt;
    }
};
class Customer : public BankAcc
{
public:
    int CustAccNo;
    string CustName;
    void SetCustAccNo()
    {
        cout << "Enter Customer Acc No.:" << endl;
        cin >> CustAccNo;
    }
    void SetCustName()
    {
        cout << "Enter Customer Name:" << endl;
        cin >> CustName;
    }
    void display()
    {
        if (accno == CustAccNo)
        {
            cout << "Current Balance :" << endl;
            cout << CurrBalance << endl;
        }
    }
};
int main()
{
    Customer cu1;
    return 0;
}