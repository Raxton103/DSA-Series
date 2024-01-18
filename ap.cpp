#include <iostream>
#include <math.h>
using namespace std;

int ap(int a)
{
    int ans = (3 * a) + 7;
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << "Ap is: " << ap(n) << endl;
}