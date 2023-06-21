#include <iostream>

using namespace std;

int main()
{
    const int i = 10;
    int *addr = (int *)(&i);

    cout << addr << endl;
    cout << *addr;

    return 0;
}
