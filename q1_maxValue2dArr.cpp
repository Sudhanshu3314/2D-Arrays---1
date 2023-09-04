/* Programmer = Sudhanshu Barnwal
Topic =
Purpose = Given a 2D matrix with m rows and n columns containing integers, find and print the
maximum value present in the array.

m=3
n=3
arr[][] = {{1,2,3}, {4,5,6}, {7,8,9}}

maximumValue = 9

Date = /08/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int row, col;
    cout << "\nEnter no. of row : ";
    cin >> row;
    cout << "\nEnter no. of Column : ";
    cin >> col;

    vector<vector<int>> vec(row, vector<int>(col));

    for (int i = 0; i < row; i++)
    {
        cout << "\n ------------ Enter the value of " << i + 1 << " row : ---------------- " << endl;
        for (int j = 0; j < col; j++)
        {
            cout << "\nEnter the value of " << i << j << " indexes : ";
            cin >> vec[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << vec[i][j] << "\t";
        }
        cout << endl;
    }

    int max = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (vec[i][j] > max)
            {
                max = vec[i][j];
            }
        }
    }

    cout << "\n ------------------> Maximum Value from this 2d array : " << max << endl;

    cout << endl;
    return 0;
}
