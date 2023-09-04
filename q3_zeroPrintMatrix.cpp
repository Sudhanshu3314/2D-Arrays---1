/* Programmer = Sudhanshu Barnwal
Topic =
Purpose =
Date = /01/2023   */

#include <bits/stdc++.h>
#include <vector>
using namespace std;

void insertZeroValueMatrix(vector<vector<int>> &v) {

  vector<int> rowIdx;
  vector<int> colIdx;
  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v[i].size(); j++) {
      if (v[i][j] == 0) {
        rowIdx.push_back(i);
        colIdx.push_back(j);
      }
    }
  }

  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v[i].size(); j++) {
      for (int k = 0; k < rowIdx.size(); k++) {
        if (i == rowIdx[k]) {
          v[i][j] = 0;
        }
        if (j == colIdx[k]) {
          v[i][j] = 0;
        }
      }
    }
  }

  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v[i].size(); j++) {
      cout << v[i][j] << "\t";
    }
    cout << endl;
  }
}

int main() {

  int row, col;
  cout << "\nEnter the number of row : ";
  cin >> row;

  cout << "\nEnter the number of col : ";
  cin >> col;

  vector<vector<int>> vec(row, vector<int>(col));
  for (int i = 0; i < vec.size(); i++) {
    cout << "\n ---------- Enter the value of " << i + 1
         << " row --------------- " << endl;
    for (int j = 0; j < vec[i].size(); j++) {
      cout << "\nEnter the value of " << i << j << " index : ";
      cin >> vec[i][j];
    }
  }

  insertZeroValueMatrix(vec);

  cout << endl;
  return 0;
}
