#include <iostream>
#include <math.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
void printArray(int num[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
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

    int key;
    cout << "Enter the key: " << endl;
    cin >> key;

    int index = binarySearch(num, size, key);
    cout << "index of key is: " << index << endl;
}