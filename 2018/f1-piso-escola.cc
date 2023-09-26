#include <iostream>
using namespace std;

int main() {
  int n, m, l, w;
  cin >> n >> m;
  l = m * n + (m - 1) * (n - 1);
  w = (m - 1) * 2 + (n - 1) * 2;
  cout << l << "\n"
       << w << endl;

  return 0;
}