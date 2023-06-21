#include <iostream>

using namespace std;

class result
{
private:
    string examType;
    string examStatus;
    string result;

public:
    void getResult(int mark)
    {
        if (mark > 40)
        {
            examStatus = "Pass";
            cout << "The Exam Status is : " << examStatus;
        }
        else
        {
            examStatus = "Fail";
            cout << "The exam status is : " << examStatus;
        }
    }
};

class student : public result
{
    int Regno;
    int Name;
    int Mark;

public:
    void getStudentDetails()
    {
        cout << "Enter the Reg : ";
        cin >> Regno;
        cout << "Enter the name : ";
        cin >> Name;
        cout << "Enter the Mark : ";
        cin >> Mark;
        getResult(Mark);
    };
} std;

main()
{
    std.getStudentDetails();
    return 0;
}