/* Programmer = Sudhanshu Barnwal
Topic =
Purpose = You are given a n*n square matrix, you need to rotate the matrix by 90 degrees in clockwise direction. You need to do it in-place i.e. you are not allowed to make a new matrix and allocate the elements to it. Make the changes in the same matrix and print it.

n=3
arr[] = {{1,2,3},
         {4,5,6},
         {7,8,9}}

Output: {{7,4,1},
         {8,5,2},
         {9,6,3}}

Date = /08/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout << "\nEnter no. of Row and Column : ";
    cin >> size;

    vector<vector<int>> vec(size, vector<int>(size));
    for (int i = 0; i < size; i++)
    {
        cout << "\n -------------- Enter value of " << i + 1 << " Row ------------- " << endl;
        for (int j = 0; j < size; j++)
        {
            cout << "\nEnter the value of " << i << j << " index : ";
            cin >> vec[i][j];
        }
    }

    cout << "\n --------------- The Matrix : " << " ---------------------- " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << vec[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl ;

    // size = 3
    // 00  01  02
    // 10  11  12
    // 20  21  22

    // 20  10  00
    // 21  11  01
    // 22  12  02

    // 1   2   3
    // 4   5   6
    // 7   8   9

    // 7   4   1
    // 8   5   2
    // 9   6   3
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << vec[size-1-j][i] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}
