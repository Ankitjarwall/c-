#include <iostream>

using namespace std;

int main()
{
    int calories = 0;
    int fat = 0;

    cout << "Enter the number of calories : ";
    cin >> calories;
    cout << "Enter the number of fat : ";
    cin >> fat;

    cout << "Fat % in calories : " << (fat / calories) * 100;

    return 0;
}