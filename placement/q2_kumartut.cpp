#include <iostream>

using namespace std;

void checkNum(int number)
{
    if (number > 10 && number < 100)
        cout << "Double digit" << endl;
    else
        cout << "Not a double digit" << endl;
}

int main()
{
    checkNum(10);
    return 0;
}