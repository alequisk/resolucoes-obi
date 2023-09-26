#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int mx = 1;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      int l = i, r = j, ok = 1;
      while (l < r) {
        if (s[l] != s[r]) ok = 0;
        l++, r--;
      }
      if (ok) mx = max(mx, j - i + 1);
    }
  }

  cout << mx << endl;

  return 0;
}
