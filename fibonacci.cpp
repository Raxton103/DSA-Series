#include <iostream>
using namespace std;

void fibfunc(int n)
{
    int a = 0;
    int b = 1;

    cout << a << endl;
    cout << b << endl;

    for (int i = 2; i <= 10; i++)
    {
        int sum = a + b;
        cout << sum << endl;

        a = b;
        b = sum;
    }
    return;
}
int main()
{
    int a;
    cin >> a;
    fibfunc(a);
    // int n = 10;

    // int a = 0;
    // int b = 1;

    // for (int i = 2; i <= 10; i++)
    // {

    //     int sum = a + b;
    //     cout << sum << endl;

    //     a = b;
    //     b = sum;
    // }

    // int n;
    // cin >> n;

    // bool isPrime = 1;

    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = 0;
    //         break;
    //     }
    // }
    // if (isPrime == 0)
    // {
    //     cout << "Not Prime" << endl;
    // }
    // else
    // {
    //     cout << "Prime" << endl;
    // }
}