#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int n, m, x, y, p, server, menor = 1001, maior = INT_MIN;
int visitados[1001];
vector<pii> vizinhos[1001];
int distancia[1001];

void solve(int vertex) {
  priority_queue<pii, vector<pii>, greater<pii> > fila;
  fila.push(pii(0, vertex));
  for (int i = 1; i <= n; i++) distancia[i] = INT_MAX;
  distancia[vertex] = 0;
  while (true) {
    int davez = -1;
    while (!fila.empty()) {
      int atual = fila.top().second;
      fila.pop();
      if (!visitados[atual]) {
        davez = atual;
        break;
      }
    }
    if (davez == -1) break;

    visitados[davez] = true;

    for (int i = 0; i < (int)vizinhos[davez].size(); i++) {
      int atual = vizinhos[davez][i].second;
      int dist = vizinhos[davez][i].first;

      if (distancia[atual] > distancia[davez] + dist) {
        distancia[atual] = distancia[davez] + dist;
        fila.push(pii(distancia[atual], atual));
      }
    }
  }
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> x >> y >> p;
    vizinhos[x].push_back(pii(p, y));
    vizinhos[y].push_back(pii(p, x));
  }

  cin >> server;

  solve(server);

  for (int i = 1; i <= n; i++) {
    if (i != server) {
      if (distancia[i] > maior) maior = distancia[i];
      if (distancia[i] < menor) menor = distancia[i];
    }
  }

  cout << maior - menor << "\n";

  return 0;
}
