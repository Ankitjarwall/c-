#include <iostream>

using namespace std;

class cons
{

public:
    cons(int value1, int value2 = 100, int value3 = 10)
    {
        cout << "Value 1 : " << value1 << endl;
        cout << "Value 2 : " << value2 << endl;
        cout << "Value 3 : " << value3 << endl;
    }
};

int main()
{
    cons(90);
    cons(90, 60);
    cons(90, 80, 20);

    return 0;
}