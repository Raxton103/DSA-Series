#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // int a, b;

    // cout << "Enter the value of a: " << endl;
    // cin >> a;

    // cout << "Enter the value of b: " << endl;
    // cin >> b;

    // char op;
    // cout << "Enter the operation that you want to perform: " << endl;
    // cin >> op;

    // switch (op)
    // {
    // case '+':
    //     cout << "Sum of a and b is: " << a + b << endl;
    //     break;
    // case '-':
    //     cout << "Sub of a and b is: " << a - b << endl;
    //     break;
    // case '*':
    //     cout << "Mult of a and b is: " << a * b << endl;
    //     break;
    // case '/':
    //     cout << "div of a and b is: " << a / b << endl;
    //     break;

    // default:
    //     break;
    // }

    int amount;
    cout << "Enter the amount:" << endl;
    cin >> amount;

    int note = 0;
    int num = 1;

    switch (num)
    {
    case 1:
    {
        note = amount / 100;
        amount = amount - (note * 100);
        cout << note << " RS.100 note requried" << endl;
    }
    case 2:
    {
        note = amount / 50;
        amount = amount - (note * 50);
        cout << note << " RS.50 note requried" << endl;
    }
    case 3:
    {
        note = amount / 20;
        amount = amount - (note * 20);
        cout << note << " RS.20 note requried" << endl;
    }
    case 4:
    {
        note = amount / 1;
        amount = amount - (note * 1);
        cout << note << " RS.1 note requried" << endl;
    }
    }
}