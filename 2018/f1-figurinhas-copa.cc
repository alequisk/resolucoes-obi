#include <iostream>

using namespace std;

int fig[110], car[110], n, c, m, temp, faltando = 0;

int main() {
  cin >> n >> c >> m;
  for (int i = 1; i <= n; i++) {
    fig[i] = car[i] = 0;
  }

  for (int i = 0; i < c; i++) {
    cin >> temp;
    car[temp] = 1;
  }

  for (int i = 0; i < m; i++) {
    cin >> temp;
    fig[temp] = 1;
  }

  for (int i = 1; i <= n; i++) {
    if (fig[i] == 0 and car[i] == 1) faltando++;
  }

  cout << faltando << endl;

  return 0;
}
