#include <iostream>

using namespace std;

class employee
{
private:
    string password;
    int salary;

public:
    void input(int fpassword, int fsalary)
    {
        password = fpassword;
        salary = fsalary;
    }

    void display()
    {
        cout << "Password : " << password;
        cout << "Salary : " << salary;
    }
} emp;

int main()
{
    int password;
    int salary;

    cout << "Enter the Password : ";
    cin >> password;
    cout << "Enter the Salary : ";
    cin >> salary;

    emp.input(password, salary);
    emp.display();

    return 0;
}