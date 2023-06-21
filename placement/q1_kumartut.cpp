#include <iostream>

using namespace std;

void printCube()
{
    int i = 0, sum = 0, a; // statement 1
    a = (i * i * i);
    while (i < 100) // statement 2
    {
        sum = sum + a; // statement 3
        i = i + 1;
        a = (i * i * i); // statement 4
        cout << a << endl;
    }
}

int main()
{
    printCube();
    return 0;
}