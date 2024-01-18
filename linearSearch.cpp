#include <iostream>
#include <math.h>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
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

    bool found = search(num, size, key);

    if (found)
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << " Key is not present" << endl;
    }
}