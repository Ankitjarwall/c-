#include <iostream>

using namespace std;

template <class T>

T array_sum(T x[5], int y)
{
    int value = 0;
    for (int i = 0; i < y; i++)
    {
        value = value + x[i];
    }

    return value;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << array_sum(arr, 5);
    return 0;
}