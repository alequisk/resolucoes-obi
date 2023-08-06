#include<iostream>
#define MAXM 400

int bad_pairs[MAXM];

int main() {
  int N, M;
  std::cin >> N >> M;
  for (int i = 0; i < M; i++) {
    int u, v; std::cin >> u >> v, --u, --v;
    bad_pairs[i] = (1 << u) | (1 << v);
  }
  int MAX = 1 << N;
  int answer = 0;
  for (int mask = 1; mask < MAX; mask++) {
    bool is_bad = false;
    for (int j = 0; j < M; j++) {
      if ((mask & bad_pairs[j]) == bad_pairs[j]) {
        is_bad = true; break;
      }
    }
    if (!is_bad) ++answer;
  }

  std::cout << answer << '\n';
  
  return 0;
}
