#include <iostream>
using namespace std;

bool isPossible(int arr[][3], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (arr[row][col] == target)
            {
                return true;
            }
        }
    }
    return false;
}

// row wise sum print
void printRowSum(int arr[][3], int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}
// col wise sum print
void printColSum(int arr[][3], int row, int col)
{
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "the maximum sum is " << maxi << endl;
    return rowIndex;
}

int main()
{

    // create 2 d array
    int arr[3][3];
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,14,16};
    // int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

    cout << "Enter the elements " << endl;
    // taking input -> row wise input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    /*
    //taking input -> col wise input
        for(int col=0; col<4; col++) {
            for(int row=0; row<3; row++) {
                cin >> arr[row][col];
            }
        }

    */

    cout << "Printing the array " << endl;
    // print
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << "Enter the target" << endl;
    int target;
    cin >> target;

    if (isPossible(arr, target, 3, 3))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    printRowSum(arr, 3, 3);
    printColSum(arr, 3, 3);
    int ansIndex = largestRowSum(arr, 3, 3);
    cout << " Max row is at index " << ansIndex << endl;

    return 0;
}