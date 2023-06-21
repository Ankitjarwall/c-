#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int z = i; z <5; z++)
        {
            cout << " ";
        }
        for (int z = i; z <5; z++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
