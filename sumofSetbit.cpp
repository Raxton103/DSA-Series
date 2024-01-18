#include <iostream>
#include <math.h>
using namespace std;

int setBit(int n)
{
    int i = 0;
    int ans = 0;
    while (n != 0)
    {
        int bit = n & 1;

        ans = (bit * pow(10, i) + ans);

        n = n >> 1;
        i++;
    }
    return ans;
}
int bitCount(int n)
{
    int a = setBit(n);
    int ans = 0;
    while (a != 0)
    {
        int digit = a % 10;
        if (digit == 1)
        {
            ans = ans + digit;
        }
        a = a / 10;
    }
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Number of 1 bit is:" << bitCount(a) + bitCount(b) << endl;
}