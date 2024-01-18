#include <iostream>
#include <math.h>
using namespace std;

int getMin(int arr[], int size)
{
    int mini = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        mini = min(mini, arr[i]);
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
    return mini;
}
int getMax(int arr[], int size)
{
    int maxi = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
    }
    return maxi;
}

int main()
{

    int size;
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum is:  " << getMax(num, size) << endl;
    cout << "Minimum is:  " << getMin(num, size) << endl;
}