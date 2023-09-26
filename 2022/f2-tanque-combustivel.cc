#include <bits/stdc++.h>

using namespace std;

int main() {
  int c, d, t;
  cin >> c >> d >> t;

  int cost = c * t;

  cout << fixed << setprecision(1);
  if (d <= cost) {
    cout << 0.0 << endl;
    exit(0);
  }

  double ans = 0.0;
  ans = (double)(d - cost) / c;

  cout << ans << endl;

  return 0;
}
