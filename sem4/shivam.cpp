#include <iostream>
#include <fstream>
using namespace std;

struct check
{
    int *age = NULL;
    check()
    {
        cout << "hiii";
    }
};

struct getin : public check
{
    int value = 1;
};

int main()
{
    getin hii;

    return 0;
}
