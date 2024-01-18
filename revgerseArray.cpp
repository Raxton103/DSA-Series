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

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
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

    reverse(num, size);
    printArry(num, size);
}