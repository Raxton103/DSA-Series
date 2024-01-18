#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin >> n;

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = i;

    //     while (j < 2 * i)
    //     {
    //         cout << j;
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

    //     while (j <= n)
    //     {
    //         char ch = 'A' + i + j - 2;
    //         cout << ch;
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
    //         char ch = 'A' + i + j - 2;
    //         cout << ch;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + n - i;

        while (j <= i)
        {

            cout << ch;
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}