#include <iostream>

using namespace std;

void array_sum(int x[], int y)
{
    int value = 0;
    for (int i = 0; i < y; i++)
    {
        value = value + x[i];
    }

    cout << value;
}

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the element : ";
        cin >> arr[i];
    }

    cout << array_sum(arr, 5);
    return 0;
}