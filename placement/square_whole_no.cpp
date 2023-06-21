#include <iostream>
using namespace std;

int main()
{

    int sum = 0, i;
    cout << "enter the the number:";
    cin >> i;

    while (i > 0)
    {
        cout << i * i << "--\t\t\t" << sum + (i * i) << endl;
        sum = sum + (i * i);
        i--;
    }

    cout << "the sum of number is:" << sum;

    return 0;
}