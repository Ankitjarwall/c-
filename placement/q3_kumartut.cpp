#include <iostream>

using namespace std;

void check()
{
    int numberProducts, commission = 0;
    numberProducts = 218;
    if (numberProducts > 200)
        commission = 200 * 5 + (numberProducts - 200) * 10;
    else
        commission = numberProducts * 5;
    cout << commission << endl;
}

int main()
{
    check();
    return 0;
}