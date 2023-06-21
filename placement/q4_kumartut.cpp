#include <iostream>

using namespace std;

int main()
{
    int l = 0, r = 0, k = 0, sum = 0;
    cout << "Starting value : ";
    cin >> l;
    cout << "Ending value : ";
    cin >> r;
    cout << "Find Divisible value btwn " << l << "and " << r << " :";
    cin >> k;

    if ((l >= 1) && (l <= 1000) && (r >= 1) && (r <= 1000) && (k >= 1) && (k <= 1000))
    {
        for (int i = l; i <= r; i++)
        {
            if (i % k == 0)
            {
                sum++;
            }
        }
        cout << "Count : " << sum;
        return 0;
    }

    cout << "Value should be from 1 to 1000.";

    return 0;
}