#include<iostream>

int diff(int a, int b, int c, int d) {
  return std::abs((a + b) - (c + d));
}

int main() {
  int a, b, c, d; std::cin >> a >> b >> c >> d;
  int mn = diff(a, b, c, d);
  mn = std::min(mn, diff(a, c, d, b));
  mn = std::min(mn, diff(a, d, c, b));
  std::cout << mn << '\n';
  return 0;
}
