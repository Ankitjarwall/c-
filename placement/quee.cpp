#include <iostream>

using namespace std;

int size = 10;
int array[10];
int front = 0;
int rare = 0;

void setinput()
{
    if (front < rare)
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Enter the" << i << " input : ";
            cin >> array[i];
            front++;
        }
    }
    else
    {
        cout << "Queue is empty.";
    }
}

void display()
{
    for (int i = 0; i < size; i++)
    {
        cout << i << " : " << array[i];
    }
}

void delete(int rare)
{
    for (int i = 0; i < 10; i++)
    {
    }
}

void check()
{
    if (front == rare)
    {
    }
    else if (front < 10)
    {
        cout << "Element inserted";
    }
}

int main()
{
    setinput();

    return 0;
}