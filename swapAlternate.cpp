#include <iostream>
#include <math.h>
using namespace std;
void printArry(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapArray(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int size;
    cout << "Enter the size: " << endl;
    cin >> size;

    int num[100];
    cout << "Enter the value: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    swapArray(num, size);
    printArry(num, size);
}