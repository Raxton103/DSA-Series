#include <iostream>
#include <math.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num = factorial(n);
    int demon = factorial(r) * factorial(n - r);
    return num / demon;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "NCR is:" << nCr(a, b) << endl;
    return 0;
}