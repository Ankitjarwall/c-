// #include <iostream>

// using namespace std;

// int main()
// {
//     int value = 0;
//     cout << "Enter the number : ";
//     cin >> value;

//     for (int j = 0; 0 > j; j++)
//     {
//         cout << "*" << j;
//     }

//     for (int i = 0; i < value; i++)
//     {
//         for (int z = 5; 0 < z; z--)
//         {
//             cout << " ";
//         }
//         cout << "\n";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];
    cout << "\nInput the array elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << "\nThe smallest element is " << arr[0];
    cout << endl;
    return 0;
}

