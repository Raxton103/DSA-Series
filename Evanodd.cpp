#include <iostream>
#include <math.h>
using namespace std;

bool isEvan(int a)
{

    if (a & 1)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int num;
    cin >> num;

    if (isEvan(num))
    {
        cout << "Number is Even" << endl;
    }
    else
    {
        cout << "Number is Odd" << endl;
    }
}