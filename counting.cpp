#include <iostream>
#include <math.h>
using namespace std;

void printCounting(int n)
{

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int a;
    cin >> a;

    printCounting(a);
    return 0;
}
