#include <iostream>
using namespace std;

int main()
{
    int a;
    a = 10;
    int b = 1;
    if (++a)
        cout << b;
    else
        cout << ++b;

    // XOR
    cout << (a ^ b) << endl;
    // OR
    cout << (a | b) << endl;
    // AND
    cout << (a & b) << endl;
    // NOT
    cout << ~a << endl;

    cout << (18 << 1) << endl;
    cout << (18 << 2) << endl;
    cout << (21 >> 1) << endl;
    cout << (19 >> 2) << endl;

    cout << (a++) << endl;
    cout << (++a) << endl;
    cout << (a--) << endl;
    cout << (--a) << endl;
}
