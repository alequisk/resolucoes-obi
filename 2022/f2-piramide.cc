#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<int>> a(n, vector<int>(n));
  int cur = 1;
  for (int i = 0; i < n / 2; i++) {
    int row = i;
    int column = i;
    for (int j = row; j < n - row; j++) a[row][j] = cur;
    for (int j = row; j < n - row; j++) a[n - row - 1][j] = cur;
    for (int j = row; j < n - row; j++) a[j][column] = cur;
    for (int j = row; j < n - row; j++) a[j][n - column - 1] = cur;
    cur++;
  }

  if (n & 1) a[n / 2][n / 2] = cur;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) cout << a[i][j] << " ";
    cout << endl;
  }
  return 0;
}
