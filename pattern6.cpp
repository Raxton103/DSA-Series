#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin >> n;

    // int i = 1;
    // int count = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << count;
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int n;
    // cin >> n;

    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         char ch = 'A' + i - 1;
    //         cout << ch;

    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    int n;
    cin >> n;

    int i = 1;
    char count = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}