#include <iostream>

using namespace std;

class stack
{
    int array[5];
    int index = -1;

public:
    void get_details()
    {
        index++;
        cout << "Enter the element : ";
        cin >> array[index];
    }
    int overflow()
    {
        if (index <= 5)
        {
            get_details();
        }
        else
        {
            cout << "The stack is over flow.";
            return 1;
        }
        return 0;
    }
    int underflow()
    {
        if (index <= 0)
        {
            cout << "The stack is under flow.";
            return 1;
        }
        return 0;
    }
    void pop()
    {
        if (0 == underflow())
        {
            cout << "Element " << array[index] << "Poped.";
            array[index] = 0;
            index--;
        };
    }
    void push()
    {
        if (0 == overflow())
        {
            cout << "Element " << array[index] << " Pushed.";
        }
    }
    void peek()
    {
        cout << "Peek " << array[index] << ".";
    }
};

int main()
{
    stack operation;
    int value = 0;
top:
    cout << "\nPop : 1 \tPush : 2 \tPeek : 3\n";
    cin >> value;

    if (value == 1)
    {
        operation.pop();
    }
    else if (value == 2)
    {
        operation.push();
    }
    else if (value == 3)
    {
        operation.peek();
    }
    else
    {
        cout << "Invalid input.";
    }
    goto top;

    return 0;
}