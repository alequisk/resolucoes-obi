#include "bits/stdc++.h"

typedef std::pair<int, std::pair<int, int>> edge;
typedef std::pair<std::pair<int, int>, int> dijkstra;
const int inf = 0x3f3f3f3f;

std::array<std::vector<edge>, 10001> graph;
int V, N, M;

int solve(int source, int destination) {
  std::vector<std::vector<int>> cost(201, std::vector<int>(N + 1, inf));
  std::vector<std::vector<bool>> used(201, std::vector<bool>(N + 1, false));
  std::priority_queue<dijkstra, std::vector<dijkstra>, std::greater<dijkstra>> pq;
  pq.push(std::pair{std::pair{0, 0}, source});
  cost[0][source] = 0;

  while (!pq.empty()) {
    auto c = pq.top();
    pq.pop();

    int pay = c.first.second;
    int taken = c.first.first;
    int u = c.second;

    if (used[pay][u])
      continue;

    used[pay][u] = true;

    for (auto [to, val] : graph[u]) {
      auto [time, price] = val;
      if (price + pay > V) continue;
      if (cost[price + pay][to] > taken + time) {
        cost[price + pay][to] = taken + time;
        pq.push(std::pair{std::pair{taken + time, price + pay}, to});
      }
    }
  }

  int ans = inf;
  for (int i = 0; i < 201; i++) {
    ans = std::min(ans, cost[i][destination]);
  }
  if (ans == inf) return -1;
  return ans;
}

int main() {
  std::cin >> V >> N >> M;
  for (int i = 0; i < M; i++) {
    int a, b, t, p;
    std::cin >> a >> b >> t >> p;
    auto e = std::pair{t, p};
    graph[a].push_back(std::pair{b, e});
    graph[b].push_back(std::pair{a, e});
  }
  int x, y;
  std::cin >> x >> y;
  std::cout << solve(x, y) << '\n';
}