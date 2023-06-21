#include <iostream>
using namespace std;
class X
{
public:
    static int i;
    X()
    {
        i = 80;
    }
};

int X::i = 90; // Definition of the static member variable i

int main()
{
    // X obj;
    cout << X::i; // Accessing the static member variable i
    return 0;
}
